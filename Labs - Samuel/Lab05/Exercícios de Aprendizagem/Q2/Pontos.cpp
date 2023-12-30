#include "Ponto.hpp"

int main()
{
	Point ponto1;
	ponto1.Print();
	
	ponto1.Translate(3,4);
	ponto1.Print();
	ponto1.MoveTo(10,5);
	ponto1.Print();
}