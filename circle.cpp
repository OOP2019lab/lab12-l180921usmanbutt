#include "circle.h"

circle::circle(float r,string c):shape(c)
{
	radius=r;
}


float circle::area()
{
	float a;
	a=3.14*radius*radius;

	return a;
}
