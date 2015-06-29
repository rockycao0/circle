#pragma once
#include"point.h"
class Circle
{
public:
	Circle(int x,int y);
	~Circle();
	void move(int x, int y);
	void draw();
private:
	void core(int x,int y);
	point p;
};

