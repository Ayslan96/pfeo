#ifndef AveNativo_H
#define AveNativo_H

#include <string>
#include "ave.h"
#include "animalnativo.h"


class AveNativo : public Ave, public AnimalNativo  {

private:
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" <<m_tamanho_do_bico_cm << ";" <<m_envergadura_das_asas <<";" <<m_autorizacao_ibama 
			  <<";" <<m_uf_origem <<";" <<m_autorizacao << endl;
	}

public:

	AveNativo(void);

	AveNativo(int, string, string, char, int, string, string, double, double,std::string,std::string,std::string);

	~AveNativo();

	void imprime();

};
#endif