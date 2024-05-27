#include<iostream>

using namespace std;

void tang_dan(float a[100], int n){
	float space; // trung gian
	for(int i = 0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(a[j] < a[i]){ // sap xep mang theo thu tu tang dan
				space = a[i];
				a[i] = a[j];
				a[j] = space;
			}
		}
	}
}
void nhap_mang(float a[100], int n){// nhap mang da cho
	for(int i =0; i<n; i++){
		cin>> a[i];
	}
}
void in_mang(float a[100], int n){// in mang da cho
	for(int i = 0; i<n; i++){
		cout<< a[i]<< "  ";
	}
	cout<< endl;
}
void tron_mang(float a1[100], float a2[100], int n1, int n2){ // tron 2 mang vao nhau
	for(int i= n1; i< n1+n2; i++){
		a1[i] = a2[i - n1];
	}
}
int main(){
	int n1, n2, n;
	float a1[100], a2[100];
	
	cout<< "Nhap so phan tu cua a1[] : "; cin>> n1;
	cout<< "Nhap mang: "<< endl; 
	nhap_mang(a1, n1);
	tang_dan(a1, n1);// Nhap a1 va sap xep tang dan

	cout<< "Nhap so phan tu cua a2[] : "; cin>> n2;
	cout<< "Nhap mang: "<< endl; 
	nhap_mang(a2, n2);
	tang_dan(a2, n2);// Nhap a2 va sap xep tang dan
	
	cout<< "Hai mang theo thu tu tang dan: "<< endl;
	in_mang(a1, n1);
	in_mang(a2, n2);
	
	cout<< "mang sau khi tron la: "<<endl;// tron mang va in mang sau cung
	tron_mang(a1, a2, n1, n2);
	n = n1 + n2;
	tang_dan(a1, n);
	in_mang(a1, n);

	
	
	return 0;
}

