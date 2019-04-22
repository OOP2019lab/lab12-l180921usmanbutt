#include "triangle.h"


triangle::triangle(float b,float h,string c):shape(c)
{
	base=b;
	height=h;
}

float triangle::area()
{
	float a;
	a=(base*height)/2;
	return a;
	
}