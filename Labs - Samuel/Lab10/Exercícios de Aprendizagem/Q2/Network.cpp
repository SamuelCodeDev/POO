#include "Packet.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Entre com os dados do pacote:\n"; 
    Packet packet; 
    cin >> packet; 
     
    cout << "Enviando pacote...\n"; 
    packet.send(); 
 
    cout << "Conteúdo do pacote:\n"; 
    cout << packet << endl;
}