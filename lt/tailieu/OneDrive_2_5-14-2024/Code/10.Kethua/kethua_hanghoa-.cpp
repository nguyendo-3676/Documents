#include<iostream>

using namespace std;
class hanghoa {
private:
	string name;
	int amount;
	double cost;

public:
	hanghoa(string _name = " ", int _amount = 0, double _cost = 0)
	{
		this->name = _name;
		this->amount = _amount;
		this->cost = _cost;
	}
	string getName() {
		return name;
	}

	void setName(string _name) {
		this->name = _name;
	}

	int getAmount() {
		return amount;
	}

	void setAmount(int _amount) {
		this->amount = _amount;
	}
	double getcost() { return this->cost; }
	void nhap()
	{
		cout << "nhap ten:\n"; cin >> this->name;
		cout << "nhap so luong:\n"; cin >> this->amount;
		cout << "nhap gia:\n:"; cin >> this->cost;
		cout << "------------------------------------------------------------\n";
	}
	void display()
	{
		cout << "ten:" << this->name << endl;
		cout << "so luong:" << this->amount << endl;
		cout << "gia:" << this->cost << endl;
		cout << "------------------------------------------------------------\n";
	}
};
// khai bao lop sach ke thua lop hang hoa
class book : public hanghoa {
private:
	string author;
	int year;
public:
	book(string _name = " ", int _amount = 0, double _cost = 0,string _author = " ", int _year = 0):hanghoa(_name,_amount,_cost)
	{
		this->author = _author;
		this->year = _year;
	}
	string getAuthor() {
		return author;
	}

	void setAuthor(string author) {
		this->author = author;
	}
	int getYear() {
		return year;
	}
	void setYear(int year) {
		this->year = year;
	}
	void input()
	{
		hanghoa::nhap();
		cin.ignore();
		cout<<"Nhap ten tac gia: ";
		getline(cin, this->author);
		cout<<"Nhap nam sang tac: ";
		cin>>this->year;
	}
	void output()
	{
		hanghoa::display();
		cout<<"Ten tac gia: "<<this->getAuthor()<<endl;
		cout<<"Nam sang tac: "<<this->getYear();
	}
};
class dochoi :public hanghoa
{
private:
	string hdsd;
	int tuoiphuhop;
public:
	dochoi(string _name = " ", int _amount = 0, double _cost = 0, string _hdsd = " ", int _tuoiphuhop = 0) :hanghoa(_name, _amount, _cost)
	{
		this->hdsd = _hdsd;
		this->tuoiphuhop = _tuoiphuhop;
	}
	
	string& gethdsd() { return this->hdsd; }
	int& getuoi() { return this->tuoiphuhop; }
};
int main()
{
	/*int n;
	cout << "nhap so hang hoa:\n";
	cin >> n;
	hanghoa* a = new hanghoa[n];
	cout << "nhap thong tin hang hoa:\n";
	for (int i = 0; i < n; i++)
		a[i].nhap();
	double tongtien;
	for (int i = 0; i < n; i++)
		tongtien += a[i].getcost()*a[i].getAmount();
	cout << "tong tien:" << tongtien << endl;
	delete[] a;*/
	hanghoa a;
	a.nhap();
	a.display();
	
	
	book x;
	x.input();
	x.output();
	return 0;
	
}
