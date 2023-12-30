#include "Vetor.hpp"
#include <iostream>
#include <fstream>
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
	ofstream fout {"voo.txt" };
	fout << "Distancia alvo: " << distancia << '\n';

	while(resultante.Magnitude() < distancia) 
	{
		magnitude = { rand() % MagnitudeMax };
		direcao = { rand() % AnguloMax };
		Vetor voo { magnitude, direcao, Vetor::POL };
		resultante += voo;
		cont++;
		fout << cont << ": " << resultante << '\n';
	}

	fout << "----------------------------------------------\n";
	fout << "Foram " << cont << " passos de simulacao para chegar em:\n";
	fout << resultante << '\n';
	resultante.SetCoord(Vetor::POL);
	fout << resultante << '\n';
	fout << "----------------------------------------------\n";
	fout << "Distância média por passo: " << distancia / cont << '\n';

	fout.close();
}