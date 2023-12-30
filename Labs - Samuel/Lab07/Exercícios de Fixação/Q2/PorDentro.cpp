#include "Jogo.hpp" 
 
int main() 
{ 
    Jogo gears { "Gears", 90.0f }; 
 
    Atualizar(&gears, 100.0f); 
    Jogar(&gears, 5); 
    Exibir(&gears); 
}