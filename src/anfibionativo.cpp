/**
* @file anfibionativo.cpp
* @brief Métodos da Classe AnfibioNativo filha da classe base Anfibio
*/

/** @brief Inclui a biblioteca AnfibioNativo.h */
#include "../include/anfibionativo.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
AnfibioNativo::AnfibioNativo(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo,
m_total_de_mudas, m_ultima_muda, m_uf_origem, m_cidade_origem.
*/

AnfibioNativo::AnfibioNativo(int m_codigo, int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, string m_nome_batismo,
int m_total_de_mudas, Date m_ultima_muda, string m_autorizacao_ibama, string m_uf_origem, string m_cidade_origem):
	Anfibio(m_codigo,m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_total_de_mudas, m_ultima_muda),
	AnimalNativo(m_autorizacao_ibama, m_uf_origem, m_cidade_origem){}
	
/**
* @brief Método destrutor.
* @return Não possui retorno
*/
AnfibioNativo::~AnfibioNativo(){}

/**
* @brief Método de impressão de um anfíbio.
* @return Não possui retorno
*/
void AnfibioNativo::imprime(){

	cout << m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo <<m_total_de_mudas <<m_ultima_muda
	<<m_autorizacao_ibama <<m_uf_origem <<m_cidade_origem << endl;

}


	/** @brief Setters */
	void AnfibioNativo::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void AnfibioNativo::setM_id(int id){
		m_id = id;
	}
	void AnfibioNativo::setM_classe(string classe){
		m_classe = classe;
	}
	void AnfibioNativo::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void AnfibioNativo::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void AnfibioNativo::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void AnfibioNativo::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void AnfibioNativo::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void AnfibioNativo::setM_total_de_mudas(int total_de_mudas){
		m_total_de_mudas = total_de_mudas;
	}
	//void setM_ultima_muda(Date ultima_muda){
		//m_ultima_muda = ultima_muda;
	//}
	void AnfibioNativo::setM_autorizacao_ibama(string autorizacao_ibama){
		m_autorizacao_ibama = autorizacao_ibama;
	}
	void AnfibioNativo::setM_uf_origem(string uf_origem){
		m_uf_origem = uf_origem;
	}
	void AnfibioNativo::setM_cidade_origem(string cidade_origem){
		m_cidade_origem = cidade_origem;
	}


	/** @brief Getters */
	int AnfibioNativo::getM_codigo(){
		return m_codigo;
	}
	int AnfibioNativo::getM_id(){
		return m_id;
	}
	string AnfibioNativo::getM_classe(){
		return m_classe;
	}
	string AnfibioNativo::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char AnfibioNativo::getM_sexo(){
		return m_sexo;
	}
	double AnfibioNativo::getM_tamanho(){
		return m_tamanho;
	}
	string AnfibioNativo::getM_dieta(){
		return m_dieta;
	}
	string AnfibioNativo::getM_nome_batismo(){
		return m_nome_batismo;
	}

	int AnfibioNativo::getM_total_de_mudas(){
		return m_total_de_mudas;
	}

	//Date AnfibioNativo::getM_ultima_muda(){
		//return m_ultima_muda;
	//}

	string AnfibioNativo::getM_autorizacao_ibama(){
		return m_autorizacao_ibama;
	}
	string AnfibioNativo::getM_uf_origem(){
		return m_uf_origem;
	}
	string AnfibioNativo::getM_cidade_origem(){
		return m_cidade_origem;
	}

