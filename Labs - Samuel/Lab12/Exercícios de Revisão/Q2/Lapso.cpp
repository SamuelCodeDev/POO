#include "Tempo.hpp"

int main() 
{
	Tempo a = Tempo(2,10);  // #1
	Tempo b (2,10);         // #2
	Tempo c = {2,10};       // #3
	Tempo d {2,10};         // #4
}