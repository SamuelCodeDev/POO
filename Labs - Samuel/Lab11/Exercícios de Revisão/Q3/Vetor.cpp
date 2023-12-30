#include "Vetor.hpp"
#include <cmath>

double Vetor::Magnitude()
{
    double mag { sqrt( pow(x,2) + pow(y,2) ) };
    return mag;
}

double Vetor::Angulo()
{
    double ang { atan2(y, x) };
    return ang;
}

Vetor::Vetor(double n1, double n2)
{
    x = { n1 };
    y = { n2 };
}

Vetor Vetor::operator+(const Vetor & v) const
{
    return { x + v.x, y + v.y};
}

Vetor Vetor::operator-(const Vetor & v) const
{
    return { x - v.x, y - v.y};
}

Vetor Vetor::operator-() const
{
    return { -x, -y };
}

Vetor Vetor::operator*(double n) const
{
    return { n * x, n * y};
}

Vetor operator*(double n, const Vetor & v)
{
    return { n * v.x, n * v.y};
}

ostream & operator<<(ostream & os, const Vetor & v)
{
    os << "(x,y) = (" << v.x << ", " << v.y << ")\n";
    return os;
}