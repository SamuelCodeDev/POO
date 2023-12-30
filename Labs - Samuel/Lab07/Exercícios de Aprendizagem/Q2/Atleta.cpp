#include "Atleta.hpp"
#include <iostream>
using std::cout;

inline void Atleta::calcular()
{
    if (tentativas != 0) 
        percentual { (100.0f * acertos) / tentativas }; 
    else 
        percentual {};
}

Atleta::Atleta(int conquistas, int jogadas) : acertos{conquistas}, tentativas{jogadas}
{
    calcular();
}

Atleta::~Atleta()
{
}

bool Atleta::comparar(Atleta & atl)
{
    return (atl.percentual > this->percentual);
}

void Atleta::exibir() const
{
    cout << "Acertos: " << acertos << "  "; 
    cout << " Tentativas: " << tentativas << "  "; 
    cout << " Percentual: " << percentual << "\n";
}

void Atleta::acumular(const Atleta & atl)
{
    tentativas += atl.tentativas; 
    acertos += atl.acertos; 
    calcular();
}