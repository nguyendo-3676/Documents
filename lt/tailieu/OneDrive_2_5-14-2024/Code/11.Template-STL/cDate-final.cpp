#include <stdlib.h>
#include<iomanip>
#include<iostream>
#include <string>
using namespace std;
int get_days(int year, int month) 
{
	if (month == 2) return year & 3 ? 28 : 29;
	if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
	return 31;
}

class CDate {
public:
	int day, month, year;
public:
	CDate(int y = 1900, int m = 1, int d = 1) : year(y), month(m), day(d) { }

	void Increase() {
		if (++day > get_days(year, month)) {
			day = 1;
			if (++month > 12) {
				month = 1;
				++year;
			}
		}
	}
	CDate& operator++() {
		Increase();
		return *this;
	}
	CDate operator++(int) {
		CDate d = *this;
		Increase();
		return d;
	}
	friend ostream& operator<<(ostream& o, CDate& d) {
		if (d.day < 10) o << '0';
		o << d.day << '/';

		if (d.month < 10) o << '0';
		o << d.month << '/';

		if (d.year < 1000) o << '0';
		if (d.year < 100) o << '0';
		if (d.year < 10) o << '0';

		return o << d.year;
	}

	int Compare(const CDate& d) {
		int c;
		if (c = year - d.year) return c;
		if (c = month - d.month) return c;
		return day - d.day;
	}

	bool operator > (const CDate& d) { return Compare(d) > 0; }
	bool operator < (const CDate& d) { return Compare(d) < 0; }
	bool operator == (const CDate& d) { return Compare(d) == 0; }
};

/// Yêu c?u: [1] 
///  - Xây d?ng l?p CHistory k? th?a t? l?p CDate ð? lýu s? ki?n:
///    + K? th?a và b? sung thu?c tính name ki?u string (0.5 ði?m)
///    + Hàm t?o m?t s? ki?n g?m tên s? ki?n và nãm, tháng, ngày x?y ra s? ki?n (0.5 ði?m)
///    + Toán t? in s? ki?n ra màn h?nh (0.5 ði?m)

class CHistory:public CDate
{
	private:
		 string name;
	public:
	//	CHistory(string n="Su kien", int y = 1900, int m = 1, int d = 1) : name(n),year(y), month(m), day(d) { }
		CHistory(string n="Su kien", int y = 1900, int m = 1, int d = 1) : CDate(y, m, d)
			{
				name=n;
			}
		friend ostream& operator<<(ostream& o, CHistory& d) 
		{
			o <<"Ten su kien: "<<d.name<<" thoi gian cua su kien: ";
			CDate d1=d;
			o<<d1;
		}
};
template <class T>
void myswap(T& a, T& b)
{
T c = a; a = b; b = c;
}

template <class T> 
class Array {
protected:
	T* data;	
	int size;	
public:
	~Array() { if (size) delete[] data; }
	Array(int size = 0) : size(size) {
		if (size) { data = new T[size]; }
	}
public:
	int Count() const { return size; }
	T GetAt(int index) const { return data[index]; }
	void SetAt(int index, const T& value) { data[index] = value; }

	T& operator[](int index) { return data[index]; }
};


int main()
{
	/*
	CDate qk(1954, 9, 2);
	CDate bk(1956, 10, 15);

	cout << setw(20) << std::left << "Quoc khanh: " << qk << endl;
	cout << setw(20) << std::left << "Thanh lap truong: " << bk << endl;

	if (bk > qk) {
		cout << "Thanh lap truong sau quoc khanh\n";
	}
	else {
		cout << "Thanh lap truong truoc quoc khanh\n";
	}

	CDate test(2020, 2, 28);
	cout << test << " + 1 = "; cout << ++test << endl;
	cout << test << " + 1 = "; cout << ++test << endl;	
	CHistory his("Sk1", 1954, 9, 2);	
	cout<<his;	
	cout<<endl;
	
		
	Array<int> arr(5);
	cout<<"Nhap cac phan tu cua mang"<<endl;
	for(int i=0;i<5;i++)
	{
		arr.SetAt(i,i);
	}
	for(int i=0;i<5;i++)
	{
		cout<<" "<<arr.GetAt(i);
	}
	cout<<endl;
	*/
	int n=3;	
	Array<CHistory> his_arr(n);
	
	cout<<"Nhap cac su kien vao: "<<endl;
	string name_his;
	int year_his, month_his,day_his;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap cac thong tin cua su kien thu: "<<i+1<<endl;
		cout<<"Nhap ten cua su kien thu: "<<i+1<<endl;
		std:cin.ignore(1);
		getline(cin,name_his);
		cout<<"Nhap nam cua su kien thu: "<<i+1<<endl;
		cin>>year_his;
		cout<<"Nhap thang cua su kien thu: "<<i+1<<endl;
		cin>>month_his;
		cout<<"Nhap ngay cua su kien thu: "<<i+1<<endl;
		cin>>day_his;
		CHistory his(name_his, year_his, month_his, day_his);
		cout<<his;
		his_arr.SetAt(i,his);
	}
	//Sap xep
	for( int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j ++){
			if(his_arr.GetAt(i)>his_arr.GetAt(j))
			{
				CHistory var1 = his_arr.GetAt(i);
				CHistory var2 = his_arr.GetAt(j);
				myswap(var1,var2);
				his_arr.SetAt(i,var1);
				his_arr.SetAt(j,var2);
			}
		}
	}
	//In
	cout<<endl;
	cout << setw(20) << std::left << "Cac su kien da nhap: " << endl;
	for(int i=0;i<n;i++)
	{
		CHistory his_sample=his_arr.GetAt(i);
		cout << setw(20) << std::left << his_sample<<endl;
	}	
	
	///    + S?p x?p các s? ki?n tang d?n theo th?i gian (0.5 di?m)

	///    + In danh sách các s? ki?n ra màn hình (0.5 di?m)
	
	return 0;
}

