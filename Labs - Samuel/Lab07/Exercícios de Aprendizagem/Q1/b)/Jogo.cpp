#include "Jogo.hpp"
#include <iostream>
using std::cout;
using std::fixed;

// -----------------------------------------------
// Definição da Classe Jogo
// -----------------------------------------------

Jogo::Jogo(const string& titulo, float valor, int tempo) : nome{titulo}, preco{valor}, custo{valor}, horas{tempo}
{
    calcular();
}

Jogo::~Jogo()
{
}

void Jogo::Atualizar(float valor)
{
    preco = { valor };
    calcular();
}

void Jogo::Jogar(int tempo)
{
    horas += tempo;
    calcular();
}

void Jogo::Exibir() const
{
    cout << fixed;
    cout.precision(2);

    cout << nome << " R$"
        << preco << " "
        << horas << "h = R$"
        << custo << "/h\n";
}

// -----------------------------------------------