#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Define the function f(x, y) = dy/dx
double f(double x, double y) {
    return x + y; // Example: dy/dx = x + y
}

// Define the exact solution for verification
double exactSolution(double x) {
    return 2 * exp(x) - x - 1; // Exact solution for dy/dx = x + y with y(0) = 1
}

int main() {
    // Example problem: dy/dx = x + y, y(0) = 1, find y(0.2)
    double x0 = 0;    // Initial x
    double y0 = 1;    // Initial y
    double x = 0.2;   // Point at which we want to approximate the solution
    double h = 0.1;   // Step size

    // Print header
    cout << fixed << setprecision(6);
    cout << "Approximating y(0.2) for dy/dx = x + y, y(0) = 1 using Euler's Modified Method:\n";

    double xn = x0;
    double yn = y0;

    while (xn < x) {
        double slope1 = f(xn, yn);                   // Slope at the beginning of the interval
        double predictor = yn + h * slope1;         // Predictor step (Euler's step)
        double slope2 = f(xn + h, predictor);       // Slope at the end of the interval
        yn = yn + (h / 2) * (slope1 + slope2);      // Corrector step (Modified Euler's)
        xn = xn + h;                                // Increment x
    }

    // Output the final approximation
    cout << "Approximate solution at x = " << x << ": y(" << x << ") = " << yn << "\n";

    // Output the exact solution for comparison
    cout << "Exact solution at x = " << x << ": y(" << x << ") = " << exactSolution(x) << "\n";

    return 0;
}
xn=x0;
yn=y0;
h;

while(xn<x)
{
    slope1=f(xn,yn);
    predictor=yn+h*slope1;
    slope2=f(xn+h,predictor);
    yn=yn+(h/2)*(slope1+slope2);
    xn=xn+h;
}