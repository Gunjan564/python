#include <iostream>
#include <cmath>
#include <iomanip> // For setting precision

using namespace std;

// Define the function f(x, y) = dy/dx
double f(double x, double y) {
    return x + y; // Example: dy/dx = x + y
}

// Define the exact solution for verification
double exactSolution(double x) {
    return 2 * exp(x) - x - 1; // Example solution for dy/dx = x + y with y(0) = 1
}

int main() {
    // Example problem: dy/dx = x + y, y(0) = 1, find y(0.2)
    double x0 = 0;      // Initial x
    double y0 = 1;      // Initial y
    double x = 0.2;     // Point at which solution is needed
    int iterations = 4; // Number of iterations

    // Print header
    cout << fixed << setprecision(6);
    cout << "Approximating y(0.2) for dy/dx = x + y, y(0) = 1\n";
    cout << "Iteration-wise approximation using Picard's Method:\n";

    double y_approx = y0; // Initial approximation
    for (int i = 1; i <= iterations; ++i) {
        double integral = y0; // Initialize with y0
        double step = 0.01;   // Small step size for numerical integration
        for (double xi = x0; xi <= x; xi += step) {
            integral += f(xi, y_approx) * step;
        }

        y_approx = integral; // Update approximation
        cout << "Iteration " << i << ": y(" << x << ") = " << y_approx << "\n";
    }

    // Output the exact solution for comparison
    cout << "\nExact solution at x = " << x << ": y(" << x << ") = " << exactSolution(x) << "\n";

    return 0;
}
