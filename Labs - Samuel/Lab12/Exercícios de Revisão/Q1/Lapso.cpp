#include <iostream>
#include "Tempo.hpp"
using namespace std;

int main() 
{
	Tempo t { 4, 25 }; 
	cout << t << '\n'; 
	t = 3;                 // cria objeto temporário 
	cout << t << '\n';
}