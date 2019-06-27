/**
* @file ave.cpp
* @brief Métodos da Classe Ave
*/

/** @brief Inclui a biblioteca animal.h */
#include "../include/ave.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Ave::Ave(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo,m_tamanho_do_bico_cm,
 m_envergadura_das_asas
* @return Não possui retorno
*/
Ave::Ave(int m_codigo, int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, 
	string m_dieta, string m_nome_batismo, bool m_veterinario, bool m_tratador ,
		double m_tamanho_do_bico_cm, double m_envergadura_das_asas):
	Animal(m_codigo,m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_veterinario, m_tratador),
		m_tamanho_do_bico_cm(m_tamanho_do_bico_cm),m_envergadura_das_asas(m_envergadura_das_asas) {}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
Ave::~Ave(){}

/** @brief Implementação do método de impressão de uma ave*/
void Ave::imprime(){

	cout <<m_codigo<<m_id <<m_classe <<m_nome_cientifico <<m_sexo <<m_tamanho
	<<m_dieta <<m_nome_batismo <<m_tamanho_do_bico_cm <<m_envergadura_das_asas << endl;

}


/** @brief Setters */
	void Ave::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void Ave::setM_id(int id){
		m_id = id;
	}
	void Ave::setM_classe(string classe){
		m_classe = classe;
	}
	void Ave::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void Ave::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void Ave::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void Ave::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void Ave::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void Ave::setM_tamanho_do_bico_cm(double tamanho_do_bico_cm){
		m_tamanho_do_bico_cm = tamanho_do_bico_cm;
	}
	void Ave::setM_envergadura_das_asas(double envergadura_das_asas){
		m_envergadura_das_asas = envergadura_das_asas;
	}
	void Ave::setM_veterinario(bool veterinario){
		m_veterinario = veterinario;
	}
	void Ave::setM_funcionario(bool tratador){
		m_tratador = tratador;
	}

/** @brief Getters */
	int Ave::getM_codigo(){
		return m_codigo;
	}
	int Ave::getM_id(){
		return m_id;
	}
	string Ave::getM_classe(){
		return m_classe;
	}
	string Ave::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char Ave::getM_sexo(){
		return m_sexo;
	}
	double Ave::getM_tamanho(){
		return m_tamanho;
	}
	string Ave::getM_dieta(){
		return m_dieta;
	}
	string Ave::getM_nome_batismo(){
		return m_nome_batismo;
	}
	double Ave::getM_tamanho_do_bico_cm(){
		return m_tamanho_do_bico_cm;
	}
	double Ave::getM_envergadura_das_asas(){
		return m_envergadura_das_asas;
	}
	bool Ave::getM_veterinario(){
		return m_veterinario;
	}

	bool Ave::getM_tratador(){
		return m_tratador;
	}
