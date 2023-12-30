class Point
{
private:
    int x;
    int y;

public:
    void MoveTo(int px, int py);
    void Translate(int dx, int dy);
};

class Rect
{
private:
    Point a;
    Point b;

public:
    void Create(int ax, int ay, int bx, int by);
    void Translate(int dx, int dy);
};