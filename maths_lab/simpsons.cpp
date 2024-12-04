#include <iostream>
#include <iomanip>
using namespace std;

// float y(float x)
// {
//     return 1 / (1 + x * x);  // Function to integrate
// }

// int main()
// {
//     float x0 = 0;     // Lower limit
//     float xn = 6;     // Upper limit
//     int n = 6;        // Number of subintervals (must be even)
//     float h, s = 0;
//     int i;

//     // Ensure the number of subintervals is even
//     if (n % 2 != 0)
//     {
//         cout << "Number of subintervals must be even!" << endl;
//         return 1;
//     }
//     h = (xn - x0) / n;  // Calculate step size
//     s = y(x0) + y(xn);  // Start with the first and last terms

//     // Apply Simpson's 1/3rd rule
//     for (i = 1; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             s += 2 * y(x0 + i * h);  // Add terms with coefficient 2 (even indices)
//         }
//         else
//         {
//             s += 4 * y(x0 + i * h);  // Add terms with coefficient 4 (odd indices)
//         }
//     }
//     cout << fixed << setprecision(4);
//     cout << "Value of the integral is: " << (h / 3) * s << endl;
//     return 0;
// }
double y(double x)
{
    return ;
}
int main()
{
    double x0;
    double xn;
    double s=y(x0)+(xn);
    double n;
    double h=(x0-xn)/n;
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            s+=2*y(x0+h*i);
        }
        else{
            s+=2*y(x0+h*i);
        }
    }
    return 0;
}