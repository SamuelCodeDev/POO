#include "Jogo.hpp"

int main()
{
	Jogo gta = Jogo("Grand Theft Auto", 90.0f);
	Jogo celeste;

	gta.atualizar(100.0f);
	gta.jogar(2);
	gta.exibir();

	celeste.atualizar(100.0f);
	celeste.jogar(5);
	celeste.exibir();
}