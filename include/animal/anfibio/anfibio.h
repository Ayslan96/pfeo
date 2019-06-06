#ifndef Anfibio_H
#define Anfibio_H

#include "animal.h"
#include "../include/date"
#include <string>



class Anfibio : public Animal {
private:
	
	int m_total_de_mudas;
	Date m_ultima_muda;
	
	std::ostream& print(std::ostream& os) const {
		return os << "Id: " << m_id << ", Classe: " << m_classe << ", Nome Cientifico: " << m_nome_cientifico << ", Sexo: " << m_sexo 
			  <<", Tamanho: " <<m_tamanho <<", Dieta: "<<m_dieta <<", Nome de Batismo: "<<m_nome_batismo
			  <<", Total de mudas: " <<m_total_de_mudas << ", Última muda: " << m_ultima_muda << endl;
	}
	
public:

	Anfibio(void);

	Anfibio(int id, string classe, string nome_cientifico, 
		char sexo, int tamanho, string dieta, string nome_batismo, int total_de_mudas, Date ultima_muda;);
	~Anfibio();

	void imprime();

   
};

#endif
