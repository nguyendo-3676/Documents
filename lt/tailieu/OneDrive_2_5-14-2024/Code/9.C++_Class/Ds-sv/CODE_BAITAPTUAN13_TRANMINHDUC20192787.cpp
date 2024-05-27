#include <iostream>

using namespace std;

class sinhvien{
	public :
		string ten; 
		float diem;
		
		void Nhap(int i){
			cin.ignore();
			cout << "Nhap ten sinh vien " << i+1 << ": ";getline(cin,ten);
			cout << "Nhap diem trung binh : "; cin >> diem;
			cout << endl;
		}
		void Xuat(){
			cout << ten ;
			for(int i=0;i<50-ten.length();i++){
				cout << " ";
			}
			cout << diem << endl;
		}
};

int main(){
	int n;
	cout << "Nhap so luong sinh vien : " ;
	cin >> n;
	cout << endl;
	sinhvien *sv = new sinhvien[n];
	// Nhap danh sach sinh vien 
	for(int i=0;i<n;i++){
		sv[i].Nhap(i);
	}
	// Sap xep danh sach sinh vien theo diem trung binh
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(sv[i].diem<sv[j].diem){
				sinhvien temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
	
	// In ra danh sach sinh vien 
	cout << "------------------------------------------------------" << endl;
	cout << "     Ten sinh vien                            Diem trung binh" << endl;
	for(int i=0;i<n;i++){
		
		cout << i+1 << "."; 
		sv[i].Xuat();
	}
	delete []sv;
	return 0;
}
