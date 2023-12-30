#include <string>
using std::string;

// -----------------------------------------------
// Declaração da Classe Jogo
// -----------------------------------------------

class Jogo 
{ 
private: 
    string nome; // nome do jogo 
    float preco; // preço do jogo 
    int horas;   // quantidade de horas jogadas 
    float custo; // valor por hora jogada 
  
    void Calcular();  
  
public: 
    Jogo() = default;     
    Jogo(const string& titulo, float valor = 0, int tempo = 0);   
    ~Jogo();     
    
	int Horas();
	float Custo();
	float Preco(); 
	void Atualizar(float valor); 
    void Jogar(int tempo);  
    void Exibir() const; 
}; 

// -----------------------------------------------
// Métodos Inline
// -----------------------------------------------

inline void Jogo::Calcular()
{ if (horas > 0) custo { preco / horas }; }

inline int Jogo::Horas()
{ return horas; }

inline float Jogo::Custo()
{ return custo; }
	
inline float Jogo::Preco()
{ return preco; }

// -----------------------------------------------