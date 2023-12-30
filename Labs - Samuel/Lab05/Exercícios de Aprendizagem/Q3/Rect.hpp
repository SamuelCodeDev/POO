class Point
{
private:
    int x;
    int y;

public:
    int X();
    int Y();
    void MoveTo(int px, int py);
    void Translate(int dx, int dy);
};

inline int Point::X() { return x; }
inline int Point::Y() {	return y; }

class Rect
{
private:
    Point a;
    Point b;

public:
    Rect();
    Rect(Point x, Point y);
    Rect(int ax, int ay, int bx, int by);
    void Translate(int dx, int dy);
};