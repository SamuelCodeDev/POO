#include <iostream>
using std::ostream;
using std::istream;

class Cor
{
private:
    int R;
    int G;
    int B;

public:
    Cor() = default;
    Cor(int red, int green, int blue);

    Cor operator*(const Cor & cor2);

    friend ostream& operator<<(ostream & os, const Cor & cor);
    friend istream& operator>>(istream & is, Cor & cor); 
};