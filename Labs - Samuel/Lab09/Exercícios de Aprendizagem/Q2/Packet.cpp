#include "Packet.hpp"
#include <iostream>
using std::cout;
using std::endl;

Packet::Packet() : data{0,0,0,0}, index{}
{
}

void Packet::begin()
{
    index {};
}

void Packet::end()
{
    index {};
}

void Packet::operator<<(short val) 
{
	switch (index++)
	{
		case 0: data.part.x { val }; break;
		case 1: data.part.y { val }; break;
		case 2: data.part.z { val }; break;
		case 3: data.part.w { val }; break;
	}
}
void Packet::operator>>(short& val) 
{
	switch (index++)
	{
		case 0: val { data.part.x }; break;
		case 1: val { data.part.y }; break;
		case 2: val { data.part.z }; break;
		case 3: val { data.part.w }; break;
	}
}

void Packet::send()
{
	cout << data.all << endl;
}

short& Packet::operator[](int index)
{
	switch(index)
	{
		case 0: return data.part.x;
		case 1: return data.part.y;
		case 2: return data.part.z;
		case 3: return data.part.w;
		default: cout << "Posição inválida do pacote\n";
	}
}