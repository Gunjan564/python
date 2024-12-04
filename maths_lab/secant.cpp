#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Define the function f(x) = ((2 * x) - (log10(x)) - 7)
// double f(double x) {
//     return ((2 * x) - (log10(x)) - 7);
// }

// // Secant Method to find the root
// double secantMethod(double x0, double x1, double tol, int maxIter) {
//     double x2;
//     int iter = 0;

//     while (iter < maxIter) {
//         double f0 = f(x0);
//         double f1 = f(x1);

//         // Secant formula
//         x2 = x1 - f1 * (x1 - x0) / (f1 - f0);

//         // Display the value of x with the current iteration number
//         cout << "x" << iter << " = " << x2 << endl;

//         // Check if the result is within the tolerance
//         if (fabs(f(x2)) < tol || fabs(x2 - x1) < tol) {
//             return x2;
//         }

//         // Update values
//         x0 = x1;
//         x1 = x2;

//         iter++;
//     }

//     // Return the result after maximum iterations if not converged
//     cout << "Secant Method did not converge within the maximum number of iterations.\n";
//     return x2;
// }

// int main() {
//     double x0 = 2.5;        // Initial guess 1
//     double x1 = 2.740646;   // Initial guess 2
//     double tol = 1e-6;      // Tolerance
//     int maxIter = 100;      // Predefined maximum number of iterations

//     // Call the secant method
//     double root = secantMethod(x0, x1, tol, maxIter);

//     // Display the root with 6 decimal places
//     cout << fixed << setprecision(6);
//     cout << "Root: " << root << endl;

//     return 0;
// }
double f(double x)
{
    return pow(x,3)-(2*x)-5;
}
void secant(double x0,double x1)
{
    double x2;
    for(int i=1;i<=7;i++)
    {
        x2=x1-((x1-x0)/(f(x1)-f(x0)))*f(x1);
        x0=x1;
        x1=x2;
    }
    cout<<x2;
}
int main()
{
    double a=1;
    double b=2.2;
    // int h=f(a);
    // int i=f(b);
    // cout<<h<<endl;
    // cout<<i;
    secant(a,b);
    return 0;
}