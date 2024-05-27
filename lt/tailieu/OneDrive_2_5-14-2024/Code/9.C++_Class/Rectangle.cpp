#include "Rectangle.h"

bool Rectangle::setWidth(double w)
 {
	 bool validData = true;

	 if (w >= 0)
		 width = w; // Copy argument to width
	 else
		 validData = false; // Leave width unchanged
 return validData;
 }
 
 bool Rectangle::setLength(double l)
 {
	 bool validData = true;

	 if (l >= 0)
		 length = l; // Copy argument to width
	 else
		 validData = false; // Leave width unchanged
 return validData;
 }
