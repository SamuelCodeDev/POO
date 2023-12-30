#include "Tempo.hpp"

Tempo::Tempo(int h, int m) : horas{h}, minutos{m}
{
}

void Tempo::operator>>(ostream & os);
{
    os << t.horas << " horas, " << t.minutos << " minutos.\n";
    return os;
}