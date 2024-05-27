#include <iostream>
#include <math.h>
using namespace std; 
class phanSo
{
int _tu;
int _mau;
public:
void setTuMau(int x, int y) {
	_tu = x;
	_mau = y;
}
int getTu() {
	return _tu;
}
int getMau() {
	return _mau;
}
void div(phanSo p1, phanSo p2)
{
	_tu = p1._tu * p2._mau;
	_mau = p1._mau * p2._tu;
}
void inPhanso()
{
	cout << _tu<< "/ " << _mau<<endl;
}
void daoNguoc(phanSo p) 
{
	_mau=p._tu;
	_tu=p._mau;	
}
void daoNguoc()
{
	int temp=_mau;
	_mau=_tu;
	_tu=temp;
}
};
int main() {
	phanSo p,p1, p2;
	p1.setTuMau(3, 4);
	p2.setTuMau(5, 6);
	p.div(p1, p2);
	p.inPhanso();
	cout << endl;
	p.daoNguoc();
	p.inPhanso();
	return 0;
}


