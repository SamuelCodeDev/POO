#include "Atleta.hpp"
#include <iostream>
using std::cout;

void Atleta::calcular()
{
    if (tentativas != 0) 
        percentual { (100.0f * acertos) / tentativas }; 
    else 
        percentual {};
}

Atleta::Atleta(int conquistas, int jogadas) : acertos{ conquistas }, tentativas{ jogadas }, percentual{}
{
    calcular();
}

Atleta::~Atleta()
{
}

void Atleta::exibir() const
{
    cout << "Acertos: " << atl.acertos << "  "; 
    cout << " Tentativas: " << atl.tentativas << "  "; 
    cout << " Percentual: " << atl.percentual << "\n";
}

void Atleta::acumular(const Atleta & atl)
{
    tentativas += atl.tentativas; 
    acertos += atl.acertos; 
    calcular();
}