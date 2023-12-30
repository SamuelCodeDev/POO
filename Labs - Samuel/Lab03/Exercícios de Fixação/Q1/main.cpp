#include "Jogo.hpp"
#include <iostream>
using std::cout;

int main() 
{
    Jogo Celeste;
    Jogo Hollow_Knight;

    cout << &Celeste << '\n';
    cout << &Hollow_Knight << '\n';
}