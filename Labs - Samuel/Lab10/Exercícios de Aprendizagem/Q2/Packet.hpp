#include <iostream>
using std::ostream;
using std::istream;

union Data
{
    struct
    {
        short x;                    // 16 bits
        short y;                    // 16 bits
        short z;                    // 16 bits
        short w;                    // 16 bits
    } part;

    long long all;                  // 64 bits
};

class Packet
{
private:
    Data data;

public:
    Packet() = default;                       // construtor

    void send();                    // envia (exibe) pacote
    
    friend ofstream& operator<<(ostream & os, Packet & packet);
    friend ifstream& operator>>(istream & is, Packet & packet);
};