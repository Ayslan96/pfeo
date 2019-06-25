/**
* @file aveexotico.cpp
* @brief Métodos da Classe AveExotico filha da classe base Ave
*/

/** @brief Inclui a biblioteca aveexotico.h */
#include "../include/aveexotico.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
AveExotico::AveExotico(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo,
m_tamanho_do_bico_cm, m_envergadura_das_asas, m_pais_origem
*/
AveExotico::AveExotico(int m_codigo,int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, 
	string m_nome_batismo, double m_tamanho_do_bico_cm, double m_envergadura_das_asas, string m_pais_origem ):
	Ave(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_tamanho_do_bico_cm, m_envergadura_das_asas):
	AnimalExotico(m_autorizacao_ibama, m_pais_origem) {}
	
/**
* @brief Método destrutor.
* @return Não possui retorno
*/
AveExotico::~AveExotico(){}

/**
* @brief Método de impressão de um anfíbio.
* @return Não possui retorno
*/

/** @brief Setters */
	void AveExotico::setM_id(int codigo){
		m_codigo = codigo;
	}
	void AveExotico::setM_id(int id){
		m_id = id;
	}
	void AveExotico::setM_classe(string classe){
		m_classe = classe;
	}
	void AveExotico::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void AveExotico::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void AveExotico::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void AveExotico::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void AveExotico::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void AveExotico::setM_tamanho_do_bico_cm(double tamanho_do_bico_cm){
		m_tamanho_do_bico_cm = tamanho_do_bico_cm;
	}
	void AveExotico::setM_envergadura_das_asas(double envergadura_das_asas){
		m_envergadura_das_asas = envergadura_das_asas;
	}
	void AveExotico::setM_autorizacao_ibama(string autorizacao_ibama){
		m_autorizacao_ibama = autorizacao_ibama;
	}
	void Ave::setM_pais_origem(string pais_origem){
		m_pais_origem = pais_origem;
	}


/** @brief Getters */
	int AveExotico::getM_codigo(){
		return m_codigo;
	}
	int AveExotico::getM_id(){
		return m_id;
	}
	string AveExotico::getM_classe(){
		return m_classe;
	}
	string AveExotico::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char AveExotico::getM_sexo(){
		return m_sexo;
	}
	double AveExotico::getM_tamanho(){
		return m_tamanho;
	}
	string AveExotico::getM_dieta(){
		return m_dieta;
	}
	string AveExotico::getM_nome_batismo(){
		return m_nome_batismo;
	}
	double AveExotico::getM_tamanho_do_bico_cm(){
		return m_tamanho_do_bico_cm;
	}
	double AveExotico::getM_envergadura_das_asas(){
		return m_envergadura_das_asas;
	}
	string AveExotico::getM_autorizacao_ibama(){
		return m_autorizacao_ibama;
	}
	string AveExotico::getM_pais_origem(){
		return m_pais_origem;
	}
