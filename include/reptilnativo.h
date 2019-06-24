#ifndef ReptilNativo_H
#define ReptilNativo_H

#include <string>
#include "reptil.h"
#include "animalnativo.h"

class ReptilNativo : public Reptil, public AnimalNativo  {

private:
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			 << ";" << m_venenoso << ";" << m_tipo_de_veneno <<";" <<m_autorizacao_ibama 
			  <<";" <<m_uf_origem <<";" <<m_autorizacao << endl;
	}

public:

	ReptilNativo(void);

	ReptilNativo(int, string, string, char, int, string, string, bool, string,std::string,std::string,std::string);

	~ReptilNativo();

	void imprime();

};
#endif

