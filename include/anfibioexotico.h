#ifndef AnfibioExotico_H
#define AnfibioExotico_H

#include <string>
#include "anfibio.h"
#include "animalexotico.h"
#include "date.h"

class AnfibioExotico : public Anfibio, public AnimalExotico  {

private:
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_total_de_mudas << ";" << m_ultima_muda <<";" <<m_autorizacao_ibama <<";" <<m_pais_origem << endl;
	}

public:


	AnfibioExotico(void);

	AnfibioExotico(int,std::string,std::string,char,int,std::string,std::string,int,Date,std::string,std::string);

	~AnfibioExotico();

	void imprime();

};
#endif

