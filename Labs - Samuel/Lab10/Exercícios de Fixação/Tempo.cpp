// definição da classe Tempo
#include "Tempo.hpp"

//------------------------------------------------
// Construtor

Tempo::Tempo(int h = 0, int m = 0) : horas{h}, minutos{m}
{       
}

//------------------------------------------------
// Funções Membro

inline void Tempo::Calcular()
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

Tempo Tempo::operator+(int num) const
{
    return { horas + num, minutos };
}

//------------------------------------------------
// Funções Amigas

Tempo operator+(int num, const Tempo & t)
{
    return { t.horas + num, t.minutos };
}

ostream & operator<<(ostream & os, const Tempo & t)
{
    os  << t.horas << " horas, " << t.minutos << " minutos\n";
    return os;
}

istream & operator>>(istream & is, Tempo & t)
{
    is >> t.horas;
    is.get();
    is >> t.minutos;
    return is;
}