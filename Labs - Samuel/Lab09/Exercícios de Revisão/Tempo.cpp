// definição da classe Tempo
#include "Tempo.hpp"
#include <iostream>
using std::cout;

inline void Tempo::Calcular()
{
    horas += minutos / 60;
    minutos %= 60;
}

Tempo::Tempo(int h, int m) : horas{h}, minutos{m}
{
}

void Tempo::Exibir() const
{
    cout << horas << " horas, "
         << minutos << " minutos\n";
}

Tempo Tempo::operator+(const Tempo& t) const
{
    Tempo soma { horas + t.horas, minutos + t.minutos };
    soma.Calcular();
    return soma;
}

Tempo Tempo::operator-(const Tempo & t) const
{
    Tempo resul { horas - t.horas, minutos - t.minutos };
    resul.Calcular();
    return resul;
}

Tempo Tempo::operator*(int h) const
{
    return Tempo { horas * h, minutos };
}

Tempo Tempo::operator+(int h) const
{
    return Tempo { horas + h, minutos };
}