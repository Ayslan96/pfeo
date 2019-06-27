/**
* @file aveDomestico.cpp
* @brief Métodos da Classe AveDomestico filha da classe base Ave
*/

/** @brief Inclui a biblioteca aveDomestico.h */
#include "../include/avedomestico.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
AveDomestico::AveDomestico(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo,
m_tamanho_do_bico_cm, m_envergadura_das_asas, m_pais_origem
*/
AveDomestico::AveDomestico(int m_codigo, int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, 
	string m_nome_batismo, bool m_veterinario, bool m_tratador, double m_tamanho_do_bico_cm, double m_envergadura_das_asas, string m_uf_origem, string m_cidade_origem ):
	Ave(m_codigo,m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_veterinario, m_tratador, m_tamanho_do_bico_cm, m_envergadura_das_asas),
	AnimalDomestico(m_uf_origem, m_cidade_origem) {}
	
	
/**
* @brief Método destrutor.
* @return Não possui retorno
*/
AveDomestico::~AveDomestico(){}

/**
* @brief Método de impressão de um anfíbio.
* @return Não possui retorno
*/

/** @brief Setters */
	void AveDomestico::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void AveDomestico::setM_id(int id){
		m_id = id;
	}
	void AveDomestico::setM_classe(string classe){
		m_classe = classe;
	}
	void AveDomestico::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void AveDomestico::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void AveDomestico::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void AveDomestico::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void AveDomestico::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void AveDomestico::setM_tamanho_do_bico_cm(double tamanho_do_bico_cm){
		m_tamanho_do_bico_cm = tamanho_do_bico_cm;
	}
	void AveDomestico::setM_envergadura_das_asas(double envergadura_das_asas){
		m_envergadura_das_asas = envergadura_das_asas;
	}
	void AveDomestico::setM_uf_origem(string uf_origem){
		m_uf_origem = uf_origem;
	}
	void AveDomestico::setM_cidade_origem(string cidade_origem){
		m_cidade_origem = cidade_origem;
	}

/** @brief Getters */
	int AveDomestico::getM_codigo(){
		return m_codigo;
	}
	int AveDomestico::getM_id(){
		return m_id;
	}
	string AveDomestico::getM_classe(){
		return m_classe;
	}
	string AveDomestico::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char AveDomestico::getM_sexo(){
		return m_sexo;
	}
	double AveDomestico::getM_tamanho(){
		return m_tamanho;
	}
	string AveDomestico::getM_dieta(){
		return m_dieta;
	}
	string AveDomestico::getM_nome_batismo(){
		return m_nome_batismo;
	}
	double AveDomestico::getM_tamanho_do_bico_cm(){
		return m_tamanho_do_bico_cm;
	}
	double AveDomestico::getM_envergadura_das_asas(){
		return m_envergadura_das_asas;
	}
	string AveDomestico::getM_uf_origem(){
		return m_uf_origem;
	}
	string AveDomestico::getM_cidade_origem(){
		return m_cidade_origem;
	}


