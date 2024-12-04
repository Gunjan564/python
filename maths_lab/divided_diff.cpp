#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate divided differences table
void dividedDifferenceTable(double x[], double y[][10], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            y[j][i] = (y[j + 1][i - 1] - y[j][i - 1]) / (x[j + i] - x[j]);
        }
    }
}

// Function to apply Newton's divided difference formula
double applyFormula(double x[], double y[][10], double value, int n) {
    double result = y[0][0];
    double product;

    for (int i = 1; i < n; i++) {
        product = 1;
        for (int j = 0; j < i; j++) {
            product *= (value - x[j]);
        }
        result += (product * y[0][i]);
    }
    return result;
}

// Function to display divided differences table with customized headers
void displayTable(double x[], double y[][10], int n) {
    // Print column headers
    cout << setw(10) << "x" << setw(15) << "f(x)";
    for (int i = 1; i < n; i++) {
        cout << setw(15) << "f[x" << i << "]";
    }
    cout << endl;

    // Print the table with x values and divided differences
    for (int i = 0; i < n; i++) {
        cout << setw(10) << x[i];
        for (int j = 0; j < n - i; j++) {
            cout << setw(15) << y[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n = 4;  // Number of data points
    double x[] = {5, 6, 9, 11};  // x values
    double y[10][10];  // Divided difference table

    // y values (f(x))
    y[0][0] = 12;
    y[1][0] = 13;
    y[2][0] = 14;
    y[3][0] = 16;

    // Calculating divided difference table
    dividedDifferenceTable(x, y, n);

    // Displaying divided difference table with headers
    cout << "Divided Difference Table:" << endl;
    displayTable(x, y, n);

    // Value to interpolate
    double value = 7;

    // Interpolating and displaying the result
    double result = applyFormula(x, y, value, n);
    cout << "\nThe interpolated value at x = " << value << " is " << result << endl;

    return 0;
}
// Results
// Divided Difference Table:
//          x           f(x)            f[x1]            f[x2]            f[x3]
//          5             12              1      -0.166667           0.05
//          6             13       0.333333       0.133333
//          9             14              1
//         11             16

// The interpolated value at x = 7 is 13.4667