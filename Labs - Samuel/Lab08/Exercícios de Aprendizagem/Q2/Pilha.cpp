#include "Pilha.hpp"
#include <iostream>
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

void notacaoParentizada(const char palavra[]) 
{
    int tam { strlen(palavra) };
    Pilha pilha { tam };

	int parenteses_aberto = 0;
	int parenteses_fechado = 0;

    for(int i = 0; i < tam; ++i)
	{
        pilha.Empilhar(palavra[i]);
		if(palavra[i] == '(')
			parenteses_aberto++;
		else if(palavra[i] == ')')
			parenteses_fechado++;
	} 

    if(parenteses_aberto == parenteses_fechado)	cout << "[Ok] Parenteses corretos\n";
	else if(parenteses_aberto > parenteses_fechado)	cout << "[Erro] Parentese nao foi fechado\n";
	else if(parenteses_aberto < parenteses_fechado)	cout << "[Erro] Parentese nao foi aberto\n";
}

// -----------------------------------------------