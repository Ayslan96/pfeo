/**
* @file animal.cpp
* @brief Métodos da Classe Animal
*/

/** @brief Inclui a biblioteca animal.h */
#include "../include/animal.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Animal::Animal(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo.
* @return Não possui retorno
*/
Animal::Animal(int codigo, int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, bool veterinario, bool tratador):
m_id(id), m_classe(classe), m_nome_cientifico(nome_cientifico), m_sexo(sexo), m_tamanho(tamanho), 
m_dieta(dieta), m_nome_batismo(nome_batismo), m_veterinario(veterinario), m_tratador(tratador) {

	total++;
}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
Animal::~Animal(){}


/** @brief Setters */
	void Animal::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void Animal::setM_id(int id){
		m_id = id;
	}
	void Animal::setM_classe(string classe){
		m_classe = classe;
	}
	void Animal::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
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
	void Animal::setM_veterinario(bool veterinario){
		m_veterinario = veterinario;
	}
	void Animal::setM_tratador(bool tratador){
		m_tratador = tratador;
	}

/** @brief Getters */
	int Animal::getM_codigo(){
		return m_codigo;
	}
	int Animal::getM_id(){
		return m_id;
	}
	string Animal::getM_classe(){
		return m_classe;
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
	bool Animal::getM_veterinario(){
		return m_veterinario;
	}
	bool Animal::getM_tratador(){
		return m_tratador;
	}


	int Animal::getTotal(){return total;}
