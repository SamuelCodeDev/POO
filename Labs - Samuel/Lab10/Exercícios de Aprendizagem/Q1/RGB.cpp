#include "RGB.hpp"

//------------------------------------------------
// Construtores

Cor::Cor() : R{}, G{}, B{}
{
}

Cor::Cor(int red, int green, int blue) : R{red}, G{green}, B{blue}
{
}

//------------------------------------------------
// Funções Membro

Cor Cor::operator*(const Cor & cor2)
{
    return Cor { (this->R * cor2.R) / 255, 
                 (this->G * cor2.G) / 255, 
                 (this->B * cor2.B) / 255 };
}

//------------------------------------------------
// Funções Amigas

ostream& operator<<(ostream & os, const Cor & cor)
{
    os << "\x1b[38;2;" << cor.R << ';' << cor.G << ';' << cor.B << 'm';
    return os;
}

istream& operator>>(istream & is, Cor & cor)
{
    is >> cor.R >> cor.G >> cor.B;
    return is;
}