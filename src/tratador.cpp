#include "../include/tratador.h"
Tratador::Tratador(int m_id, string m_nome, string m_cpf, short m_idade, 
				   short m_tipo_sanguineo, char m_fator_rh, string m_especialidade,
				   int m_nivel_de_seguranca):Funcionario(m_id, m_nome, m_cpf,
				   m_idade, m_tipo_sanguineo, m_fator_rh, m_especialidade),m_nivel_de_seguranca(m_nivel_de_seguranca){}

Tratador::~Tratador(){}

void Tratador::imprime(){

	cout<<m_id <<m_nome <<m_cpf <<m_idade <<m_tipo_sanguineo <<m_fator_rh
	<<m_especialidade <<m_nivel_de_seguranca <<endl;


}

