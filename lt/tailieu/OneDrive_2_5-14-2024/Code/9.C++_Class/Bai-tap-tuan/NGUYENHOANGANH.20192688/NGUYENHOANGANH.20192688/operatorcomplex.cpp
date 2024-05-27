#include<iostream>
#include<math.h>
using namespace std;
class complex
{
	float thuc,ao;
	public:
		complex(float r=1,float i=1)
		{	thuc=r;	ao=i;	}
		complex operator+(complex b)
		{
			complex c;
			c.thuc=thuc+b.thuc;
			c.ao=ao+b.ao;
			return c;
		}
		complex operator-(complex b)
		{
			complex e;
			e.thuc=thuc-b.thuc;
			e.ao=ao-b.ao;
			return e;
		}
		complex operator*(complex b)
		{
			complex f;
			f.thuc=thuc*b.thuc-ao*b.ao;
			f.ao=thuc*b.ao+ao*b.thuc;
			return f;		
		}
		complex operator/(complex b)
		{
			complex h;
			h.thuc=(thuc*b.thuc+ao*b.ao)/(b.thuc*b.thuc+b.ao*b.ao);
			h.ao=(ao*b.thuc-thuc*b.ao)/	(b.thuc*b.thuc+b.ao*b.ao);
			return h;	
		}
		friend ostream & operator<<(ostream &os,const complex &b);			
};
	ostream & operator<<(ostream &os,const complex &b)
		{
			os<<b.thuc<<(b.ao>=0?'+':'-')<<"j*"<<fabs(b.ao)<<endl;
			return os;
		}
int main()
{
	complex a(2,4);		complex c;		complex e;
	complex b(3,6);		complex f;		complex h;
	cout<<"so phuc a: "<<a<<endl;
	cout<<"so phuc b: "<<b<<endl;
	cout<<"phep a + b : ";
	c=a+b;		cout<<c<<endl;
	cout<<"phep a - b : ";	
	e=a-b;		cout<<e<<endl;
	cout<<"phep a * b : ";
	f=a*b;		cout<<f<<endl;
	cout<<"phep a / b : ";
	h=a/b;		cout<<h;
	return 0;
}
