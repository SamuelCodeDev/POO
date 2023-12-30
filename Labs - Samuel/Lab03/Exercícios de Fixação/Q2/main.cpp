#include "Coord.hpp"
#include <cstdio>

int main() 
{
    Coord1 ponto1;

    ponto1.Translate(10,20);
    printf("(%d,%d)\n", ponto1.x, ponto1.y);

    ponto1.MoveTo(2,5);
    printf("(%d,%d)\n", ponto1.x, ponto1.y);
    
    Coord2 ponto2;

    ponto2.Translate(10,20);
    printf("(%d,%d)\n", ponto2.x, ponto2.y);

    ponto2.MoveTo(2,5);
    printf("(%d,%d)\n", ponto2.x, ponto2.y);
}