#include <iostream>
#include <math.h>
using namespace std; 
class Phanso {
	int tuso, mauso;
	public:
		Phanso(int ts=0,int ms=1){
			tuso = ts;
			mauso = ms;
		}
		Phanso operator*(Phanso p)
		{ 
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
		//Toan tu - su dung ham thanh vien
		
		Phanso operator-(Phanso p)
		{
			Phanso r;
			r.tuso=p.mauso*tuso-mauso*p.tuso;
			r.mauso=p.mauso*mauso;
			return r.RutGon();
		}
		Phanso operator/(Phanso p)
        {
            Phanso s;
            s.mauso = p.tuso * mauso;
            s.tuso = p.mauso * tuso;
            return s.RutGon();
        }
		void InPhanso()
		{
			cout<<"Phan so la: "<<tuso<<"/"<<mauso<<endl;
		}
		Phanso RutGon()	
		{
		    int a,b;	
		    Phanso ps;	
		    ps.tuso=this->tuso;	
		    ps.mauso=this->mauso;	
		    // tìm UCLN thông thu?ng	
		    a = abs(ps.tuso);	
		    b = abs(ps.mauso);	
		    while(a!=b){
		
		        if(a>b){		
		            a=a-b;		
		        }
		
		        else{		
		            b=b-a;	
		        }		
		    }		
		    ps.tuso=tuso/a;	
		    ps.mauso=mauso/a;	
		    return ps; 	
	}
		//Toan tu - su dung ham ban
		/*
		friend Phanso operator-(Phanso p, Phanso q)
		{
    		Phanso result;
    		result.tuso = p.tuso*q.mauso - q.tuso*p.mauso;
   			result.mauso= p.mauso*q.mauso;
   			return result;

		}
		*/
	//	friend Phanso operator+(Phanso p, Phanso q);
		//friend ostream& operator<<(ostream & os, Phanso p);
};
int main()
  {
	Phanso ps1(2,3);
	Phanso ps2(4,5);
	ps1.InPhanso();
	ps2.InPhanso();
	Phanso r = ps2-ps1;
	Phanso ps3=ps1/ps2;
	r.InPhanso();
	ps3.InPhanso();
	return 0;
  }

