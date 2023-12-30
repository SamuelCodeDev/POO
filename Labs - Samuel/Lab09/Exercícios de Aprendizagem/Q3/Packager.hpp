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

class Packager
{
private:
    short * packager;
    Data dados;
    int index;
    int size;
    int max;

public:
    Packager(int tam);
    ~Packager();

    void send();
    short& operator[](short index);
};