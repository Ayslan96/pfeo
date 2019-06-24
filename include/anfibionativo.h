#ifndef AnfibioNativo_H
#define AnfibioNativo_H

#include <string>
#include "anfibio.h"
#include "animalnativo.h"
#include "date.h"

class AnfibioNativo : public Anfibio, public AnimalNativo  {

private:
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_total_de_mudas << ";" << m_ultima_muda <<";" <<m_autorizacao_ibama 
			  <<";" <<m_uf_origem <<";" <<m_autorizacao << endl;
	}

public:

	AnfibioNativo(void);

	AnfibioNativo(int,std::string,std::string,char,int,std::string,std::string,int,Date,std::string,std::string,std::string);

	~AnfibioNativo();

	void imprime();

};
#endif

