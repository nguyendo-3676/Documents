#include <iostream>
using namespace std; 
static const float PI=3.1415; 
class Circle
{
	private:  
		float r;
	public:
	void setRadius(float radius) 
	{
		r=radius; 
	}
	void printRadius() 
	{
		cout<<"Ban kinh cua hinh tron la: "<<r<<endl; 
	}
	float getRadius()
	{
		return r; 
	}
	//Ham thanh vien
	float area();

};
float Circle::area()
{
	return PI*r*r; 
}
//Ham tu do
float compute_area(float r)
{
	return PI*r*r; 
}
int main()
{
	Circle c;
	float bankinh=0;
	cout<<"Nhap gia tri ban kinh:";
	cin>> bankinh;
	c.setRadius(bankinh);
	c.printRadius();
	//Tinh dien tich dua tren viec goi ham thanh vien
	cout<<c.area()<<endl;
	//Tinh dien tich dua tren viec goi ham tu do
	float r=c.getRadius();
	cout<<compute_area(r)<<endl;

	
	
//	cout<<compute_area(bankinh)<<endl;
	
	
	/*
	Circle *ptr=new Circle();
	float bankinh=0; 
	cout<<"Nhap gia tri ban kinh:";
	cin>> bankinh;
	c.setRadius(bankinh);
	c.printRadius();
	ptr->setRadius(bankinh); 
	cout<<"Dien tich hinh tron ban kinh "<<bankinh<<" la : "<<c.area() <<" "<<ptr->area();
	delete ptr; ptr=NULL; 
	*/
	return 0; 
} 
