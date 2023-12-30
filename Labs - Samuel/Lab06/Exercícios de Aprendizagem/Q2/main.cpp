#include "Atleta.hpp"

int main() 
{
    Atleta rick { 13, 14 }; 
    Atleta john { 10, 16 }; 
    Atleta mark { 7, 9 }; 
    Atleta time;

    time.acumular(rick);
    time.acumular(john);
    time.acumular(mark);

    time.exibir();
}