#include <iostream> 
using namespace std;
 
class Phanso
{
private:
    int tuso, mauso;
 
public:
    Phanso()
    {
        this->tuso = 0;
        this->mauso = 1;
    }
 
    ~Phanso()
    {
        this->tuso = 0;
        this->mauso = 1;
    }
//-----------------------------------------------------------------//
    void set()
    {
        cout << "Nhap Tu So: "; cin >> this->tuso;
        cout << "Nhap Mau So: "; cin >> this-> mauso;
    }
    
     void set(int tuso, int mauso)
     {
     	this->tuso=tuso;
		this->mauso=mauso; 
		 
	 }
 
     void get()
    {
        cout << this->tuso << "/" << this->mauso << endl;
    }
//-----------------------------------------------------------------//
    Phanso Cong(Phanso obj1, Phanso obj2)
    {
        Phanso obj3;
        obj3.tuso = obj1.tuso * obj2.mauso + obj1.mauso * obj2.tuso;
        obj3.mauso = obj1.mauso * obj2.mauso;
        return obj3;
    }
    Phanso Tru(Phanso obj1, Phanso obj2)
    {
        Phanso obj3;
        obj3.tuso = obj1.tuso * obj2.mauso - obj1.mauso * obj2.tuso;
        obj3.mauso = obj1.mauso * obj2.mauso;
        return obj3;
    }
    Phanso Nhan(Phanso obj1, Phanso obj2)
    {
        Phanso obj3;
        obj3.tuso = obj1.tuso * obj2.tuso;
        obj3.mauso = obj1.mauso * obj2.mauso;
        return obj3;
    }
    Phanso Chia(Phanso obj1, Phanso obj2)
    {
        Phanso obj3;
        obj3.tuso = obj1.tuso * obj2.mauso;
        obj3.mauso = obj1.mauso * obj2.tuso;
        return obj3;
    }
    Phanso operator*(Phanso p)
	{ //S? d?ng hàm thành viên
			Phanso q;
			q.tuso = p.tuso* tuso;
			q.mauso = p.mauso * mauso;
			return q;
	}
	Phanso operator!() 
	{
			Phanso p;
			p.tuso = mauso;
			p.mauso = tuso;
			return p;
	};
		 //S? d?ng hàm b?n là hàm t? do
	friend Phanso operator+(Phanso obj1, Phanso obj2)
	{
		Phanso obj3;
        obj3.tuso = obj1.tuso * obj2.mauso + obj1.mauso * obj2.tuso;
        obj3.mauso = obj1.mauso * obj2.mauso;
        return obj3;
	}
	friend ostream& operator<<(ostream & os, Phanso p)
	{
		os<<p.tuso<<"/"<<p.mauso<<endl;
		return os;		
	}
	friend istream& operator>>(istream & is, Phanso &p)
	{
		cout<<"Nhap tu so"<<endl; 
		is>>p.tuso;
		cout<<"Nhap mau so"<<endl;
		is>>p.mauso; 
		return is;		
	}
};
 
int main()
{
    Phanso obj1, obj2, obj3,obj4;
  //  obj1.set(); obj2.set();
    obj1.set(2,3); obj2.set(4,5);
    
  cin>>obj1;
    
  cout<<obj1;
  cout<<obj2;
  
  obj3=obj1+obj2;
  obj4=obj1*obj2;
  
  cout<<obj3; 
  cout<<obj4; 
  
 
 /*
    obj3 = obj3.Cong(obj1, obj2); 
	obj3.get();
    obj3 = obj3.Tru(obj1, obj2); 
	obj3.get();
    obj3 = obj3.Nhan(obj1, obj2); 
	obj3.get();
    obj3 = obj3.Chia(obj1, obj2); 
	obj3.get();
 */ 
    return 0;
}
