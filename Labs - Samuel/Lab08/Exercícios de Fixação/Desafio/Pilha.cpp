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

Pilha::Pilha()
{
	itens = { nullptr };
	topo = {};
	max = { 1 };
}

Pilha::~Pilha()
{
	delete[] itens;
}

bool Pilha::Vazia() const
{
	return topo == 0;
}

void Pilha::Expandir()
{
	int newMax { 2 * max + 1 };
	Item * vet { new Item[newMax] };

	for(int i = 0;i < max;++i)
	{
		vet[i] { itens[i] };
	}

	delete[] itens;

	itens { vet };
	max { newMax };
}

void Pilha::Empilhar(const Item& item)
{
	if (topo == max)
	{
		Expandir();
	} 

	itens[topo++] { item };
}

bool Pilha::Desempilhar(Item& item)
{
	if (topo > 0)
	{
		item { itens[--topo] };
		return true;
	}

	return false;
}

// -----------------------------------------------