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
    Tempo soma { horas + t.horas, minutos + t.minutos  };
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
    Tempo resul { horas * h, minutos };
    return resul;
}

Tempo Tempo::operator+(int h) const
{
    Tempo resul { horas + h, minutos };
    return resul;
}

Tempo& Tempo::operator+=(const Tempo & t)
{
    horas += t.horas;
    minutos += t.minutos;

    Calcular();

    return *this;
}

Tempo& Tempo::operator-=(const Tempo & t)
{
    int mins1 { (horas * 60) + minutos};
    int mins2 { (t.horas * 60) + t.minutos};
    int diff { mins1 - mins2 };

    horas = { diff / 60 };
    minutos = { diff % 60 };
    
    return *this;
}