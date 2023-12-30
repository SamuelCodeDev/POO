#include "Packet.hpp"

//------------------------------------------------
// Função Membro

void Packet::send()
{
	cout << data.all << endl;
}

//------------------------------------------------
// Funções Amigas

ofstream & operator<<(ostream & os, Packet & packet)
{
	os << packet.data.part.x << ' ' 
	   << packet.data.part.y << ' ' 
	   << packet.data.part.z << ' ' 
	   << packet.data.part.w << '\n';
	return os;
}

ifstream & operator>>(istream & is, Packet & packet)
{
	is >> packet.data.part.x 
	   >> packet.data.part.y 
	   >> packet.data.part.z 
	   >> packet.data.part.w;
	return is;
}