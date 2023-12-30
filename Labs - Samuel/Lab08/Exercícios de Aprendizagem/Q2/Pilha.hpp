// definição do tipo Item
using Item = char;

// ----------------------------------
// Declaração da Classe Pilha
// ----------------------------------

class Pilha
{
private:
	Item * itens;						    // armazenamento de itens
	int topo;                               // índice do item no topo
	int max;								// capacidade de pilha

public:
	Pilha(int tam);                         // construtor
	~Pilha();								// destrutor

	bool Vazia() const;                     // verifica se a pilha está vazia
	bool Cheia() const;						// verifica se a pilha está cheia
	bool Empilhar(const Item& item);		// adiciona item na pilha									
	bool Desempilhar(Item & item);			// remove item da pilha
};

// ----------------------------------
// Função auxiliar
// ----------------------------------

void notacaoParentizada(const char[]);

// ----------------------------------