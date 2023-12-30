#include "Lista.hpp"
#include <iostream>
using namespace std;

int main()
{
	Lista lista { 5 };
	
	lista.Adicionar(2); 
	lista.Adicionar(3); 
	lista.Adicionar(6);

	cout << lista[0];
	cout << lista[3];
}