#ifndef AveExotico_H
#define AveExotico_H

#include <string>
#include "ave.h"
#include "animalexotico.h"


class AveExotico : public Ave, public AnimalExotico  {

private:
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" <<m_tamanho_do_bico_cm << ";" <<m_envergadura_das_asas
			  <<";" <<m_autorizacao_ibama <<";" <<m_pais_origem << endl;
	}

public:


	AveExotico(void);

	AveExotico(int, string, string, char, int, string, string, double, double,std::string,std::string);

	~AveExotico();

	void imprime();

};
#endif

