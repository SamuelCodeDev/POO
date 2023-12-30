#include "Atleta.hpp"
#include <iostream>
using std::cout;

const int MAX = 4;

int main() 
{
    Atleta rick { 10, 14 }; 
    Atleta john { 10, 16 }; 
    Atleta mark { 12, 15 }; 
    Atleta luis { 15, 20 }; 

    Atleta time[MAX] = 
    {
        rick,
        john,
        mark,
        luis
    };

    Atleta * top = &time[0];

    for(int i = 0;i < MAX - 1;++i)
    {
        if(top->comparar(time[i+1])) 
        {
            top { &time[i+1] };
        }
    }

    cout << "O jogador com mais acertos no time é:\n";
    top->exibir();
}