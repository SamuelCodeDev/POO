#include "Vetor.hpp"

int main()
{
    Vetor A, B, C;
    
    C = A.Somar(B);
    C = A.Subtrair(B);
    C = A.Multiplicar(2);
    C = A.Multiplicar(2);
    C = A.Inverter();

    /*
    
    Quais as vantagens e desvantagens de cada abordagem? 

    Vantagens da abordagem sobrecarga de operadores e funções amigas:

    Torna o código mais expressivo, semelhante à notação matemática, e pode melhorar a legibilidade.
    Facilita a integração com tipos primitivos, permitindo que objetos se comportem de maneira semelhante.
    Pode fornecer acesso controlado a membros privados, mantendo o encapsulamento.
    Permite uma semântica natural para operações relacionadas à classe.
    Pode tornar o uso da classe mais intuitivo e natural.

    Desvantagens da abordagem sobrecarga de operadores e funções amigas:

    Pode introduzir complexidade, especialmente se usada em excesso.
    Pode levar a um uso incorreto se não for cuidadosamente projetada e documentada.
    Pode tornar a manutenção mais desafiadora se não for usada com moderação.
    Pode introduzir algum overhead de desempenho em comparação com chamadas de método diretas.
    Pode exigir que os desenvolvedores aprendam as regras específicas de sobrecarga.


    Vantagens da abordagem funções convencionais:

    Pode ser mais direto e simples em alguns casos.
    Menos propenso a interpretações equivocadas.
    Pode ser mais fácil de entender e manter em alguns casos.
    Pode ser mais eficiente em termos de desempenho em algumas situações.
    Pode ser mais familiar e fácil para desenvolvedores iniciantes.

    Desvantagens da abordagem funções convencionais:

    Pode exigir chamadas de métodos explícitas, tornando o código mais verboso.
    Pode exigir métodos adicionais para fornecer acesso controlado.
    Pode exigir métodos adicionais para interoperabilidade.
    Pode resultar em métodos com nomes menos intuitivos.
    
    */
}