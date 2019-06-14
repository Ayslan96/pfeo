#ifndef AnfibioNativo_H
#define AnfibioNativo_H
//vdc
#include <string>
#include "anfibio.h"
#include "animal.h"
#include "date.h"


class AnfibioNativo : public Anfibio {

private:
	
	int m_total_de_mudas;
	Date m_ultima_muda;
	
	std::ostream& print(std::ostream& os) const {
		return os << "Id: " << m_id << ", Classe: " << m_classe << ", Nome Cientifico: " << m_nome_cientifico << ", Sexo: " << m_sexo 
			  <<", Tamanho: " << m_tamanho <<", Dieta: "<< m_dieta <<", Nome de Batismo: "<< m_nome_batismo
			  <<", Total de mudas: " << m_total_de_mudas << ", Última muda: " << m_ultima_muda 
			  <<", "<< endl;
	}
	

public:

Anfibio(void);

	Anfibio(int , string, string, char, int, string, string, int, Date);
	~Anfibio();

	void imprime();
};