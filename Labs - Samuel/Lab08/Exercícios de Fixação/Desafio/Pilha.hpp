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

	void Expandir();

public:
	Pilha();								// construtor
	Pilha(int tam);							// construtor padrão
	~Pilha();								// destrutor

	bool Vazia() const;                     // verifica se a pilha está vazia
	void Empilhar(const Item& item);		// adiciona item na pilha									
	bool Desempilhar(Item & item);			// remove item da pilha
};

// ----------------------------------