#include "money.hpp"

Money::Money() : valor{}
{
}

Money::Money(double valor) : valor{valor}
{
}

Money::operator double()
{
    return valor;
}