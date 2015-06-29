#include "point.h"

point::point()
{

}
point::point(int x,int y)
{
	this->set(x, y);
}


point::~point()
{
}

void point::set(int x, int y)
{
	this->x = x;
	this->y = y;
}
