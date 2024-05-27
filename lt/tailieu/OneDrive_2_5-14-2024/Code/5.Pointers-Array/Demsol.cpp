/*Vi?t m?t hàm có d?u vào là m?ng g?m N s? nguyên,
hàm tr? v? v? trí c?a s? l? du?c l?p l?i l?n d?u tiên
trong m?ng và giá tr? c?a s? l? dó, n?u không tìm th?y hàm tr? v? giá tr? -1
và in ra màn hình là không có s? l? nào du?c l?p l?i. Luu ý s? d?ng con tr? trong hàm.
Ví d? cho m?ng sau: [8, 1, 2, 7, 9, 4, 6, 2, 7, 10],
hàm này s? tr? v? s? l? l?p l?i ? v? trí 8 và giá tr? l?p l?i là s? 7*/
#include<iostream>
using namespace std;
void nhapmang(int b[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "\nb[" << i << "] = ";
		cin >> b[i];
	}
}
//hàm ki?m tra ch?n l?.
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
