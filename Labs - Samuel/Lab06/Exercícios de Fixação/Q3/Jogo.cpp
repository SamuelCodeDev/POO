#include "Jogo.hpp"
#include <iostream>
using std::cout;
using std::fixed;

Jogo::Jogo() : nome{}, preco{}, custo{}, horas{}
{
    cout << "Construindo objeto Padrao\n";
}

Jogo::Jogo(const string& titulo, float valor) : nome{titulo}, preco{valor}, custo{valor}, horas{}
{
    cout << "Construindo objeto " << titulo << "\n";
}

Jogo::~Jogo()
{
    cout << "Destruindo objeto " << nome << '\n';
}

void Jogo::atualizar(float valor)
{
    preco { valor };
    calcular();
}

void Jogo::jogar(int tempo)
{
    horas += tempo;
    calcular();
}

void Jogo::exibir() const
{
    cout << fixed;
    cout.precision(2);

    cout << nome << " R$"
         << preco << " "
         << horas << "h = R$"
         << custo << "/h\n";
}