#include "Pessoa.hpp"
#include <iostream>
using std::cout;

Pessoa::Pessoa() : nome {}, sobrenome {}
{
}

Pessoa::Pessoa(const string& primeiroNome = "", const string& segundoNome = "") : nome { primeiroNome }, sobrenome { segundoNome }
{
}

void Pessoa::Exibir()
{
    cout << "Nome: " << nome;
}

void Pessoa::Formal()
{
    cout << "Nome completo: " << nome << ' ' << sobrenome << '\n';
}