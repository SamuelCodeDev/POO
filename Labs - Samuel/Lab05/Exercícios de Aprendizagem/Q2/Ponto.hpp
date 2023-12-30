class Point
{
private:
	int x;
	int y;

public:
	Point();
	Point(int absissa, int ordenada);

	void MoveTo(int px, int py);
	void Translate(int dx, int dy);
	void Print();	
};