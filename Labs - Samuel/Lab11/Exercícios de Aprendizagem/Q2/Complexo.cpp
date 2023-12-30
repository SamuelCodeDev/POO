#include "Complexo.hpp"

Complexo::Complexo(double real, double imaginario) : real{real}, imaginario{imaginario}
{
}

Complexo Complexo::operator+(const Complexo & a, const Complexo & b)
{
    return Complexo { a.real + b.real, a.imaginario + b.imaginario };
}

Complexo Complexo::operator-(const Complexo & a, const Complexo & b)
{
    return Complexo { a.real - b.real, a.imaginario - b.imaginario };
}

Complexo Complexo::operator*(const Complexo & a, const Complexo & b)
{
    return Complexo 
    { 
        (a.real * b.real) - (a.imaginario * b.imaginario), 
        (b.real * a.imaginario) - (a.real * b.imaginario) 
    };
}

Complexo Complexo::operator*(double real, const Complexo & b)
{
    return Complexo { real * b.real, real * b.imaginario };
}

Complexo Complexo::operator~(Complexo & c)
{
    return Complexo { c.real, -c.imaginario };
}

ostream& operator<<(ostream & os, const Complexo & c)
{
    os << c.real; 
    os.setf(ios::showpos);
    os << c.imaginario;
    os << "i";
    os.setf(ios::noshowpos);
}

istream& operator>>(istream & is, const Complexo & c)
{
    char imaginario;
    is >> c.real >> c.imaginario >> imaginario;
}