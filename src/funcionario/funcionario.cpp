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

//setters
	void Funcionario::setM_id(int id){
		m_id = id;
	}
	void Funcionario::setM_class(string classe){
		m_class = classe;
	}
	void Funcionario::setM_nome_cientifico(string nome_cientifico){
		setM_nome_cientifico = nome_cientifico;
	}
	void Funcionario::setM_sexo(char sexo){
		m_sexo=sexo;
	}
	void Funcionario::setM_tamanho(double tamanho){
		m_tamanho=tamanho;
	}
	void Funcionario::setM_dieta(string dieta){
		m_dieta=dieta;
	}
	void Funcionario::setM_nome_batismo(string nome_batismo){
		m_nome_batismo=nome_batismo;
	}

//getters
	int Funcionario::getM_id(){
		return m_id;
	}
	string Funcionario::getM_class(){
		return m_class;
	}
	string Funcionario::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char Funcionario::getM_sexo(){
		return m_sexo;
	}
	double Funcionario::getM_tamanho(){
		return m_tamanho;
	}
	string Funcionario::getM_dieta(){
		return m_dieta;
	}
	string Funcionario::getM_nome_batismo(){
		return m_nome_batismo;
	}