#include "../include/veterinario.h"

Veterinario::Veterinario(void){}
Veterinario::Veterinario(int m_id, string m_nome, string m_cpf, int m_idade, 
				   string m_tipo_sanguineo, char m_fator_rh, string m_especialidade,
				   string m_crmv):Funcionario(m_id, m_nome, m_cpf,
				   m_idade, m_tipo_sanguineo, m_fator_rh, m_especialidade),m_crmv(m_crmv){}
Veterinario::~Veterinario(){}

void Veterinario::imprime(){

	std::cout <<m_id <<m_nome <<m_cpf <<m_idade <<m_tipo_sanguineo <<m_fator_rh
	<<m_especialidade <<m_crmv<< std::endl;


}

