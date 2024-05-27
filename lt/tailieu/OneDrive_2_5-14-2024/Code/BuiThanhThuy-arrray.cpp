#include<iostream>
using namespace std;

int main(){
	float a[100];
	int i=0,t;
	do{
		cout<<"nhap a["<<i<<"]=";
		cin>> a[i];
		i++;
		cout<<"muon nhap tiep khong?";
		cin>>t;
		if(t==0) break;
	}
	while(1);
	for(int j=0; j<i;j++){
		cout<<""<<a[j]<<" ";
	}
}
