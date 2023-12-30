#include "Real.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() 
{ 
    Dolar ganhos = 100;                // converte int para Dólar 
    
    Real carteira;     
    carteira = ganhos;                 // converte de Dólar para Real  
    cout << carteira << endl;          // mostra valor em Reais 
     
    carteira = carteira + Dolar{25}; 
    cout << carteira << endl;          // mostra valor em Reais 
}