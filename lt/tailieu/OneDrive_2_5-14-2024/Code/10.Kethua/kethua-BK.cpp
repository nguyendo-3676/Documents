#include<iostream>
#include<string.h>
using namespace std;

class nguoi{
	protected:
		string hovaten;
		int tuoi;
	
	public:
		nguoi(string _hovaten,int _tuoi)
			{
				hovaten=_hovaten;
				tuoi=_tuoi; 
			 } 
	void nhap(){
		cout<<"Nhap ho va ten: ";
		getline(cin,hovaten);
		cout<<"Nhap tuoi:";
		cin>> tuoi; 
	} 
	void xuat(){
		cout<<"Ho va ten:";
		cout<< hovaten<<endl;
		cout<<"Tuoi:";
		cout<<tuoi<<endl; 
	} 
}; 
class sinhvien: public nguoi{
	protected:
		int masinhvien;
		float gpa;
		int khoa;
	public:
	sinhvien(string _hovaten,int _tuoi,int _masinhvien,float _gpa,int _khoa):
	nguoi(_hovanten,_tuoi)
	{
		masinhvien=_masinhvien;
		gpa=_gpa;
		khoa=_khoa; 
	 } 
	void nhapsv(){
		cout<<"Ma sinh vien:";
		cin>> masinhvien;
		cout<<"Diem GPA:";
		cin>> gpa;
		cout<<"Khoa:";
		cin>> khoa; 
	} 
	void xuatsv(){
		cout<<"Ma sinh vien:";
		cout<<masinhvien<<endl;
		cout<<"Diem GPA:";
		cout<<gpa<<endl;
		cout<<"Khoa:";
		cout<<khoa<<endl; 
	} 
}; 

