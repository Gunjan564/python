#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate f(x)
double f(double x) {
    return (2 * x) - (log10(x)) - 7;
}

// Function to implement the Regula Falsi method
double regulaFalsi(double a, double b, double tolerance, int maxIterations) {
    double c;  // To store the current guess
    int iteration = 0;

    // Check if the initial values are valid (f(a) and f(b) must have opposite signs)
    if (f(a) * f(b) > 0) {
        cout << "The initial guesses do not have opposite signs. Please try again." << endl;
        return -1;
    }
    do {
        // Applying the Regula Falsi formula
        c = b - (f(b) * (b - a)) / (f(b) - f(a));
        
        // Print the current guess and function value for debugging
        cout << "Iteration " << iteration + 1 << ": c = " << c << ", f(c) = " << f(c) << endl;
        
        // Check if the function value at c is close to zero (i.e., root found)
        if (fabs(f(c)) < tolerance) {
            return c;
        }

        // Update the interval for next iteration
        if (f(c) * f(a) < 0) {
            b = c;  // Root lies between a and c
        } else {
            a = c;  // Root lies between c and b
        }
        
        iteration++;
    } while (iteration < maxIterations);  // Continue until the maximum iterations or tolerance is met

    cout << "Maximum iterations reached. The approximation may not be accurate." << endl;
    return c;
}

int main() {
    double a = 1;  // Initial guess a
    double b = 10;  // Initial guess b
    double tolerance = 1e-6;  // Desired tolerance for the result
    int maxIterations = 100;  // Maximum number of iterations

    // Call the Regula Falsi method
    double root = regulaFalsi(a, b, tolerance, maxIterations);

    // Print the result
    if (root != -1) {
        cout << "The root of the equation is approximately: " << root << endl;
    }

    return 0;
}
