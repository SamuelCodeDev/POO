class Tempo
{
private:
	int horas;									// quantidade de horas
	int minutos;								// quantidade de minutos

	inline void Calcular();						// minutos excedentes viram horas

public:
	Tempo() = default;							// construtor padrão
	Tempo(int h, int m = 0);					// construtor com horas e minutos
	void Exibir() const;						// exibe tempo na tela

	Tempo operator+(const Tempo& t) const;		// retorna soma dos tempos
	Tempo operator-(const Tempo& t) const;		// retorna subtração dos tempos
	Tempo operator*(int h) const;				// retorna multiplicação das horas
	Tempo operator+(int h) const;				// retorna soma das horas
};