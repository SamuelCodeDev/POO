#include "Tempo.hpp"

Tempo::Tempo(int h, int m)
{
    horas = { h };
    minutos = { m };
}

void Tempo::Calcular()
{
    horas += minutos / 60;
    minutos %= 60;
}

Tempo operator+(const Tempo& t1, const Tempo& t2)
{
    Tempo soma { t1.horas + t2.horas, t1.minutos + t2.minutos };
    soma.Calcular();
    return soma;
}

ostream& operator<<(ostream& os, const Tempo& t)
{
    os << t.horas << " horas, " << t.minutos << " minutos";
    return os;
}