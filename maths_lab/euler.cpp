#include <iostream>
#include <iomanip>

using namespace std;

// Example ODE: dy/dx = x + y
// Function representing the ODE
double f(double x, double y) {
    return x + y;  // Example: dy/dx = x + y
}

// Euler's method to solve the ODE
double eulerMethod(double x0, double y0, double x, double h) {
    double y = y0;
    double n = (x - x0) / h;  // Total number of steps

    for (int i = 0; i < n; ++i) {
        y = y + h * f(x0, y);  // Euler formula: y(n+1) = y(n) + h * f(x, y)
        x0 += h;  // Increment x
    }

    return y;
}

int main() {
    // Initial conditions
    double x0 = 0;  // Initial x value
    double y0 = 1;  // Initial y value

    // Final x value and step size
    double x = 2;  // Find y at x = 2
    double h = 0.1;  // Step size

    cout << "Solving ODE using Euler's method:" << endl;
    cout << "Initial conditions: x0 = " << x0 << ", y0 = " << y0 << endl;
    cout << "Final value: x = " << x << ", step size: h = " << h << endl;

    // Calculate the value of y at x = 2
    double result = eulerMethod(x0, y0, x, h);

    // Output the result
    cout << "Approximated value of y at x = " << x << " is: " << fixed << setprecision(6) << result << endl;

    return 0;
}
// Result
// Solving ODE using Euler's method:
// Initial conditions: x0 = 0, y0 = 1
// Final value: x = 2, step size: h = 0.1
// Approximated value of y at x = 2 is: 10.455000