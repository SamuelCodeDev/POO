#include "Tempo.hpp"

Tempo::Tempo(int h, int m) : horas{h}, minutos{m}
{
}

ostream & operator>>(const Tempo & t, ostream & os)
{
    os << t.horas << " horas, " << t.minutos << " minutos.\n";
    return os;
}