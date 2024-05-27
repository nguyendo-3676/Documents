#include<iostream>

using namespace std;
 class phanso
 {
 	private: 
 		int tuso,mauso;
 	public:
 		phanso(){
 			tuso =0;
 			mauso=1;
		 } 
		 phanso(int a){
		 	tuso=a;
		 	mauso=1;
		 }
		 phanso(int t,int m){
		 	tuso=t;
		 	mauso=m;
		 }
		 phanso(const phanso& p){
		 	tuso=p.tuso;
		 	mauso=p.mauso;
		 }
		 friend ostream& operator<<(ostream& os,phanso p){
		 	os<<p.tuso<<"/"<<p.mauso<<endl;
		 }
		 friend ostream& operator>>(iostream& is,phanso&p){
		 	cout<<"Nhap tu so";is>>p.tuso;
		 	cout<<"Nhap mau so";is>>p.mauso;
		 }
		 friend phanso operator/(phanso p1,phanso p2){
		 	phanso p3;
		 	p3.tuso=p1.tuso*p2.mauso;
		 	p3.mauso=p1.mauso*p2.tuso;
		 	return p3;
		 }
	};
		 int main(){
		 	phanso p1(2,3);
		 	phanso p2(3,4);
		 	cout<<"Chia 2 phan so:";
		 	phanso p3=p1/p2;
		 	cout<<p3;
		 	return 0;
		 }
