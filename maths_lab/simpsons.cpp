#include <iostream>
#include <iomanip>
using namespace std;

float y(float x)
{
    return 1 / (1 + x * x);  // Function to integrate
}

int main()
{
    float x0, xn, h, s = 0;
    int i, n;

    // Example question:
    // Calculate the integral of 1 / (1 + x^2) from x = 0 to x = 6 using Simpson's 1/3rd rule with 6 subintervals.
    
    cout << "Enter x0 (lower limit): ";
    cin >> x0; 
    cout<<"Enter xn (upper limit): " ;
    cin >> xn ;
    cout<<"Enter the number of subintervals (even): " ;
    cin >> n;

    // Ensure the number of subintervals is even
    if (n % 2 != 0)
    {
        cout << "Number of subintervals must be even!" << endl;
        return 1;
    }

    h = (xn - x0) / n;  // Calculate step size
    s = y(x0) + y(xn);  // Start with the first and last terms

    // Apply Simpson's 1/3rd rule
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s += 2 * y(x0 + i * h);  // Add terms with coefficient 2 (even indices)
        }
        else
        {
            s += 4 * y(x0 + i * h);  // Add terms with coefficient 4 (odd indices)
        }
    }

    cout << fixed << setprecision(4);
    cout << "Value of the integral is: " << (h / 3) * s << endl;

    return 0;
}