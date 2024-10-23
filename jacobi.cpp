#include<iostream>
using namespace std;
void solve_jacobi(float a1,float b1,float c1,float d1,float a2,float b2,float c2,float d2,float a3,float b3,float c3,float d3,float iter)
{
    float z0=0,y0=0,x0=0;
    float x=0;
    float y=0;
    float z=0;
    for(int i=1;i<=iter;i++){
        x0=(1/a1)*(d1-(c1*z)-(b1*y));
        y0=((1/b2)*(d2-(c2*z)-(a2*x)));
        z0=((1/c3)*(d3-(a3*z)-(b3*y)));
        x=x0;
        y=y0;
        z=z0;
    }
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"z= "<<z<<endl;
}
int main()
{
    float a1=20;
    float b1=1;
    float c1=-2;
    float d1=17;
    float a2=3;
    float b2=20;
    float c2=-1;
    float d2=-18;
    float a3=2;
    float b3=-3;
    float c3=20;
    float d3=25;
    float iter=9;
    solve_jacobi(a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3,iter);
return 0;
}
