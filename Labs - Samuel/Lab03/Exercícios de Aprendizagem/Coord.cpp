#include "Coord.hpp"
#include <stdio.h>

void Coord::Translate(int dx, int dy)
{
    x = { (x + dx) % 1920 };
	y = { (y + dy) % 1080 };
}

void Coord::MoveTo(int px, int py)
{
    x = { px % 1920 };
	y = { py % 1080 };
}

void Coord::Print()
{
    printf("%d, %d\n", x, y);
}