#include "rectangle.h"

float rectangle::area()
{
	float a;
	a=height*width;
	return a;
}

rectangle::rectangle(float h,float w,string c):shape(c)
{
	height=h;
	width=w;
}