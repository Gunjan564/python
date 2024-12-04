#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// // Define the function f(x) = 2 * x - log10(x) - 7
// double f(double x) {
//     return (2 * x - log10(x) - 7);
// }

// // Define the derivative f'(x) = 2 - 1 / (x * ln(10))
// double f_derivative(double x) {
//     return (2 - 1 / (x * log(10)));
// }

// // Newton-Raphson method
// double newtonRaphson(double x0, double tol, int maxIter) {
//     double x1;
//     int iter = 0;

//     while (iter < maxIter) {
//         double f0 = f(x0);
//         double f_prime = f_derivative(x0);

//         // Newton-Raphson formula: x1 = x0 - f(x0) / f'(x0)
//         x1 = x0 - f0 / f_prime;

//         // Display the value of x for each iteration
//         cout << "x" << iter << " = " << x1 << endl;

//         // Check if the result is within the tolerance
//         if (fabs(x1 - x0) < tol) {
//             return x1;
//         }

//         // Update x0 for the next iteration
//         x0 = x1;
//         iter++;
//     }

//     // Return the result after maximum iterations if not converged
//     cout << "Newton-Raphson method did not converge within the maximum number of iterations.\n";
//     return x1;
// }

// int main() {
//     double x0 = 2.5;        // Initial guess
//     double tol = 1e-6;      // Tolerance
//     int maxIter = 100;      // Maximum number of iterations

//     // Call the Newton-Raphson method
//     double root = newtonRaphson(x0, tol, maxIter);

//     // Display the root with 6 decimal places
//     cout << fixed << setprecision(6);
//     cout << "Root: " << root << endl;

//     return 0;
// }
    double f(double x)
    {
        return (2*x)-log10(x)-7;
    }
    double f_der(double x)
    {
        return 2-1/(x*log(x));
    }
    void newton_raphson(double x0)
    {
        double x1;
        for(int i=1;i<=10;i++)
        {
            x1=x0-(f(x0)/f_der(x0));
            cout<<x0<<endl;
            x0=x1;
        }
        cout<<x1;
    }
int main()
{
    double a=2.5;
    newton_raphson(a);
    return 0;
}