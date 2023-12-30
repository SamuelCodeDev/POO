#include "Complexo.hpp"
#include <iostream>
using std::cin;
using std::cout;

const char endl = '\n';

int main()
{
    cout << "Digite dois números complexos:\n";
    Complexo a, b;
    cin >> a >> b;

    cout << "Complexo b:" << b << endl;
    cout << "Seu conjugado: " << b.Conjugado() << endl;
    cout << "Complexo a: " << a << endl;
    cout << "a + b = " << a.Soma(b) << endl;
    cout << "a - b = " << a.Subtracao(b) << endl;
    cout << "a * b = " << a.Multiplicacao(b) << endl;
    cout << "2 * b = " << b.MultiplicacaoReal(2) << endl;
}