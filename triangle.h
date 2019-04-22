#pragma once

#include <iostream>
#include <string>
#include "shape.h"
using namespace std;


class triangle:public shape
{
	float height;
	float base;
public:
	triangle(float,float,string);
	float area();
	
~triangle()
{ 
	cout << "~ triangle () called."<<endl; 
}


};