#include "money.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() 
{ 
    Money compra; 
    compra = 10;                    // converte int para Money 
    cout << int(compra) << endl;    // converte Money para int
}