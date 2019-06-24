#ifndef ReptilExotico_H
#define ReptilExotico_H

#include <string>
#include "reptil.h"
#include "animalexotico.h"


class ReptilExotico : public Reptil, public AnimalExotico  {

private:
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  << ";" << m_venenoso << ";" << m_tipo_de_veneno <<";" <<m_autorizacao_ibama <<";" <<m_pais_origem << endl;
	}

public:


	ReptilExotico(void);

	ReptilExotico(int, string, string, char, int, string, string, bool, string,std::string,std::string);

	~ReptilExotico();

	void imprime();

};
#endif

