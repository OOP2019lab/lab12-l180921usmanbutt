#pragma once 

#include <iostream>
#include <string>
#include "shape.h"
using namespace std;


class circle:public shape
{
	float radius;
public:
	circle(float,string);
	float area();
	

~circle() 
{ 
	cout << "~ circle () called."<<endl;  
}


};
