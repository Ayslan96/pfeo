#ifndef Anfibio_H
#define Anfibio_H

#include "animal.h"
#include "date.h"


class Anfibio : public Animal {
private:
	
	int m_total_de_mudas;
	Date m_ultima_muda;
	
	std::ostream& print(std::ostream& os) const {
		return os << "Id: " << m_id << ", Classe: " << m_classe << ", Nome Cientifico: " << m_nome_cientifico << ", Sexo: " << m_sexo 
			  <<", Tamanho: " << m_tamanho <<", Dieta: "<< m_dieta <<", Nome de Batismo: "<< m_nome_batismo
			  <<", Total de mudas: " << m_total_de_mudas << ", Última muda: " << m_ultima_muda << endl;
	}
	
public:

	Anfibio(void);

	Anfibio(int , string, string, char, int, string, string, int, Date);
	~Anfibio();

	void imprime();

	void setM_id(int);
	void setM_classe(string);
	void setM_nome_cientifico(string);
	void setM_sexo(char);
	void setM_tamanho(double);
	void setM_dieta(string);
	void setM_nome_batismo(string);
	void setM_total_de_mudas(int);
	//void setM_ultima_muda(Date);

	int getM_id();
	string getM_classe();
	string getM_nome_cientifico();
	char getM_sexo();
	double getM_tamanho();
	string getM_dieta();
	string getM_nome_batismo();
	int getM_total_de_mudas();
	//Date getM_ultima_muda();


   
};

#endif
