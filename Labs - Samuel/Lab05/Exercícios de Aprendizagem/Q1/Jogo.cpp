#include "Jogo.hpp"
#include <iostream>
using std::cout;
using std::fixed;

Jogo::Jogo(const string & titulo, float valor, int tempo) : nome {titulo}, preco{valor}, horas{tempo}
{
    calcular();
}

Jogo::Jogo(const string& titulo = "", float valor = 0) : nome {titulo}, custo{valor}, preco{valor}, horas{}
{
}

void Jogo::atualizar(float valor)
{
    preco = { valor };
    calcular();
}

void Jogo::jogar(int tempo)
{
    horas += tempo;
    calcular();
}

void Jogo::exibir()
{
    cout << fixed;
    cout.precision(2);

    cout << nome << " R$"
         << preco << " "
         << horas << "h = R$"
         << custo << "/h\n";
}