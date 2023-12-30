// definição da classe Tempo
#include "Tempo.hpp"
#include <iostream>
using std::cout;

Tempo::Tempo(int h, int m) horas{h}, minutos{m}
{
}

Tempo::void Calcular()
{
    horas += minutos / 60;
    minutos %= 60;
}

Tempo Tempo::operator+(const Tempo& t) const
{
    Tempo soma { horas + t.horas, minutos + t.minutos };
    soma.Calcular();    
    return soma;
}

ostream& operator<<(ostream& os, const Tempo& t)
{
    os << t.horas << " horas, " << t.minutos << " minutos";
    return os;
}