#include "../include/tratador.h"

Tratador::Tratador(void){}

Tratador::Tratador(int m_codigo, int m_id, string m_nome, string m_cpf, int m_idade, 
				   string m_tipo_sanguineo, char m_fator_rh, string m_especialidade,
				   int m_nivel_de_seguranca):Funcionario(m_codigo,m_id, m_nome, m_cpf,
				   m_idade, m_tipo_sanguineo, m_fator_rh, m_especialidade),m_nivel_de_seguranca(m_nivel_de_seguranca){}

Tratador::~Tratador(){}

void Tratador::imprime(){

	std::cout <<m_codigo << m_id << m_nome << m_cpf << m_idade << m_tipo_sanguineo << m_fator_rh
	<< m_especialidade << m_nivel_de_seguranca << std::endl;


}

