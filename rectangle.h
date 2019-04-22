#pragma once

#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

class rectangle:public shape
{
	float height;
	float width;
public:
	rectangle(float,float,string);
	float area();
	
~rectangle()
{ 
	cout << "~rectangle() called."<<endl; 
}

};