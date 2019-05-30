#include "../include/funcionario.h"

Funcionario::Funcionario(int m_id, string m_nome, string m_cpf, 
				short m_idade, short m_tipo_sanguineo, char m_fator_rh,
				string m_especialidade){
	this->m_id = m_id;
	this->m_nome = m_nome;
	this->m_cpf = m_cpf;
	this->m_idade = m_idade;
	this->m_tipo_sanguineo = m_tipo_sanguineo;
	this->m_fator_rh = m_fator_rh;
	this->m_especialidade = m_especialidade;
}

Funcionario::~Funcionario(){}