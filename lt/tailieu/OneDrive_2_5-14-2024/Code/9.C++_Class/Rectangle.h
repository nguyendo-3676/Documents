#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
 		double length;
 		double width;
	public:
		bool setLength(double);
		bool setWidth(double);
		double getLength(){return length;};
		double getWidth(){return width;	};
		double getArea(){return length*width;};
	
};

#endif
