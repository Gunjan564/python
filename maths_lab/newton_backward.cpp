#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// // Function to calculate the product of terms for u(u+1)(u+2)...(u+n-1)
// float u_cal(float u, int n)
// {
//     float temp = u;
//     for (int i = 1; i < n; i++)
//     {
//         temp = temp * (u + i);
//     }
//     return temp;
// }

// // Function to calculate factorial of a number
// int fact(int n)
// {
//     int f = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         f *= i;
//     }
//     return f;
// }

// int main()
// {
//     int n = 5; // Number of data points

//     // Array of x values (independent variable)
//     float x[] = {40, 50, 60, 70, 80};

//     // 2D array for y values and their backward differences
//     float y[5][5];

//     // Initializing y values (dependent variable)
//     y[0][0] = 31;
//     y[1][0] = 73;
//     y[2][0] = 124;
//     y[3][0] = 159;
//     y[4][0] = 190;

//     // Constructing the backward difference table
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = n - 1; j >= i; j--)
//         {
//             y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
//         }
//     }

//     // Display the backward difference table
//     cout << "Backward Difference Table:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << setw(4) << x[i] << "\t";
//         for (int j = 0; j <= i; j++)
//         {
//             cout << setw(10) << y[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     // Value at which interpolation is required
//     float value = 69;

//     // Step size (difference between consecutive x values)
//     float h = x[1] - x[0];

//     // Calculating u for interpolation
//     float u = (value - x[n - 1]) / h;

//     // Initialize the sum with the last y value (y[n-1][0])
//     float sum = y[n - 1][0];

//     // Using the backward difference formula to calculate interpolated value
//     for (int i = 1; i < n; i++)
//     {
//         sum = sum + (u_cal(u, i) * y[n - 1][i]) / fact(i);
//     }

//     // Display the interpolated value
//     cout << "\nValue at x = " << value << " is " << sum << endl;

//     return 0;
// }
int main()
{
    int n=;
    float x[]={};
    float y[][];
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            y[j][i]=y[j][i-1]-y[j-1][i-1];
        }
    }
    float sum=y[n-1][0];
    float h=x1-x0;
    float u=(value-x[n-1])/h
    for (int i=0;i<n;i++)
    {
        sum+= u_cal(u,i)*y[n-1][i]/fact(i)
    }
    return 0;
}