#include<iostream>
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
	unsigned long tongtien()
	{
		return tongsotien;
	}
	//friend void Sapxep(Hoadon *p, int n);
	friend Hoadon operator+(Hoadon p,Hoadon q);
	friend istream &operator>>(istream &in, Hoadon &p);
	friend ostream &operator<<(ostream & out, Hoadon p);   
};
// Dinh nghia toan tu +
Hoadon operator+(Hoadon p,Hoadon q)
{
	Hoadon k;
	k.tongsotien=p.tongsotien+q.tongsotien;
	k.masanpham=(p.masanpham+=q.masanpham);
	return k;
}
// Nhap Ma san pham va tong so tien

istream &operator>>(istream &in, Hoadon &p)
{
	cout<<"Ma san pham: ";
	in>>p.masanpham;
	cout<<"Tong so tien: ";
	in>>p.tongsotien;
	return in;
}

// In ra Ma san pham va tong so tien

ostream &operator<<(ostream & out, Hoadon p)
{
	int i;
	cout<<p.masanpham;
	for(i=0;i<28-p.masanpham.length();i++)
	cout<<" ";
	out<<p.tongsotien;
	return out;
}
// Sap xep Hoa don tong so tien giam dan
//void Sapxep(Hoadon *p,int n)
//{
//	for(int i=0;i<n-1;i++)
//    	for(int k=i+1;k<n;k++)
//    	{
//    	if(((p+i)->tongsotien)<((p+k)->tongsotien))
//		{
//		Hoadon tmp=*(p+k);
//		*(p+k)=*(p+i);
//		*(p+i)=tmp;	
//		}		
//	    }
//}
void sapxep(Hoadon *p, int n)
{
	for(int i=0;i<n-1;i++)
    	for(int k=i+1;k<n;k++)
    	{
    	if(((p+i)->tongtien())<((p+k)->tongtien()))
		{
		Hoadon tmp=*(p+k);
		*(p+k)=*(p+i);
		*(p+i)=tmp;	
		}		
	    }
}
int main()
{
	int i=0,n;
	Hoadon *p,a,b;
	cout<<"Hoa don a"<<endl;
	cin>>a;cout<<"\n";
	cout<<"Hoa don b"<<endl;
	cin>>b;cout<<"\n";
	cout<<"Hoa don moi"<<endl;
	cout<<"Ma san pham                 Tong tien"<<endl;
	cout<<a+b<<endl;
	cout<<"\n";
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"So hoa don can nhap la: ";
	cin>>n;
	p=new Hoadon[n];
	for(i=0;i<n;i++)
	{
	cout<<"Hoa don "<<i+1<<endl;
    cin>>p[i];
    cout<<"\n";
    }
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"Ban dau:"<<endl;
    cout<<"Stt"<<'\t'<<"Ma san pham                 Tong tien"<<endl;	
	for(i=0;i<n;i++)
	{
		cout<< i+1<<'\t';
		cout<<*(p+i)<<endl;
    }
	sapxep(p,n);
	cout<<"\n";
	cout<<"Sau khi sap xep giam dan:"<<endl;
	cout<<"Stt"<<'\t'<<"Ma san pham                 Tong tien"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<i+1<<'\t';
		cout<<*(p+i)<<endl;
	}
	return 0;
}




