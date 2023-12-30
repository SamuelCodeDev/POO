#pragma once

// definição do tipo Item
using Item = int;

// ----------------------------------
// Declaração da Classe Lista
// ----------------------------------

class Lista
{
private:
    enum { MAX = 20 };
    Item lista[MAX];
    int topo;

public:
    Lista();
    void Adicionar(Item);
    bool Vazia();
    bool Cheia();
    void Visitar(void (*fn)(Item&));
};

// ----------------------------------
// Função auxiliar
// ----------------------------------

void Exibir(Item&);

// ----------------------------------