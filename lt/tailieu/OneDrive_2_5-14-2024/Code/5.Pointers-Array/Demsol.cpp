/*Vi?t m?t h�m c� d?u v�o l� m?ng g?m N s? nguy�n,
h�m tr? v? v? tr� c?a s? l? du?c l?p l?i l?n d?u ti�n
trong m?ng v� gi� tr? c?a s? l? d�, n?u kh�ng t�m th?y h�m tr? v? gi� tr? -1
v� in ra m�n h�nh l� kh�ng c� s? l? n�o du?c l?p l?i. Luu � s? d?ng con tr? trong h�m.
V� d? cho m?ng sau: [8, 1, 2, 7, 9, 4, 6, 2, 7, 10],
h�m n�y s? tr? v? s? l? l?p l?i ? v? tr� 8 v� gi� tr? l?p l?i l� s? 7*/
#include<iostream>
using namespace std;
void nhapmang(int b[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "\nb[" << i << "] = ";
		cin >> b[i];
	}
}
//h�m ki?m tra ch?n l?.
bool kiemtra(int a) {
	bool x = true;
	if (a % 2 == 0) {
		x = false;
	}
	return x;
}
int xuatSoLe(int* b, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (kiemtra(b[i]) == true) {
				if (b[i] == b[j] && i != j) {
					return j;
				}
			}
			else { break; }
		}
	}return -1;
}
int Sapxep(int* b, int n) 
{
	
}
int main() {
	int* b;
	int n;
	cout << "\nNhap so phan tu trong mang: ";
	cin >> n;
	b = new int[n];
	nhapmang(b, n);
	if (xuatSoLe(b, n) == -1) {
		cout << "khong co so le nao lap lai!!!" << endl;
	}
	else {
		cout << "Gia tri lap lai la :" << b[xuatSoLe(b, n)] << endl;
		cout << "Vi tri lap lai lan dau: " << xuatSoLe(b, n) << endl;
	}
	delete[]b;
	system("pause");
	return 0;
}
