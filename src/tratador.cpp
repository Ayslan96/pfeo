/**
* @file tratador.cpp
* @brief Métodos da Classe Tratador filha da classe base Funcionario
/**

/** @brief Inclui a biblioteca tratador.h */
#include "../include/tratador.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Tratador::Tratador(void){}

/**
* @brief Método construtor padronizado.
* @param  m_codigo, m_id,  m_nome, m_cpf, m_idade, m_tipo_sanguineo, m_fator_rh, m_especialidade, m_nivel_de_seguranca.
* @return Não possui retorno.

*/
Tratador::Tratador(int m_codigo, int m_id, string m_nome, string m_cpf, int m_idade, 
				   string m_tipo_sanguineo, char m_fator_rh, string m_especialidade,
				   int m_nivel_de_seguranca):Funcionario(m_codigo,m_id, m_nome, m_cpf,
				   m_idade, m_tipo_sanguineo, m_fator_rh, m_especialidade),m_nivel_de_seguranca(m_nivel_de_seguranca){}


/**
* @brief Método destrutor.
* @return Não possui retorno
*/	
Tratador::~Tratador(){}

	
/**
* @brief Método de impressão de um Tratador.
* @return Não possui retorno
*/
void Tratador::imprime(){

	std::cout <<m_codigo << m_id << m_nome << m_cpf << m_idade << m_tipo_sanguineo << m_fator_rh
	<< m_especialidade << m_nivel_de_seguranca << std::endl;


}

