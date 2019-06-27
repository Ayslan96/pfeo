/**
* @file funcionario.cpp
* @brief Métodos da Classe Funcionario
*/

/** @brief Inclui a biblioteca funcionario.h */
#include "../include/funcionario.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Funcionario::Funcionario(void){}

/**
* @brief Método construtor padronizado.
* @param  codigo, id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade
* @return Não possui retorno.
*/
Funcionario::Funcionario(int codigo, int id, string nome, string cpf, int idade, string tipo_sanguineo, char fator_rh, string especialidade):
m_id(id), m_nome(nome), m_cpf(cpf), m_idade(idade), m_tipo_sanguineo(tipo_sanguineo), m_fator_rh(fator_rh), m_especialidade(especialidade){}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
Funcionario::~Funcionario(){}

//setters
	/*void Funcionario::setM_id(int idd){
		m_id = idd;
	}
	void Funcionario::setM_nome(string nome){
		m_nome = nome;
	}
	void Funcionario::setM_cpf(string cpf){
		m_cpf = cpf;
	}
	void Funcionario::setM_idade(short idade){
		m_idade=idade;
	}
	void Funcionario::setM_tipo_sanguineo(short tipo_sanguineo){
		m_tipo_sanguineo = tipo_sanguineo;
	}
	void Funcionario::setM_fator_rh(char fator_rh){
		m_fator_rh = fator_rh;
	}
	void Funcionario::setM_especialidade(string especialidade){
		m_especialidade=especialidade;
	}

//getters
	int Funcionario::getM_id(){
		return m_id;
	}
	string Funcionario::getM_nome(){
		return m_nome;
	}
	string Funcionario::getM_cpf(){
		return m_cpf;
	}
	short Funcionario::getM_idade(){
		return m_idade;
	}
	short Funcionario::getM_tipo_sanguineo(){
		return m_tipo_sanguineo ;
	}
	char Funcionario::getM_fator_rh(){
		return m_fator_rh;
	}
	string Funcionario::getM_especialidade(){
		return m_especialidade;
	}*/
