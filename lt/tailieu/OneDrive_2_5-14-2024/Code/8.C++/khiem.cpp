#include <iostream>

using namespace std;

void MangHaiChieu(int** a, int soDong, int soCot) {
    for(int i = 0; i < soDong ; i++) {
        for(int j = 0; j < soCot; j++) {
            cout << "a[" << i << "]" << "[" << j << "]" << " = ";
            cin >> a[i][j];
        }
    }
}

void XuatMang (int ** a, int soDong, int soCot) {
    for(int i = 0; i < soDong; i++) {
        for(int j = 0; j < soCot; j++) {
            cout << a[i][j] << " ";
        }
            cout << "\n";
    }
}

int soPhantuAm(int ** a, int soDong, int soCot) {
    int count = 0;
    for(int i = 0; i < soDong; i++) {
        for(int j = 0; j < soCot; j++) {
            if(a[i][j] < 0) {
                count += 1;
            }
        }
    }
    return count;
} 

int main() {
    int soDong, soCot;
    int i, j;
    cout << "Nhap so dong: ";
    cin >> soDong;
    cout << "Nhap so cot: ";
    cin >> soCot;
    // Xin cap phat con tro 2 chieu
    int ** a = new int*[soDong];
    for(int i = 0; i < soDong; i++) 
	{
        a[i] = new int[soCot];
    }

    MangHaiChieu(a, soDong, soCot);
    cout << "Mang da nhap la:" << endl;
    XuatMang(a, soDong, soCot);
    cout << "So phan tu am cua mang la: " << soPhantuAm(a, soDong, soCot) << endl;
    // Giai phong
    for(int i = 0; i < soDong; i++) 
	{
        delete [] a[i];
    }
        delete [] a;
        return 0;
}
   


