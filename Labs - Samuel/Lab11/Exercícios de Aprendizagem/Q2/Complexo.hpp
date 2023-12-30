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

    Complexo operator+(const Complexo & a, const Complexo & b);
    Complexo operator-(const Complexo & a, const Complexo & b);
    Complexo operator*(const Complexo & a, const Complexo & b);
    Complexo operator*(double real);
    Complexo operator~(Complexo & c);

    friend ostream& operator<<(ostream & os, const Complexo & c);
    friend istream& operator>>(istream & os, const Complexo & c);
};