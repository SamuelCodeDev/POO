#include <string>
using std::string;

// -----------------------------------------------
// Declaração da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
	string nome;									// nome do jogo
	float preco;									// preço do jogo
	int horas;										// quantidade de horas jogadas
	float custo;									// valor por hora jogada
	
	void calcular();								// calcular custo da hora jogada
	
public:
	Jogo() = default;								// construtor padrão
	Jogo(const string& titulo,						// construtor da classe
		 float valor = 0, 
		 int tempo = 0);	
	~Jogo();										// destrutor

	const Jogo& comparar(							// compara dois jogos
		const Jogo& jogo, 
		const Jogo& (pf)(const Jogo&, const Jogo&)
		) const;
	void atualizar(float valor);					// atualizar preço do jogo
	void jogar(int tempo);							// registrar horas jogadas
	void exibir() const;							// mostrar informações
};

// -----------------------------------------------
// Métodos Inline
// -----------------------------------------------

inline void Jogo::calcular()
{ if (horas > 0) custo { preco / horas }; }

inline float custo() const
{ return custo; }

inline int horas() const
{ return horas; }

// ----------------------------------------------- 
// Funções Auxiliares 
// -----------------------------------------------

const Jogo& MaisJogado(const Jogo& a, const Jogo& b);
const Jogo& MenorCusto(const Jogo& a, const Jogo& b);

// -----------------------------------------------