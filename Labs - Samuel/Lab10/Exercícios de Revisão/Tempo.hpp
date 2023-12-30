#include <iostream>
using std::ostream;
using std::istream;

class Tempo
{
private:
    int horas;                                                 // quantidade de horas
    int minutos;                                               // quantidade de minutos

    inline void Calcular();                                    // Calcula a quantidade de horas e minutos 

public:
    Tempo(int h = 0, int m = 0);                               // construtor

    Tempo operator+(const Tempo& t) const;                     // t + t : soma tempos
    Tempo operator+(int num) const;                            // t + n : soma tempo e número

    friend Tempo operator+(int num, const Tempo & t);          // n + t : soma números e tempo
    friend ostream& operator<<(ostream & os, const Tempo & t); // os << t : escrita com cout
    friend istream& operator>>(istream & os, Tempo & t);       // is >> t : leitura com cin
};