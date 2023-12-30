#include <string>
using std::string;

struct Jogo 
{
	string nome;
	float preco;
	int horas;
	float custo;
};

void Atualizar(Jogo * este, float valor);
void Jogar(Jogo * este, int tempo);
void calcular(Jogo * este);
void Exibir(Jogo * este);