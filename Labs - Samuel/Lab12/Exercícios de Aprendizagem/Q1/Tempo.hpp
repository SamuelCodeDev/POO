// classe Tempo

#pragma once

#include <iostream>
using std::ostream;

class Tempo
{
private:
	int horas;
	int minutos;

	inline void Calcular();

public:
	Tempo(int h = 0, int m = 0);

	friend Tempo operator+(const Tempo& t1, const Tempo& t2);
	friend ostream& operator<<(ostream& os, const Tempo& t);
};