#include "Circle.h"

Circle::Circle(int x,int y)
{
	core(x, y);
}


Circle::~Circle()
{
}
void Circle::core(int x, int y)
{
	this->p.set(x, y);
}