#include <iostream>
#include "Jogo.hpp"
using std::cout;

const int MAX = 3;

int main()
{
    // vetor de objetos inicializados
    Jogo colecao[MAX] = 
    {
        Jogo{"Gears", 90.0f, 30},
        Jogo{"Doom", 60.0f, 120},
        Jogo{"Halo", 80.0f, 40} 
    };

    cout << "Coleção de Jogos:\n";
    for (int i = 0; i < MAX; i++)
        colecao[i].exibir();

    // aponta para primeiro elemento
    const Jogo* top = &colecao[0];

    // compara com todos os elementos
    for (int i = 0; i < MAX; i++)
    {
        if(top->Horas() < colecao[i].Horas())
        {
            top { &colecao[i] };
        }
    }

    // top aponta para o mais jogado
    cout << "\nJogo mais jogado:\n";
    top->Exibir();
}