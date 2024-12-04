#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function to integrate
double f(double x) {
    return 2 * x - log10(x) - 7;  // Example: f(x) = 2x - log10(x) - 7
}

// Function to calculate integration using Simpson's 1/3 rule
double simpsons13(double a, double b, int n) {
    if (n % 2 != 0) {
        cerr << "Error: The number of intervals (n) must be even for Simpson's 1/3 rule." << endl;
        return NAN;
    }

    double h = (b - a) / n;
    double sum = f(a) + f(b);

    // Apply 1/3 rule
    for (int i = 1; i < n; ++i) {
        if (i % 2 == 0) {
            sum += 2 * f(a + i * h);
        } else {
            sum += 4 * f(a + i * h);
        }
    }

    return (h / 3) * sum;
}

int main() {
    // Valid integration limits for log10(x)
    double a = 1, b = 5;  // Example interval: x > 0

    // Number of intervals (must be even)
    int n = 6;  // Example: 6 intervals

    cout << "Calculating integration using Simpson's 1/3 rule:" << endl;
    cout << "Function: f(x) = 2x - log10(x) - 7" << endl;
    cout << "Interval: [" << a << ", " << b << "]" << endl;
    cout << "Number of intervals: " << n << endl;

    double result = simpsons13(a, b, n);
    if (!isnan(result)) {
        cout << "Result: " << fixed << setprecision(6) << result << endl;
    }

    return 0;
}
// Results
// Calculating integration using Simpson's 1/3 rule:
// Function: f(x) = 2x - log10(x) - 7
// Interval: [1, 5]
// Number of intervals: 6
// Result: -5.757030