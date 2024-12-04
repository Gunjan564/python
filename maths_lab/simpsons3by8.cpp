#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function to integrate
double f(double x) {
    return 2 * x - log10(x) - 7;  // Example: f(x) = 2x - log10(x) - 7
}

// Function to calculate integration using Simpson's 3/8 rule
double simpsons38(double a, double b, int n) {
    if (n % 3 != 0) {
        cerr << "Error: The number of intervals (n) must be a multiple of 3 for Simpson's 3/8 rule." << endl;
        return NAN;
    }

    double h = (b - a) / n;
    double sum = f(a) + f(b);

    // Apply 3/8 rule
    for (int i = 1; i < n; ++i) {
        if (i % 3 == 0) {
            sum += 2 * f(a + i * h);
        } else {
            sum += 3 * f(a + i * h);
        }
    }

    return (3 * h / 8) * sum;
}

int main() {
    // Integration limits
    double a = 1, b = 5;  // Example interval where log10(x) is valid

    // Number of intervals (must be a multiple of 3)
    int n = 6;  // Example: 6 intervals

    cout << "Calculating integration using Simpson's 3/8 rule:" << endl;
    cout << "Function: f(x) = 2x - log10(x) - 7" << endl;
    cout << "Interval: [" << a << ", " << b << "]" << endl;
    cout << "Number of intervals: " << n << endl;

    double result = simpsons38(a, b, n);
    if (!isnan(result)) {
        cout << "Result: " << fixed << setprecision(6) << result << endl;
    }

    return 0;
}
// Results
// Calculating integration using Simpson's 3/8 rule:
// Function: f(x) = 2x - log10(x) - 7
// Interval: [1, 5]
// Number of intervals: 6
// Result: -5.756492