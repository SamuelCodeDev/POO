#include "Pilha.hpp"

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

// -----------------------------------------------