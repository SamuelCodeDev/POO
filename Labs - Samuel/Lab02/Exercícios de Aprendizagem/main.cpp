#include "Conta.hpp"

int main() 
{
    Conta conta1;
    conta1.Criar("Samuel");
    conta1.Exibir();
    
    conta1.Deposito(100);
    conta1.Exibir();

    conta1.Saque(75);
    conta1.Exibir();
}