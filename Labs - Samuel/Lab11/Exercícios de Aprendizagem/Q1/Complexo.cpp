#include "Complexo.hpp"

Complexo::Complexo(double real, double imaginario) : real{real}, imaginario{imaginario}
{
}

Complexo Complexo::Soma(const Complexo & c) 
{
    return Complexo { real += c.real, imaginario += c.imaginario };
}

Complexo Complexo::Subtracao(const Complexo & c) 
{
    return Complexo { real -= c.real, imaginario -= c.imaginario };
}

Complexo Complexo::Multiplicacao(const Complexo & c) 
{
    return Complexo 
    { 
        (real * c.real) - (imaginario * c.imaginario), 
        (c.real * c.imaginario) - (real * imaginario) 
    };
}

Complexo Complexo::MultiplicacaoReal(double real) 
{
    return Complexo { n * real, n * imaginario };
}

Complexo Complexo::Conjugado() 
{
    return Complexo { real, -imaginario };
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