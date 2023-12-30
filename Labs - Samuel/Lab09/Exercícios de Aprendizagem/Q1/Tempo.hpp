class Tempo
{
private:
	int horas;											// quantidade de horas
	int minutos;										// quantidade de minutos

	inline void Calcular();								// Calcula os minutos excedentes em horas

public:
	Tempo() = default;									// construtor padrão
	Tempo(int h, int m = 0);							// construtor com horas e minutos
	void Exibir() const;								// exibe tempo na tela

	bool operator==(const Tempo& t) const;				// comparação entre tempos
	Tempo operator-(const Tempo& t) const;				// retorna subtração dos tempos
	Tempo operator+(const Tempo& t) const;				// retorna soma dos tempos
	Tempo& operator+=(const Tempo& t);					// soma tempo
	Tempo& operator-=(const Tempo& t);					// subtração tempo

	Tempo operator*(int h) const;						// retorna multiplicação das horas
	Tempo operator+(int h) const;						// retorna soma das horas
};