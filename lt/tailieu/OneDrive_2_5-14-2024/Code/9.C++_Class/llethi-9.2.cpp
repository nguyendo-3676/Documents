#include <iostream>
#include <math.h>
using namespace std; 
class Point_2D
{
	private:  
	float px; float py;
	public:
	
	Point_2D (float x, float y)
	{
		px=x;
		py=y;
		cout<<"Goi ham tao 1"<<endl;
	}
	Point_2D (float x=0)
	{
		px=x;
		py=-1;
	//	cout<<"Goi ham tao 2"<<endl;
	}
	
	
	Point_2D (Point_2D& p)
	{
		px=p.px;
		py=p.py;
	//	cout<<"Goi ham tao"<<endl;
	}
	
	~Point_2D ()
	{
	//	cout<<"Goi ham huy"<<endl;
	}

	void setXY(float x, float y) 
	{
		px=x;
		py=y;
	}
	float getX()
	{
		return px;
	}
	float getY()
	{
		return py;
	}
	//Ham thanh vien cua lop
	float distanceTo(Point_2D p);
	/*
	float distanceTo(Point p)
	{
	float d;
	d=(p.px-px)*(p.px-px)+(p.py-py)*(p.py-py);
	return sqrt(d);
	}
	*/
	//Ham ban cua lop
	friend float distanceP2P(Point_2D p1, Point_2D p2)
	{
		return sqrt((p1.px-p2.px)*(p1.px-p2.px)+(p1.py-p2.py)*(p1.py-p2.py));		
	}
};
float Point_2D::distanceTo(Point_2D p)
{
	float d;
	d=(p.px-px)*(p.px-px)+(p.py-py)*(p.py-py);
	return sqrt(d);
}
//Ham tu do
float distanceTD(Point_2D p1, Point_2D p2) 
{
	float d;
	d = (p1.getX() - p2.getX()) * (p1.getX() - p2.getX()) + (p1.getY() - p2.getY()) * (p1.getY() - p2.getY());
	return sqrt(d);
}

int main()
{
	
	Point_2D p1(3,5);
	Point_2D p2((float)4);
	Point_2D p3(p2); 	
	cout<<"Diem p1 co toa do la "<<p1.getX()<< " "<<p1.getY()<<endl;
	cout<<"Diem p2 co toa do la "<<p2.getX()<< " "<<p2.getY()<<endl;
	cout<<"Diem p3 co toa do la "<<p3.getX()<< " "<<p3.getY()<<endl;
	//Goi ham thanh vien
	cout<<"Khoang cach goi ham thanh vien: "<<p1.distanceTo(p3)<<endl;
	//Goi ham tu do
	cout<<"Khoang cach goi ham tu do: "<<distanceTD(p1,p3)<<endl;	
	//Goi ham ban
	cout<<"Khoang cach goi ham ban: "<<distanceP2P(p1,p3)<<endl;
	
	/*
	p1.setXY(2,3);
	p2.setXY(4,5);
	cout<<"Diem p1 co toa do la "<<p1.getX()<< " "<<p1.getY()<<endl;
	cout<<"Diem p2 co toa do la "<<p2.getX()<< " "<<p2.getY()<<endl;
	cout<<"Khoang cach"<<p1.distanceTo(p2)<<endl;
	cout<<"Khoang cach"<<distance(p1,p2)<<endl;
	*/

	/*
	Point p1(2,3);
	Point P2(4,5);	
	
	Point p3(p1);
	cout<<"Diem p3 co toa do la "<<p3.getX()<< " "<<p3.getY()<<endl;

*///	cout<<p3.distanceTo(p2);
	//cout<<"Khoang cach tu diem p("<<p1.getX()<<","<<p1.getY()<<") den diem p("<<p2.getX()<<","<<p2.getY()<<") la: "<<p1.distanceTo(p2)<<endl;
	return 0; 
} 
