#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath> // Include for pow()
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

// Newton Backward Interpolation Method
double newtonBackwardInterpolation(const vector<double>& x, const vector<double>& y, double point) {
    int n = x.size();
    vector<vector<double>> diff(n, vector<double>(n, 0.0));

    // Initialize the difference table
    for (int i = 0; i < n; i++) {
        diff[i][0] = y[i];
    }
    for (int j = 1; j < n; j++) {
        for (int i = n - 1; i >= j; i--) {
            diff[i][j] = diff[i][j - 1] - diff[i - 1][j - 1];
        }
    }

    // Find the backward differences at the given point
    double h = x[1] - x[0];
    int i = n - 1; // Start at the last data point
    double u = (point - x[i]) / h;
    double derivative = diff[i][1] / h; // First term in derivative formula

    for (int i = 2; i < n; i++) {
        double product = 1;
        for (int j = 0; j < i - 1; j++) {
            product *= (u + j);
        }
        derivative += (product * diff[n-1][i]) / (factorial(i) * pow(h, i));
    }

    return derivative;
}

int main() {
    // Example dataset
    vector<double> x = {1, 2, 3, 4, 5};
    vector<double> y = {1, 4, 9, 16, 25}; // y = x^2
    double point = 3.0;

    // Compute the derivative
    double result = newtonBackwardInterpolation(x, y, point);

    cout << fixed << setprecision(6);
    cout << "Derivative of the function at x = " << point << " is " << result << endl;

    return 0;
}
