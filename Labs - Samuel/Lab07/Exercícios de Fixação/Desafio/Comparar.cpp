#include "Jogo.hpp"
#include <iostream>
using std::cout;

int main()
{
    Jogo gears { "Gears", 90.0f, 30 };
    Jogo doom { "Doom", 60.0f, 120 };

    const Jogo & topPlay = gears.Comparar(doom, MaisJogado);
    const Jogo & topValue = gears.Comparar(doom, MenorCusto);

    cout << "\nJogo mais jogado:\n";
    top->exibir();

    cout << "\nJogo com menor custo:\n";
    topValue.exibir();
}