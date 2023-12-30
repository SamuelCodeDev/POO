#include "Jogo.hpp"
#include <iostream>
using std::cout;

int main()
{   
	cout << "Inicializa:\n";
	{
		Jogo sackboy = Jogo("Sackboy", 150.0f);
	}

	cout << "\nCria e Atribui:\n";
	{
		Jogo horizon;
		horizon = Jogo("Horizon", 199.0f);
	}
}