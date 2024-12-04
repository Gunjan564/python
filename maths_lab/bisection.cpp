#include<iostream>
#include<cmath>
using namespace std;


// float f(float x)
// {
//     return pow(x,3)-(4*x)-9;
// }
// float bisection(float a,float b)
// {
//     float x;
//     if(f(a)*f(b)>0)
//     {
//         cout<<"invalid interval";
//         return -1;
//     }
//     for(int i=1;i<=10;i++)
//     {
//         x=(a+b)/2;
//         if(f(x)==0)
//         {
//             cout<<x;
//             return x;
//         }
//         else if(f(a) * f(x) < 0)
//         {
//             cout<<"x"<<i<<" = "<<x<<endl;
//             b=x;
//         }
//         else 
//         {
//             cout<<"x"<<i<<" = "<<x<<endl;
//             a=x;
//         }
//     }
//     cout<<(a+b)/2;
// }
// int main()
// {
//     float a=2;
//     float b=3;
//     double ans=bisection(a,b);
//     return 0;
// }
float f(float x)
{
    return;
}
void bisection(float a,float b)
{
    if(f(a)*f(b)>0)
    {
        cout<<"Invalid interval";
        return;
    }
    float x;
    for(int i=1;i<=10;i++)
    {
        x=(a+b)/2;
        if(f(x)==0)
        {
            cout<<x;
        }
        else if(f(a)*f(x)<0)
        {
            b=x;
        }
        else 
        {
            a=x;
        }
    }
}
int main()
{
    float a;
    float b;
    bisection(a,b);
    return 0;
}