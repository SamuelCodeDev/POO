#include <iostream>
using std::ostream;

class Tempo
{
private:
    int horas;
    int minutos;

public:
    Tempo(int h, int m);
    friend ostream& operator>>(const Tempo & t, ostream & os); 
};