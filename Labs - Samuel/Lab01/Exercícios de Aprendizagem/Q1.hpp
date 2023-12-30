#include <string>
using std::string;

class Conta
{
private:
	string nome;
	float saldo;
	int numero;
	
public:
	void Exibir();
	void Saque(float valor);
	void Deposito(float valor);
	void Criar(const string &nome);
};