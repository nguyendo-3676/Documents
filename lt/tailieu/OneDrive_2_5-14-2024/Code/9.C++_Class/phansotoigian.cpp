
 		void setTuso(int tu)
 		{ 
 		tuso=tu;
		 }
		int getTuso()
		{
			return tuso;
		}

		void setMauso(int mau)
 		{ 
 		mauso=mau;
		 }
		int getMauso()
		{
			return mauso;
		}
		phanso (int a=0,int b=1)
		{
			tuso=a; 
			mauso=b;
		}
		~phanso()
		{
			tuso=0;
			mauso=1;
		}
		void Xuat()
		{
			cout<<"Phan so la: "<<tuso<<"/"<<mauso<<endl;	
		}	
	};
			 
	
	
 	int main()
 	{	int UCLN(int a,int b);
 		phanso p;
 		
 		phanso p2(4,5);
 		
 		p.Xuat();
 		p2.Xuat();
 	/*
 		int a=0;
 		int b=0;
 		cout<< "Nhap vao tu so cua phan so"<< endl;
 		cin >>a;
 		p.setTuso(a);
		cout<< "Nhap vao mau so cua phan so"<< endl;
 		cin >>b; 
 		p.setMauso(b);
 		int u;
 		*/
		
		 //cout<<"Phan so toi gian la "<<a/u<<"/"<<b/u<<endl;	
		 return 0;	
	 }
	 
