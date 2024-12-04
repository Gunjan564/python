#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function to integrate
double f(double x) {
    return 2 * x - log10(x) - 7;  // Example: f(x) = 2x - log10(x) - 7
}

// Function to calculate integration using the trapezoidal rule
double trapezoidalRule(double a, double b, int n) {
    double h = (b - a) / n;  // Step size
    double sum = f(a) + f(b);

    // Add middle terms
    for (int i = 1; i < n; ++i) {
        sum += 2 * f(a + i * h);
    }

    return (h / 2) * sum;
}

int main() {
    // Valid integration limits for log10(x)
    double a = 1, b = 5;  // Example interval: x > 0

    // Number of intervals
    int n = 6;  // Example: 6 intervals

    cout << "Calculating integration using the trapezoidal rule:" << endl;
    cout << "Function: f(x) = 2x - log10(x) - 7" << endl;
    cout << "Interval: [" << a << ", " << b << "]" << endl;
    cout << "Number of intervals: " << n << endl;

    double result = trapezoidalRule(a, b, n);
    cout << "Result: " << fixed << setprecision(6) << result << endl;
    return 0;
}
// Result
// Calculating integration using the trapezoidal rule:
// Function: f(x) = 2x - log10(x) - 7
// Interval: [1, 5]
// Number of intervals: 6
// Result: -5.745017