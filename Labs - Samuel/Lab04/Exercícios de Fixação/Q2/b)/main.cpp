#include "Ponto.h"
#include <cstdio>

inline int Point::X() 
{
	return x;
}

inline int Point::Y() 
{
	return y;
}

int main() 
{
    Point ponto;

    ponto.MoveTo(5,10);

    printf("x = %d, y = %d", ponto.X(), ponto.Y());
}