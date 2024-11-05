#include <bits/stdc++.h>
using namespace std;
float f(float x)
{
	return (x*log10(x))-1.2;
}

void secant(float x1, float x2, float E)
{
	float n = 0, xm, x0, c;
	if (f(x1) * f(x2) < 0) {
		do {
			x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
			cout<<"x0= "<<x0<<endl;
			c = f(x1) * f(x0);
			if (c == 0)
			break;
			x1 = x2;
			x2 = x0;
			xm = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
		} while (fabs(xm - x0) >= E); 
		cout<<"root of the given equation is "<<x0;
	} 
	else cout << "Can not find a root in the given interval";
}


int main()
{
	float x1 = 2, x2 = 3, E = 0.0001;
	secant(x1, x2, E);
	return 0;
}