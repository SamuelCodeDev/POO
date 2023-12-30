#include "Conta.hpp"
#include <iostream>
using std::cout;

void Conta::Criar(const string & primeiroNome) 
{
    nome = { primeiroNome };
    saldo = {};
    numero = { 1 }; 
}

void Conta::Exibir() 
{
    cout << "Nome: " << nome << '\n';
    cout << "Saldo: " << saldo << '\n';
    cout << "Numero: " << numero << '\n';
}

void Conta::Saque(float valor) 
{
    if(saldo > valor) saldo -= valor;
    else cout << "Saldo insuficiente\n";
}

void Conta::Deposito(float valor) 
{
    saldo += valor; 
}