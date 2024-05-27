#include <stdlib.h>
#include<iomanip>
#include<iostream>
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

/// Y�u c?u: [1] 
///  - X�y d?ng l?p CHistory k? th?a t? l?p CDate �? l�u s? ki?n:
///    + K? th?a v� b? sung thu?c t�nh name ki?u string (0.5 �i?m)
///    + H�m t?o m?t s? ki?n g?m t�n s? ki?n v� n�m, th�ng, ng�y x?y ra s? ki?n (0.5 �i?m)
///    + To�n t? in s? ki?n ra m�n h?nh (0.5 �i?m)

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
			o << d.name<< endl;
			CDate d1=d;
			o<<d1;
		}
};

int main()
{
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
	return 0;
}

