#include "../include/animal.h"

Animal::Animal(int m_id, std::string m_class, std::string m_nome_cientifico, char m_sexo, double m_tamanho, std::string m_dieta, std::string m_nome_batismo){
	this->m_id = m_id;
	this->m_class = m_class;
	this->m_nome_cientifico = m_nome_cientifico;
	this->m_sexo = m_sexo;
	this->m_tamanho = m_tamanho;
	this->m_dieta = m_dieta;
	this->m_nome_batismo = m_nome_batismo;
}

Animal::~Animal(){}


//setters
	void Animal::setM_id(int id){
		m_id = id;
	}
	void Animal::setM_class(string classe){
		m_class = classe;
	}
	void Animal::setM_nome_cientifico(string nome_cientifico){
		setM_nome_cientifico = nome_cientifico;
	}
	void Animal::setM_sexo(char sexo){
		m_sexo=sexo;
	}
	void Animal::setM_tamanho(double tamanho){
		m_tamanho=tamanho;
	}
	void Animal::setM_dieta(string dieta){
		m_dieta=dieta;
	}
	void Animal::setM_nome_batismo(string nome_batismo){
		m_nome_batismo=nome_batismo;
	}

//getters
	int Animal::getM_id(){
		return m_id;
	}
	string Animal::getM_class(){
		return m_class;
	}
	string Animal::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char Animal::getM_sexo(){
		return m_sexo;
	}
	double Animal::getM_tamanho(){
		return m_tamanho;
	}
	string Animal::getM_dieta(){
		return m_dieta;
	}
	string Animal::getM_nome_batismo(){
		return m_nome_batismo;
	}