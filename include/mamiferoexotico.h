#ifndef MamiferoExotico_H
#define MamiferoExotico_H

#include <string>
#include "mamifero.h"
#include "animalexotico.h"


class MamiferoExotico : public Mamifero, public AnimalExotico  {

private:
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_cor_pelo <<";" <<m_autorizacao_ibama <<";" <<m_pais_origem << endl;
	}

public:


	MamiferoExotico(void);

	MamiferoExotico(int, string, string, char, int, string, string, string,std::string,std::string);

	~MamiferoExotico();

	void imprime();

};
#endif

