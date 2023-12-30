#include "Vetor.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(unsigned(time(0)));

	enum 
	{
		MagnitudeMax = 10,
		AnguloMax = 360
	};

	cout << "Entre com a distância desejada: ";
	double distancia;
	cin >> distancia;

	Vetor resultante;
	double magnitude;
	double direcao;

	int cont {};
	cout << "Distancia alvo: " << distancia << '\n';

	while(resultante.Magnitude() < distancia) 
	{
		magnitude = { rand() % MagnitudeMax };
		direcao = { rand() % AnguloMax };
		Vetor voo { magnitude, direcao, Vetor::POL };
		resultante += voo;
		cont++;
	}

	cout << "----------------------------------------------\n";
	cout << "Foram " << cont << " passos de simulacao para chegar em:\n";
	cout << resultante << '\n';
	resultante.SetCoord(Vetor::POL);
	cout << resultante << '\n';
	cout << "----------------------------------------------\n";
	cout << "Distância média por passo: " << distancia / cont << '\n';
}