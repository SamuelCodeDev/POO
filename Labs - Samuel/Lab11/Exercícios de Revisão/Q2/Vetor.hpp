#include <iostream>
using std::ostream;

class Vetor 
{ 
private: 
   double x;             // coordenada cartesiana horizontal 
   double y;             // coordenada cartesiana vertical 
 
public: 
    Vetor() = default; 
    Vetor(double n1, double n2); 
 
    double Magnitude();  // retorna magnitude (coordenada polar) 
    double Angulo();     // retorna ângulo (coordenada polar) 
 
    Vetor operator+(const Vetor& v) const; 
    Vetor operator-(const Vetor& v) const; 
    Vetor operator-() const; 
    Vetor operator*(double n) const; 
    friend Vetor operator*(double n, const Vetor& v); 
    friend ostream& operator<<(ostream& os, const Vetor& v); 
};