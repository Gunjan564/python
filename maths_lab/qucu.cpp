#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Solves a system of 3 equations with 3 unknowns using Gaussian elimination
void solveLinearSystem(vector<vector<double>> &matrix, vector<double> &solution) {
    int n = 3; // Size of the matrix (3x3)
    for (int i = 0; i < n; ++i) {
        // Make the diagonal element 1
        double diag = matrix[i][i];
        for (int j = 0; j <= n; ++j) {
            matrix[i][j] /= diag;
        }

        // Eliminate the i-th column for rows below
        for (int k = i + 1; k < n; ++k) {
            double factor = matrix[k][i];
            for (int j = 0; j <= n; ++j) {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }

    // Back substitution
    for (int i = n - 1; i >= 0; --i) {
        solution[i] = matrix[i][n];
        for (int j = i + 1; j < n; ++j) {
            solution[i] -= matrix[i][j] * solution[j];
        }
    }
}

int main() {
    // Points to fit the quadratic curve
    vector<double> x = {1.0, 2.0, 3.0};
    vector<double> y = {2.0, 4.0, 10.0};

    // Matrix for the system of equations
    vector<vector<double>> matrix(3, vector<double>(4, 0.0));

    // Formulate the equations: ax^2 + bx + c = y
    for (int i = 0; i < 3; ++i) {
        matrix[i][0] = x[i] * x[i]; // Coefficient of a
        matrix[i][1] = x[i];        // Coefficient of b
        matrix[i][2] = 1.0;         // Coefficient of c
        matrix[i][3] = y[i];        // Right-hand side
    }

    // Solve for a, b, c
    vector<double> coefficients(3, 0.0);
    solveLinearSystem(matrix, coefficients);

    double a = coefficients[0];
    double b = coefficients[1];
    double c = coefficients[2];

    // Print the quadratic equation
    cout << fixed << setprecision(6);
    cout << "The quadratic equation is: y = " << a << "x^2 + " << b << "x + " << c << "\n";

    // Estimate y for a given x (e.g., x = 2.5)
    double target_x = 2.5;
    double estimated_y = a * target_x * target_x + b * target_x + c;

    cout << "For x = " << target_x << ", the estimated y = " << estimated_y << "\n";

    return 0;
}
