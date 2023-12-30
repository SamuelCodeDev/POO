#include "Pilha.hpp"
#include <iostream>
using std::cin;
using std::cout; 

const int MAX = 20;

int main()
{
	cout << "Expressao: ";
	char expressao[MAX];
	cin >> expressao;

	notacaoParentizada(expressao);
}