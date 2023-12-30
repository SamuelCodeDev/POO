#include "Ponto.hpp"
#include <iostream>
using std::cout;

Point::Point() : x{}, y{}
{
}

Point::Point(int absissa, int ordenada) : x{absissa}, y{ordenada}
{
}

void Point::MoveTo(int px, int py)
{
	x = { px };
	y = { py };
}

void Point::Translate(int dx, int dy)
{
	x += dx;
	y += dy;
}

void Point::Print()
{
	cout << "x = " << x << ", y = " << y << '\n'; 
}