#include "Jogo.hpp"
#include <iostream>
using std::cout;

int main()
{
    Jogo gears { "Gears", 90.0f, 30 };
    Jogo doom { "Doom", 60.0f, 120 };

    const Jogo & top = gears.Comparar(doom);

    cout << "\nJogo mais jogado:\n";
    top->exibir();
}