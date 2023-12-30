#include "Jogo.hpp"

int main() 
{
    Jogo DragonCity;
    DragonCity.adquirir("Dragon City", 0);
    DragonCity.exibir();

    DragonCity.jogar(6);
    DragonCity.exibir();

    DragonCity.atualizar(20.0f);
    DragonCity.exibir();
}