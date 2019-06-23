#ifndef Tratador_H
#define Tratador_H

#include <iostream>
#include <string>
#include "funcionario.h"


class Tratador : public Funcionario {
private:
	
	int m_nivel_de_seguranca;

	std::ostream& print(std::ostream& os) const {
	return os << m_id << ";" << m_nome << ";" << m_cpf << ";" << m_idade << ";" << m_tipo_sanguineo 
			  << ";" << m_fator_rh << ";" << m_especialidade << ";" << m_nivel_de_seguranca
			  <<std::endl;
}
	
public:

	void imprime();

	Tratador(int,string,string,short,short,char,string,int);
	~Tratador();

	
};

#endif