#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// Define the function f(x) = x * log10(x) - 1.2
double f(double x) {
    return x * log10(x) - 1.2;
}

// Secant Method to find the root
double secantMethod(double x0, double x1, double tol, int maxIter) {
    double x2;
    int iter = 0;

    while (iter < maxIter) {
        double f0 = f(x0);
        double f1 = f(x1);

        // Secant formula
        x2 = x1 - f1 * (x1 - x0) / (f1 - f0);

        // Check if the result is within the tolerance
        if (fabs(f(x2)) < tol || fabs(x2 - x1) < tol) {
            return x2;
        }

        // Update values
        x0 = x1;
        x1 = x2;
        iter++;
    }

    // Return the result after maximum iterations if not converged
    cerr << "Secant Method did not converge within the maximum number of iterations.\n";
    return x2;
}

int main() {
    double x0 = 2.5;      // Initial guess 1
    double x1 = 2.740646;      // Initial guess 2
    double tol = 1e-6;    // Tolerance
    int maxIter = 100;    // Maximum number of iterations

    double root = secantMethod(x0, x1, tol, maxIter);

    cout << fixed << setprecision(6);
    cout << "Root: " << root << endl;

    return 0;
}
