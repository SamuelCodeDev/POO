#include "Tempo.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() 
{ 
    Tempo a { 2, 30 }; 
    Tempo b { 1, 10 }; 
    Tempo c { 3, 40 }; 
 
    if (a == b) cout << "iguais\n"; 
    if (a + b == c) cout << "iguais\n";
};