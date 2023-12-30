class Point
{
private:
    int x;
    int y;

public:
    int X() { return x; }
    int Y() { return y; }
    void MoveTo(int px, int py);
    void Translate(int dx, int dy);
};