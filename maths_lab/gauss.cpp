#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

// Function to perform Gauss Elimination
void gaussElimination(vector<vector<double>>& matrix, vector<double>& solution) {
    int n = matrix.size();

    // Forward Elimination
    for (int i = 0; i < n; ++i) {
        // Pivoting
        for (int k = i + 1; k < n; ++k) {
            if (fabs(matrix[i][i]) < fabs(matrix[k][i])) {
                swap(matrix[i], matrix[k]);
            }
        }

        // Make upper triangular matrix
        for (int k = i + 1; k < n; ++k) {
            double factor = matrix[k][i] / matrix[i][i];
            for (int j = i; j <= n; ++j) {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }

    // Back Substitution
    solution.resize(n);
    for (int i = n - 1; i >= 0; --i) {
        solution[i] = matrix[i][n] / matrix[i][i];
        for (int k = i - 1; k >= 0; --k) {
            matrix[k][n] -= matrix[k][i] * solution[i];
        }
    }
}

int main() {
    // Example: Solve the system of equations
    // 2x + 3y + z = 9
    // 4x + y + 2z = 10
    // 3x + 2y + 3z = 13
    vector<vector<double>> matrix = {
        {2, 3, 1, 9},   // Coefficients of equation 1 with constant
        {4, 1, 2, 10},  // Coefficients of equation 2 with constant
        {3, 2, 3, 13}   // Coefficients of equation 3 with constant
    };

    vector<double> solution;

    gaussElimination(matrix, solution);

    cout << "The solution is:" << endl;
    for (int i = 0; i < solution.size(); ++i) {
        cout << "x" << i + 1 << " = " << fixed << setprecision(6) << solution[i] << endl;
    }

    return 0;
}
// Results
// The solution is:
// x1 = 0.933333
// x2 = 1.600000
// x3 = 2.333333