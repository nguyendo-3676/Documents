#include <iostream>
#include <math.h>
using namespace std; 
class Point
{
	public:  
	float px; float py;
	public:
		
	Point (float x=0, float y=0)
	{
		px=x;
		py=y;
		cout<<"Goi ham tao"<<endl;
	}
	
	Point (Point& p)
	{
		px=p.px;
		py=p.py;
		cout<<"Goi ham tao"<<endl;
	}
	~Point ()
	{
		cout<<"Goi ham huy"<<endl;
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
	virtual float distanceTo(Point p)
	{
	
		float d;
		d=(p.px-px)*(p.px-px)+(p.py-py)*(p.py-py);
		return sqrt(d);
	}
	virtual void PrintPoint()
	{
		cout <<"x: "<<px<<endl<<"y: " <<py <<endl; 
	}
	

};
class Point3D:public Point
{
	protected: 
		float pz;
	public: 
		Point3D(float x, float y, float z):Point(x,y)
		{
			pz=z;
		}
	
	virtual float distanceTo(Point3D p)
	{
	cout <<"3D"<<endl;
	float d;
	d=(p.px-px)*(p.px-px)+(p.py-py)*(p.py-py)+(p.pz-pz)*(p.pz-pz);
	return sqrt(d);
	}
	virtual void PrintPoint() 
	{
		Point::PrintPoint(); 
		cout <<"z: "<<pz<<endl; 
	}
	
};


int main()
{
	/*
	Point p1,p2; 	
	
	cout<<"Diem p1 co toa do la "<<p1.getX()<< " "<<p1.getY()<<endl;
	cout<<"Diem p2 co toa do la "<<p2.getX()<< " "<<p2.getY()<<endl;
	p1.setXY(2,3);
	p2.setXY(4,5);
	*/
	Point p1(2,3);
	Point p2(4,5);	
	p1.PrintPoint(); 
	Point3D p3(2,3,4);
	Point3D p4(2,6,7);
	p4.PrintPoint();
	cout<<"Distance in 2D:"<<p1.distanceTo(p2)<<endl;	
	cout<<"Distance in 3D:"<<p3.distanceTo(p4)<<endl;
	return 0; 
} 
