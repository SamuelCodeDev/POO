#include <iostream>
using std::ostream;

class Vetor 
{ 
private: 
   double mag;       // comprimento do vetor 
   double ang;       // ângulo do vetor em graus 
 
public: 
    Vetor() = default; 
    Vetor(double n1, double n2); 
 
    double X();      // coordenada retangular horizontal 
    double Y();      // coordenada retangular vertical 
 
    Vetor operator+(const Vetor& v) const; 
    Vetor operator-(const Vetor& v) const; 
    Vetor operator-() const; 
    Vetor operator*(double n) const; 
    friend Vetor operator*(double n, const Vetor& v); 
    friend ostream& operator<<(ostream& os, const Vetor& v); 
};