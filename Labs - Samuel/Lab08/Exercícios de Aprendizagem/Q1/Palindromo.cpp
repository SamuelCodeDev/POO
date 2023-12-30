#include "Pilha.hpp"
#include <iostream>
using std::cin;
using std::cout; 

const int MAX = 20;

int main()
{
	cout << "Digite uma palavra: ";
	char palavra[MAX];
	cin >> palavra;

	if(Palindromo(palavra)) cout << "\nA palavra é um palíndromo.\n";
	else cout << "\nA palavra não é um palíndromo.\n";
}