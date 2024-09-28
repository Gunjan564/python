#include<iostream>
#include<cmath>
using namespace std;
float f(float x)
{
    return ((x*log10(x))-1.2);
}
float bisection(float a,float b,float tol)
{
    if((f(a)*f(b))>=0)
    {
        cout<<"Invalid Interval. f(a) and f(b) must have opposite signs."<<endl;
    }
    float c;
    while((b-a)/2>=tol)
    {
        c=(a+b)/2;
        if(f(c)==0)
        {
            return c;
        }
        else if(f(a)*f(c)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
        return (a+b)/2;
    }
}
int main()
{
    float a,b,tol;
    cout<<"Enter the lower bound (a): ";
    cin>>a;
    cout<<"Enter the upper bound (b): ";
    cin>>b;
    cout<<endl;
    cout<<"Enter the tolerance: ";
    cin>>tol;
    cout<<endl;
    float root=bisection(a,b,tol);
    cout<<"Approximate root: "<<root;
    return 0;
return 0;
}