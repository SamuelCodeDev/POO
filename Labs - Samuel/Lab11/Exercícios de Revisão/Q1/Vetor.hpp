class Vetor
{
public:  
    enum Coord { RET, POL }; 
 
private: 
    double x, y;    // coordenadas cartesianas 
    double mag;     // comprimento do vetor 
    double ang;     // ângulo do vetor em graus 
    Coord rep;      // representação padrão 
  
    inline void SetMag();  // ajusta magnitude com base em (x,y) 
    inline void SetAng();  // ajusta ângulo com base em (x,y) 
    inline void SetX();    // ajusta posição x com base em magnitude e ângulo 
    inline void SetY();    // ajusta posição y com base em magnitude e ângulo

public:
    Vetor(); 
    Vetor(double n1, double n2, Coord tipo = RET); 
 
    double Angulo() { return ang; } 
    double Magnitude() { return mag;  } 
    void SetCoord(Coord modo) { rep { modo }; } 
    
    void Exibir();
    Vetor Inverter() const;
    Vetor Multiplicar(double n) const;
    Vetor Somar(const Vetor & v) const;
    Vetor Subtrair(const Vetor & v) const;
};