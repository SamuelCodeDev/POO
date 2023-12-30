// classe Horario

#pragma once

#include "Tempo.hpp"
#include <iostream>
using std::ostream;

class Horario
{
private:
	int horas;
	int minutos;

public:
	Horario(int h = 0, int m = 0);

	operator Tempo(const Horario & inicial, const Horario & final);
	friend Horario operator-(const Horario& h1, const Horario& h2);
	friend ostream& operator<<(ostream& os, const Horario& h);
};