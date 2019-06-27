/**
* @file veterinario.cpp
* @brief Métodos da Classe Tratador filha da classe base Funcionario
*/

/** @brief Inclui a biblioteca veterinario.h */
#include "../include/veterinario.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Veterinario::Veterinario(void){}

/**
* @brief Método construtor padronizado.
* @param  codigo, id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade
* @return Não possui retorno.
*/
Veterinario::Veterinario(int codigo, int m_id, string m_nome, string m_cpf, int m_idade, 
				   string m_tipo_sanguineo, char m_fator_rh, string m_especialidade,
				   string m_crmv):Funcionario(m_codigo,m_id, m_nome, m_cpf,
				   m_idade, m_tipo_sanguineo, m_fator_rh, m_especialidade),m_crmv(m_crmv){}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/	
Veterinario::~Veterinario(){}

/**
* @brief Método de impressão de um Veterinario.
* @return Não possui retorno
*/
void Veterinario::imprime(){

	std::cout <<m_codigo <<m_id <<m_nome <<m_cpf <<m_idade <<m_tipo_sanguineo <<m_fator_rh
	<<m_especialidade <<m_crmv<< std::endl;


}

