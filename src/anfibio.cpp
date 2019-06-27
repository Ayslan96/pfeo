/**
* @file anfibio.cpp
* @brief Métodos da Classe Anfibio filha da classe base Animal
*/

/** @brief Inclui a biblioteca anfibio.h */
#include "../include/anfibio.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Anfibio::Anfibio(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo,
m_total_de_mudas, m_ultima_mudaNumero.
*/
Anfibio::Anfibio(int m_codigo, int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, string m_nome_batismo, int m_total_de_mudas, Date m_ultima_muda):
	Animal(m_codigo,m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
	m_total_de_mudas(m_total_de_mudas), m_ultima_muda(m_ultima_muda) {}

	
/**
* @brief Método destrutor.
* @return Não possui retorno
*/
Anfibio::~Anfibio(){}

/**
* @brief Método de impressão de um anfíbio.
* @return Não possui retorno
*/
void Anfibio::imprime(){

	cout << m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_total_de_mudas << m_ultima_muda << endl;

}

	/** @brief Setters */
	void Anfibio::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void Anfibio::setM_id(int id){
		m_id = id;
	}
	void Anfibio::setM_classe(string classe){
		m_classe = classe;
	}
	void Anfibio::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void Anfibio::setM_sexo(char sexo){
		m_sexo= sexo;
	}
	void Anfibio::setM_tamanho(double tamanho){
		m_tamanho= tamanho;
	}
	void Anfibio::setM_dieta(string dieta){
		m_dieta= dieta;
	}
	void Anfibio::setM_nome_batismo(string nome_batismo){
		m_nome_batismo= nome_batismo;
	}
	void Anfibio::setM_total_de_mudas(int total_de_mudas){
		m_total_de_mudas= total_de_mudas;
	}
	void setM_ultima_muda(Date m_ultima_muda){
		m_ultima_muda = m_ultima_muda;
	}

	/** @brief Getters */
	int Anfibio::getM_codigo(){
		return m_codigo;
	}
	int Anfibio::getM_id(){
		return m_id;
	}
	string Anfibio::getM_classe(){
		return m_classe;
	}
	string Anfibio::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char Anfibio::getM_sexo(){
		return m_sexo;
	}
	double Anfibio::getM_tamanho(){
		return m_tamanho;
	}
	string Anfibio::getM_dieta(){
		return m_dieta;
	}
	string Anfibio::getM_nome_batismo(){
		return m_nome_batismo;
	}

	int Anfibio::getM_total_de_mudas(){
		return m_total_de_mudas;
	}

	Date Anfibio::getM_ultima_muda(){
		return m_ultima_muda;
	}
