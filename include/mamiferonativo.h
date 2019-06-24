#ifndef MamiferoNativo_H
#define MamiferoNativo_H

#include <string>
#include "mamifero.h"
#include "animalnativo.h"


class MamiferoNativo : public Mamifero, public AnimalNativo  {

private:
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_cor_pelo <<";" <<m_autorizacao_ibama 
			  <<";" <<m_uf_origem <<";" <<m_autorizacao << endl;
	}

public:

	MamiferoNativo(void);

	MamiferoNativo(int, string, string, char, int, string, string, string,std::string,std::string,std::string);

	~MamiferoNativo();

	void imprime();

};
#endif

