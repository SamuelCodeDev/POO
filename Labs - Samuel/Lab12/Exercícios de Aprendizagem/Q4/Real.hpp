#include "Dolar.hpp"
#include <iostream>
using std::ostream;

class Real
{
private:
    int valor;

public:
    Real(int valor = 0);
    Real operator=(const Dolar & dolar);
    Real operator+(const Dolar & dolar);
    friend ostream& operator<<(ostream & os, Real & real);
};