// definição da classe Tempo
#include "Tempo.hpp"
#include <iostream>
using std::cout;

Tempo::Tempo(int h, int m) horas{h}, minutos{m}
{
}

Tempo Tempo::operator+(const Tempo & t1)
{
    Tempo resultante { horas + t2.horas, minutos +  t2.minutos };
    return resultante;
}

Tempo::void Calcular()
{
    horas += minutos / 60;
    minutos %= 60;
}

ostream& operator<<(ostream& os, const Tempo& t)
{
    os << t.horas << " horas, " << t.minutos << " minutos";
    return os;
}