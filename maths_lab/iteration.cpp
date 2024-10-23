#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Define the function f(x) = 2 * x - log10(x) - 7
double f(double x) {
    return (2 * x - log10(x) - 7);
}

// Iteration method to approximate the root
double iterationMethod(double x0, double tol, int maxIter) {
    double x1;
    int iter = 0;

    while (iter < maxIter) {
        // Rearrange the equation for fixed-point iteration: x = (log10(x) + 7) / 2
        x1 = (log10(x0) + 7) / 2;

        // Display the current iteration and the value of x
        cout << "Iteration " << iter << ": x" << " = " << x1 << endl;

        // Check if the result is within the tolerance
        if (fabs(x1 - x0) < tol) {
            return x1;
        }

        // Update x0 for the next iteration
        x0 = x1;
        iter++;
    }

    // Return the result after maximum iterations if not converged
    cout << "Iteration method did not converge within the maximum number of iterations.\n";
    return x1;
}

int main() {
    double x0 = 2.5;        // Initial guess
    double tol = 1e-6;      // Tolerance
    int maxIter = 100;      // Maximum number of iterations

    // Call the iteration method
    double root = iterationMethod(x0, tol, maxIter);

    // Display the root with 6 decimal places
    cout << fixed << setprecision(6);
    cout << "Root: " << root << endl;

    return 0;
}