class Atleta
{
private:
    int acertos; 
    int tentativas; 
    float percentual;

    inline void calcular();

public:
    Atleta();
    Atleta(int conquistas, int jogadas);
    ~Atleta();
    void exibir() const;
    void acumular(const Atleta & atl);
};