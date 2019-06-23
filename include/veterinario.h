#ifndef Veterinario_H
#define Veterinario_H

#include "funcionario.h"
#include <iostream>
#include <string>

class Veterinario : public Funcionario {

private:
	
	std::string m_crmv;
	
	std::ostream& print(std::ostream& os) const {
	return os << m_id << ";" << m_nome << ";" << m_cpf << ";" << m_idade << ";" << m_tipo_sanguineo 
			  << ";" << m_fator_rh << ";" << m_especialidade << ";" << m_crmv
			  << std::endl;
	}
public:

	void imprime();

	Veterinario(int,string,string,int,string,char,string,string);
	
	~Veterinario();

	
};

#endif