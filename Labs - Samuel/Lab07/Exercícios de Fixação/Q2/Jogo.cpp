#include "Jogo.hpp"
#include <iostream>
using std::cout;
using std::fixed;

void calcular(Jogo * este) 
{
    if(este->horas > 0)
        este->custo { este->preco / este->horas };
    else
        este->custo { este->preco };
}

void Atualizar(Jogo * este, float valor) 
{
    este->custo { valor };
    calcular(este);
}

void Jogar(Jogo * este, int tempo)
{
    este->horas += tempo;
    calcular(este);
}

void Exibir(Jogo * este)
{
    cout << fixed;
    cout.precision(2);

    cout << este->nome << " R$"
         << este->preco << " "
         << este->horas << "h = R$"
         << este->custo << "/h\n";
}