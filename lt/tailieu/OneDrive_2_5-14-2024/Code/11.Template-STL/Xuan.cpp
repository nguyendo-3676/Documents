#include<iostream>
#include<string.h>
using namespace std;

int numchars( char kytu, char chuoi[], int vitri){
	if(vitri >= strlen(chuoi)){
		return 0;
	}
	else if(kytu==chuoi[vitri]){
			return numchars(kytu, chuoi, vitri+1)+1;
		}
	else return numchars(kytu, chuoi, vitri+1);
}
int main(){
	char kytu;
	cout<<"Nhap ki tu :"; cin>>kytu;
	char chuoi[100];
	cin.ignore();
	cout<<"nhap chuoi :";cin.getline(chuoi, 99);
	int vitri;
	cout<<"nhap vi tri bat dau xet trong chuoi:";cin>>vitri;
	cout<<"ky tu  "<<kytu<<" xuat hien trong chuoi "<< numchars(kytu, chuoi, vitri)<<" lan ke tu vi tri "<<vitri <<"trong chuoi";
}
a
