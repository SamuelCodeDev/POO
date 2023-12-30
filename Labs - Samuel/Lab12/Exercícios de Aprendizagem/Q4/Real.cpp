#include "Real.hpp"

Real::Real(int valor) : valor{valor}
{
}

Real Real::operator=(const Dolar & dolar)
{
    return Real { valor + dolar.Valor() * 5 };
}

Real Real::operator+(const Dolar & dolar)
{
    return Real { valor + dolar.Valor() * 5 };
}

ostream& operator<<(ostream & os, Real & real)
{
    return os << real.valor;
}