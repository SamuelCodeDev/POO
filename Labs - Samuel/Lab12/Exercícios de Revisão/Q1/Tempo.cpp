// definição da classe Tempo
#include "Tempo.hpp"
#include <iostream>
using std::cout;

Tempo::Tempo(int h, int m) horas{h}, minutos{m}
{
    cout << "Construtor Hora-Min\n";
}

Tempo::~Tempo()
{
    cout << "Destrutor\n";
}

Tempo::operator double()
{
    return horas + minutos / 60.0;
}

Tempo::operator int()
{
    return horas;
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

Tempo operator+(const Tempo& t, int h)
{
    Tempo soma { h + t.horas, t.minutos };
    soma.Calcular();    
    return soma;
}

Tempo operator+(int h, const Tempo& t)
{
    return t + h;
}

ostream& operator<<(ostream& os, const Tempo& t)
{
    os << t.horas << " horas, " << t.minutos << " minutos";
    return os;
}