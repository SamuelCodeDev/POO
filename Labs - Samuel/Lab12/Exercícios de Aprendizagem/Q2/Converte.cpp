#include "money.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() 
{ 
    Money compra; 
    compra = 79.99;            // converte double para Money 
    cout << compra << endl;    // converte Money para double 
}