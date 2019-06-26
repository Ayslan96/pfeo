
/**
* @file anfibioexotico.cpp
* @brief Métodos da Classe AnfibioExotico filha da classe base Anfibio
*/

/** @brief Inclui a biblioteca anfibioExotico.h */
#include "../include/anfibioexotico.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
AnfibioExotico::AnfibioExotico(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo,
m_total_de_mudas, m_ultima_muda
*/
AnfibioExotico::AnfibioExotico(int m_codigo, int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, string m_nome_batismo,
		int m_total_de_mudas, Date m_ultima_muda, string m_autorizacao_ibama, string m_pais_origem):
	Anfibio(m_codigo, m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_total_de_mudas, m_ultima_muda),
	AnimalExotico(m_autorizacao_ibama, m_pais_origem) {}
	
/**
* @brief Método destrutor.
* @return Não possui retorno
*/
AnfibioExotico::~AnfibioExotico(){}

/**
* @brief Método de impressão de um anfíbio.
* @return Não possui retorno
*/

	/** @brief Setters */
	void AnfibioExotico::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void AnfibioExotico::setM_id(int id){
		m_id = id;
	}
	void AnfibioExotico::setM_classe(string classe){
		m_classe = classe;
	}
	void AnfibioExotico::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void AnfibioExotico::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void AnfibioExotico::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void AnfibioExotico::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void AnfibioExotico::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void AnfibioExotico::setM_total_de_mudas(int total_de_mudas){
		m_total_de_mudas = total_de_mudas;
	}
	//void setM_ultima_muda(Date ultima_muda){
		//m_ultima_muda = ultima_muda;
	//}
	void AnfibioExotico::setM_autorizacao_ibama(string autorizacao_ibama){
		m_autorizacao_ibama = autorizacao_ibama;
	}
	void AnfibioExotico::setM_pais_origem(string pais_origem){
		m_pais_origem = pais_origem;
	}


	/** @brief Getters */
	int AnfibioExotico::getM_codigo(){
		return m_codigo;
	}
	int AnfibioExotico::getM_id(){
		return m_id;
	}
	string AnfibioExotico::getM_classe(){
		return m_classe;
	}
	string AnfibioExotico::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char AnfibioExotico::getM_sexo(){
		return m_sexo;
	}
	double AnfibioExotico::getM_tamanho(){
		return m_tamanho;
	}
	string AnfibioExotico::getM_dieta(){
		return m_dieta;
	}
	string AnfibioExotico::getM_nome_batismo(){
		return m_nome_batismo;
	}

	int AnfibioExotico::getM_total_de_mudas(){
		return m_total_de_mudas;
	}

	//Date AnfibioExotico::getM_ultima_muda(){
		//return m_ultima_muda;
	//}
	string AnfibioExotico::getM_autorizacao_ibama(){
		return m_autorizacao_ibama;
	}
	string AnfibioExotico::getM_pais_origem(){
		return m_pais_origem;
	}
