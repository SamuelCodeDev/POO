#include "Packet.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    Packet packet; 
 
    cout << "Empacotando...\n"; 
    packet[0] { 1 }; 
    packet[1] { 2 }; 
    packet[2] { 3 }; 
    packet[3] { 4 }; 
 
    cout << "Enviando pacote...\n"; 
    cout << "Recebendo pacote...\n"; 
 
    cout << "Desempacotando...\n"; 
    short a, b, c, d; 
    a { packet[0] }; 
    b { packet[1] }; 
    c { packet[2] }; 
    d { packet[3] }; 
    cout << a << b << c << d << endl;
}