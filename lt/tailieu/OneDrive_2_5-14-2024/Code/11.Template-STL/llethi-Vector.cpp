#include <iostream>
#include <vector>

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

int main()
{
    cout << "Hello vector!" << endl;
    vector<int> v;  //Khai bao vector
    //Bo sung vao vector
    for (int i=0;i<10;i++) 
	v.push_back(i+1);
    
    //Truy nhap vao vector su dung ham at()
    cout<<"Duyet su dung ham at"<<endl;
    for (int i=0;i<v.size();i++) 
	cout<<v.at(i)<<" ";
	cout<<endl;

    //Truy nhap vao vector su dung toan tu []
    cout<<"Duyet su dung toan tu []"<<endl;
    for (int i=0;i<v.size();i++) 
	cout<<v[i]<<" ";
    cout<<endl;
    
    cout<<"Duyet su dung iterator"<<endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    
    //Loai bo dan cac phan tu khoi vector
    while (!v.empty()){
        cout<<v.back()<<" ";
        v.pop_back();
    }
    cout<<endl;
    return 0;
}
