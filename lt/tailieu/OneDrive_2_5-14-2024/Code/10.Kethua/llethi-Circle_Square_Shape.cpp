#include <stdlib.h>
#include <iostream>
using namespace std;

class Shape {
public:
	virtual double area()const  = 0;
};

class Circle: public Shape {
private:
	double r;
public:
	Circle(double r) {
		this->r = r;
	}

	virtual double area() const  {
		return 3.14*r*r;
	}
};

class Square: public Shape{
private:
	double l;
public:
	Square(double l) {
		this->l = l;
	}

	virtual double area() const {
		return l*l;
	}
};



class Rect: public Shape {
private:
	double l1, l2;
public:
	Rect(double l1, double l2) {
		this->l1 = l1;
		this->l2 = l2;
	}

	virtual double area()const  {
		return l1*l2;
	}
};



int main()
{
	Shape* s[3];
	int i;

	s[0] = new Circle(2.5);
	s[1] = new Square(3.234);
	s[2] = new Rect(2.23, 5.233);

	for (i=0; i<3; i++) {
		cout<<"Dien tich hinh thu: "<<i+1<<s[i]->area()<<endl;
	}

	delete s[0];
	delete s[1];
	delete s[2];
}
