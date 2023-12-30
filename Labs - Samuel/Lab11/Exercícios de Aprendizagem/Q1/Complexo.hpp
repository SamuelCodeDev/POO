#include <iostream>
using std::ostream;
using std::istream;

class Complexo
{
private:
    double real, imaginario;

public:
    Complexo() = default;
    Complexo(double real, double imaginario);

    Complexo Soma(const Complexo & b);
    Complexo Subtracao(const Complexo & b);
    Complexo Multiplicacao(const Complexo & b);
    Complexo MultiplicacaoReal(double real);
    Complexo Conjugado();

    friend ostream& operator<<(ostream & os, const Complexo & c);
    friend istream& operator>>(istream & os, const Complexo & c);
};