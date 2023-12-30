#include "Pessoa.hpp"

int main() 
{
    Pessoa joao("João", "Barros");
    Pessoa artur = Pessoa();
    Pessoa marcos = Pessoa("Marcos", "Ferreira");
    Pessoa aline = {"Aline", "Barros"};
    Pessoa heloisa {"Heloísa", "Rosa"};

    joao.Exibir();
    artur.Exibir();
    marcos.Formal();
    aline.Formal();
    heloisa.Formal();
}