#include "Jogo.hpp"
#include <iostream>
using std::cout;
using std::fixed;

// -----------------------------------------------
// Definição da Classe Jogo
// -----------------------------------------------

Jogo::Jogo(const string& titulo, float valor) : nome{titulo}, preco{valor}, custo{valor}, horas{}
{
    calcular();
}

Jogo::~Jogo()
{
}

const Jogo& comparar(const Jogo& jogo) const
{
    return MaisJogado(*this, jogo);
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

void Jogo::exibir() const
{
    cout << fixed;
    cout.precision(2);

    cout << nome << " R$"
         << preco << " "
         << horas << "h = R$"
         << custo << "/h\n";
}

// ----------------------------------------------- 
// Funções Auxiliares 
// -----------------------------------------------

const Jogo& MaisJogado(const Jogo& a, const Jogo& b) 
{ 
    if (a.Horas() > b.Horas()) 
        return a; 
    else 
        return b; 
} 
 
const Jogo& MenorCusto(const Jogo& a, const Jogo& b) 
{ 
    if (a.Custo() < b.Custo()) 
        return a; 
    else 
        return b; 
}

// -----------------------------------------------