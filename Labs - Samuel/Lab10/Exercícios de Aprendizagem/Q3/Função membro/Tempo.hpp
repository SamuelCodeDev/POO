#include <iostream>
using std::ostream;

class Tempo
{
private:
    int horas;
    int minutos;

public:
    Tempo(int h, int m);
    void operator>>(ostream & os); 
};