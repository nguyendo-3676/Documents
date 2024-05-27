#include <iostream>
#include <vector>

using namespace std;
class Hoadon
{
	private:
		string masanpham;
		unsigned long tongsotien;
	public:
		// Ham tao
		Hoadon (string a="a", unsigned long b=0)
		{
		masanpham=a;
		tongsotien=b;
	    }
	    //Ham huy
	    ~Hoadon()
	    {
		}
		void Inhoadon()
		{
			cout<<"San pham "<<masanpham<<"so tien: "<<tongsotien<<endl;
		}
	unsigned long tongtien()
	{
		return tongsotien;
	}
	//friend void Sapxep(Hoadon *p, int n);
	friend Hoadon operator+(Hoadon p,Hoadon q);
	friend istream &operator>>(istream &in, Hoadon &p);
	friend ostream &operator<<(ostream & out, Hoadon p);   
};
int main()
{
    vector <Hoadon> listHoadon;
    Hoadon hd("hd1", 1000);
    listHoadon.push_back(hd);
    
    cout<<"Duyet su dung ham at"<<endl;
    for (int i=0;i<listHoadon.size();i++) 
    {
    	Hoadon hd1=listHoadon.at(i);
    	hd1.Inhoadon(); 
	}

	cout<<endl;
    return 0;
}
