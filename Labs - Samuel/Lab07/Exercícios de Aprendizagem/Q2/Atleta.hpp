class Atleta
{
private:
    int acertos; 
    int tentativas; 
    float percentual;

    inline void calcular();

public:
    Atleta() = default;
    Atleta(int conquistas, int jogadas);
    ~Atleta();

    bool comparar(Atleta&);
    void exibir() const;
    void acumular(const Atleta & atl);
};