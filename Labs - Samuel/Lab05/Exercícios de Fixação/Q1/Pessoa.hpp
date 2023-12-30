#include <string> 
using std::string;

class Pessoa
{
private:
    string nome;
    string sobrenome;
    
public:
    Pessoa();
    Pessoa(const string& primeiroNome = "", const string& segundoNome = "");
    
    void Exibir();  // exibe apenas nome
    void Formal();  // exibe nome e sobrenome
};