#include "Packager.hpp"
#include <iostream>
using std::cout;
using std::endl;

Packager::Packager(int tam)
{
	dados = { 0,0,0,0 };
	packager = { new short[tam] };
	index = {};
	size = {};
	max = { tam };
}

Packager::~Packager()
{
	delete[] packager;
}

short& Packager::operator[](short index)
{
	if(index < max) return packager[index];
	else cout << "Erro: Posição inválida\n"; return index;
}

void Packager::send()
{
	if (size + 4 < max) 
	{
		dados.part.x { packager[size++] };
		dados.part.y { packager[size++] };
		dados.part.z { packager[size++] };
		dados.part.w { packager[size++] };

		cout << dados.part.x << dados.part.y << dados.part.z << dados.part.w << endl;
	}
	else if(max%4==2) 
	{
		dados.part.x { packager[size++] };
		dados.part.y { packager[size++] };
		dados.part.z {};
		dados.part.w {};

		cout << dados.part.x << dados.part.y << dados.part.z << dados.part.w << endl;
	}
	else if (max %4 == 3) 
	{
		dados.part.x { packager[size++] };
		dados.part.y { packager[size++] };
		dados.part.z { packager[size++] };
		dados.part.w {};

		cout << dados.part.x << dados.part.y << dados.part.z << dados.part.w << endl;
	}
	else 
	{
		dados.part.x { packager[size++] };
		dados.part.y {};
		dados.part.z {};
		dados.part.w {};

		cout << dados.part.x << dados.part.y << dados.part.z << dados.part.w << endl;
	}
}