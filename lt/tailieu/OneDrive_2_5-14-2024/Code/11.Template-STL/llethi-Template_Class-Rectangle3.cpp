#include <iostream>

using namespace std;
template <class T>
class Rectangle
{
	private:
		T width;
		T length;
		T area;
	public:
	void setData(T w, T l)
		{ width = w; length = l;}
	void calcArea()
		{ area = width * length; }
	T getWidth()
		{ return width; }
	T getLength()
		{ return length; }
	T getArea()
		{ return area; }
};
int main()
 	{
	 Rectangle<float> rec;
	 rec.setData(2.5, 5.1);
	 rec.calcArea(); 
	 cout<<"Area of a rectangle with width: "<<rec.getWidth()<<" and length: "<<rec.getLength()<<" is: "<<rec.getArea()<<endl; 
	 Rectangle<int> rec_int;
	 float w=2.6, l=5.7;
	 rec_int.setData(w,l);
	 rec_int.calcArea(); 
 	 cout<<"Area of a rectangle with width: "<<rec_int.getWidth()<<" and length: "<<rec_int.getLength()<<" is: "<<rec_int.getArea()<<endl; 
	 return 0;
	}

