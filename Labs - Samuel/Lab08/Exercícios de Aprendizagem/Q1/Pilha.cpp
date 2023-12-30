#include "Pilha.hpp"
#include <iostream>
#include <cstring>
using std::cout;

// -----------------------------------------------
// Definição da Classe Pilha
// -----------------------------------------------

Pilha::Pilha(int tam)
{
	itens = { new Item[tam] };
	max = { tam };
	topo = {};
}

Pilha::~Pilha()
{
	delete[] itens;
}

bool Pilha::Vazia() const
{
	return topo == 0;
}

bool Pilha::Cheia() const
{
	return topo == max;
}

bool Pilha::Empilhar(const Item& item)
{
	if (topo < max)
	{
		itens[topo++] = { item };
		return true;
	}

	return false;
}

bool Pilha::Desempilhar(Item& item)
{
	if (topo > 0)
	{
		item = { itens[--topo] };
		return true;
	}

	return false;
}

// ----------------------------------
// Função auxiliar
// ----------------------------------

bool Palindromo(const char palavra[]) 
{
    int tam { strlen(palavra) };
    Pilha pilha { tam };

	cout << "Empilhando e desempilhando fica: ";
    for(int i = 0; i < tam; ++i)
	{
        pilha.Empilhar(palavra[i]);
		cout << palavra[tam - i - 1];
	} 

    for(int i = 0; i < tam; ++i) 
	{
        Item item;
        pilha.Desempilhar(item);
        if (palavra[i] != item) 
            return false;
    }

    return true;
}

// -----------------------------------------------