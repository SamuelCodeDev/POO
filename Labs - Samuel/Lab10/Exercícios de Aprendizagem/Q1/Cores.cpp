#include "RGB.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const char * normal = "\033[0m";

int main() 
{ 
    Cor azul { 0, 163, 215 }; 
    Cor laranja {255, 170, 0 }; 
 
    cout << "Entre com o código de uma cor:\n"; 
    Cor cor;     
    cin >> cor;  
 
    Cor verde = azul * laranja; 
 
    cout << verde << "VERDE" << endl; 
    cout << cor << "SUA COR" << endl; 
 
    // volta para a cor padrão     
    cout << normal;   
}