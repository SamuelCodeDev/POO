#include "Rect.hpp"

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

Rect::Rect()
{
    a.MoveTo(0,0);
    b.MoveTo(0,0);
}

Rect::Rect(Point x, Point y)
{
    a.MoveTo(a.X(), a.Y());
    b.MoveTo(b.X(), b.Y());
}

Rect::Rect(int ax, int ay, int bx, int by)
{
    a.MoveTo(ax,ay);
    b.MoveTo(bx,by);    
}

void Rect::Translate(int dx, int dy) {
    a.Translate(dx, dy);
    b.Translate(dx, dy);
}