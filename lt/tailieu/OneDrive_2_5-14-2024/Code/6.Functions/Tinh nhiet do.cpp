#include <iostream>

using namespace std;

void Nhietdo(double x, double *y, double *z)
{
	double k, f;
	f = (x*1.8)+32;
	k = x + 273.15;
	*y = f;
	*z = k;
}
int main ()
{
	double x, *y, *z, a, b;
	cout << "Nhap do C: ";
	cin >> x;
	y = &a;
	z = &b;
	Nhietdo(x, y, z);
//	cout << "Do F: "<<a<<endl<<"Do K: "<<b;
	cout << "Do F: "<<*y<<endl<<"Do K: "<<*z;
}


