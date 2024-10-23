#include<iostream>
#include<cmath>
using namespace std;

float f(float x)
{
    return ((2 * x) - (log10(x)) - 7);
}

float bisection(float a, float b, float tol, int &iterations)
{
    if ((f(a) * f(b)) >= 0)
    {
        cout << "Invalid Interval. f(a) and f(b) must have opposite signs." << endl;
        return -1; // Return an error code for invalid interval
    }

    float c;
    iterations = 0; // Initialize iteration counter
    while ((b - a) / 2 >= tol)
    {
        c = (a + b) / 2;
        
        // Display the current step and midpoint value with subscripted x
        cout << "x" << iterations << " = " << c << endl;

        iterations++; // Increment the counter

        if (f(c) == 0)
        {
            return c; // Exact root found
        }
        else if (f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    return (a + b) / 2; // Return the approximate root
}

int main()
{
    // Pre-defined values for a, b, and tolerance
    float a = 2.0;      // Lower bound
    float b = 5.0;      // Upper bound
    float tol = 0.0001; // Tolerance
    int iterations;     // Variable to hold the number of iterations
    // Call the bisection method
    float root = bisection(a, b, tol, iterations);
    // Check if a valid root was found
    if (root != -1)
    {
        cout << "Approximate root: " << root << endl;
        cout << "Number of iterations: " << iterations << endl;
    }
    return 0;
}