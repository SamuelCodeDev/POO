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