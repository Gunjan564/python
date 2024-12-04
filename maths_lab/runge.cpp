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
    double x = 0.2;   // Point at which we want the solution
    double h = 0.1;   // Step size

    // Print header
    cout << fixed << setprecision(6);
    cout << "Approximating y(0.2) for dy/dx = x + y, y(0) = 1 using the Runge-Kutta Method:\n";

    double xn = x0;
    double yn = y0;

    while (xn < x) {
        double k1 = h * f(xn, yn);                     // Slope at the beginning of the interval
        double k2 = h * f(xn + h / 2.0, yn + k1 / 2.0); // Slope at the midpoint (using k1)
        double k3 = h * f(xn + h / 2.0, yn + k2 / 2.0); // Slope at the midpoint (using k2)
        double k4 = h * f(xn + h, yn + k3);             // Slope at the end of the interval
        yn = yn + (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;    // Update y value
        xn = xn + h;                                    // Increment x
    }

    // Output the final approximation
    cout << "Approximate solution at x = " << x << ": y(" << x << ") = " << yn << "\n";

    // Output the exact solution for comparison
    cout << "Exact solution at x = " << x << ": y(" << x << ") = " << exactSolution(x) << "\n";

    return 0;
}
