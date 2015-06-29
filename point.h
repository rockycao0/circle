#pragma once
class point
{
public:
	point();
	point(int x,int y);
	~point();
	void set(int x,int y);
private:
	int x;
	int y;
};

