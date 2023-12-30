#include "Vetor.hpp"
#include <iostream>
#include <cmath>
using namespace std;

const double GrausPorRad = 45 / atan(1.0);

Vetor::Vetor() : x{}, y{}, ang{}, mag{}, rep{RET}
{
}

inline void Vetor::SetMag()
{
    mag = { sqrt( pow(x,2) + pow(y,2) ) };
}

inline void Vetor::SetAng()
{
    ang = { atan2(y, x) };
}

inline void Vetor::SetX()
{
    x = { mag * cos(ang) };
}

inline void Vetor::SetY()
{
    y = { mag * sin(ang) }; 
}

Vetor::Vetor(double n1, double n2, Coord tipo)
{
    rep = { tipo };
    if(rep == RET)
    {
        x = { n1 };
        y = { n2 };
        SetMag();
        SetAng();
    }
    else
    {
        mag = { n1 };
        ang = { n2 / GrausPorRad };
        SetX();
        SetY();
    }
}

Vetor Vetor::Somar(const Vetor & v) const
{
    return { x + v.x, y + v.y};
}

Vetor Vetor::Subtrair(const Vetor & v) const
{
    return { x - v.x, y - v.y};
}

Vetor Vetor::Inverter() const
{
    return { -x, -y};
}

Vetor Vetor::Multiplicar(double n) const
{
    return { n * x, n * y};
}

void Vetor::Exibir()
{
    if(rep == Vetor::RET) cout << "(x,y) = (" << x << ", " << y << ")\n";
    else cout << "(m,a) = (" << mag << ", " << ang * GrausPorRad << ")\n";
}