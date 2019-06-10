#ifndef Tratador_H
#define Tratador_H

#include <iostream>
#include <string>
#include "funcionario.h"


class Tratador : public Funcionario {
private:
	
	int m_nivel_de_seguranca;

	std::ostream& print(std::ostream& os) const {
	return os <<"Id: "<<m_id <<", Nome: "<<m_nome <<", CPF: " << m_cpf <<", Idade: " <<m_idade <<", Tipo Sanguineo: "<<m_tipo_sanguineo 
			  <<", Fator RH: " <<m_fator_rh <<", Especialidade: "<<m_especialidade <<", m_nivel_de_seguranca: "<<m_nivel_de_seguranca
			  <<std::endl;
}
	
public:

	void imprime();

	Tratador(int,string,string,short,short,char,string,int);
	~Tratador();

	
};

#endif