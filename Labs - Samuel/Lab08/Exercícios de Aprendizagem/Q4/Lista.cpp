#include "Lista.hpp"
#include <iostream>
using std::cout;

Lista::Lista() 
{
    topo {};
}

void Lista::Adicionar(Item item) 
{
    if (!Cheia()) 
    {
        lista[topo++] { item };
    }
}

bool Lista::Vazia() 
{
    return topo == 0;
}

bool Lista::Cheia() 
{
    return topo == MAX;
}

void Lista::Visitar(void(* fn)(Item &))
{
    for (int i = 0;i < topo;i++)
    {
        fn(lista[i]);
    }
}

// ----------------------------------
// Função auxiliar
// ----------------------------------

void Exibir(Item & i) 
{ 
    cout << '[' << i << "] "; 
}

// ----------------------------------