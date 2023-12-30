#include "Pilha.hpp"
#include <iostream>
using std::cout;
using std::cin;

const int MAX = 20;

int main()
{
	cout << "Expressao: ";
	char expressao[MAX];
	cin >> expressao;

	rpn(expressao);
}