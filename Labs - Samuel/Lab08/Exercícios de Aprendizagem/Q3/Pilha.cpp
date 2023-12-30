#include "Pilha.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

// -----------------------------------------------
// Definição da Classe Pilha
// -----------------------------------------------

Pilha::Pilha(int tam)
{
	itens { new Item[tam] };
	max { tam };
	topo {};
}

Pilha::Pilha()
{
	itens { nullptr };
	topo {};
	max { 1 };
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

// ----------------------------------
// Funções auxiliáries
// ----------------------------------

static int calcular(int a, int b, char operador) 
{
	enum Operador
	{
		ADICAO { '+' },
		SUBTRACAO { '-' },
		MULTIPLICACAO { '*' },
		DIVISAO { '/' }
	};

    switch (operador) 
	{
        case ADICAO: 
			return a + b; 
			break;
        case SUBTRACAO: 
			return a - b; 
			break;
        case MULTIPLICACAO: 
			return a * b; 
			break;
        case DIVISAO:
			if(b != 0) return a / b;
			else cerr << "Erro: Disisão por zero!\n"; exit(EXIT_FAILURE);
			break;
		default:
            cerr << "Erro: Operador inválido.\n";
            exit(EXIT_FAILURE);
    }
}

void rpn(const char expressao[]) 
{
    int tam { strlen(expressao) };
	Pilha pilha { tam };

    for (int i = 0;i < tam;i++) 
	{
        if (isdigit(expressao[i])) 
		{
            pilha.Empilhar(expressao[i] - '0');
        } 
		else 
		{
			Item temp1, temp2;
			int a, b;
            pilha.Desempilhar(temp2);
            pilha.Desempilhar(temp1);
			b { static_cast<int>(temp2) };
			a { static_cast<int>(temp1) };
			int resultado { calcular(a, b, expressao[i]) };
            pilha.Empilhar(resultado);
        }
    }
	
	Item resultado;
	pilha.Desempilhar(resultado);
	cout << "Resultado: " << (int)resultado << endl;
}

// -----------------------------------------------