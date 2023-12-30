#include "Ponto.h"
#include <cstdio>

int main() 
{
    Point ponto;

    ponto.MoveTo(5,10);

    printf("x = %d, y = %d", ponto.X(), ponto.Y());
}