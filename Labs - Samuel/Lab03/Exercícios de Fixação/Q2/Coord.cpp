#include "Coord.hpp"

void Coord1::Translate(int dx, int dy) 
{
    x += dx;
    y += dy;  
}

void Coord1::MoveTo(int px, int py)
{
    x = { px };
    y = { py };
}

void Coord2::Translate(int dx, int dy)
{
    x += dx;
    y += dy;
}

void Coord2::MoveTo(int px, int py)
{
    x = { px };
    y = { py };
}