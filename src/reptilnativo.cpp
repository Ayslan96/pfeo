/**
* @file reptilnativo.cpp
* @brief Métodos da Classe ReptilNativo filha da classe base Reptil
*/

/** @brief Inclui a biblioteca reptilnativo.h */
#include "../include/reptilnativo.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
ReptilNativo::ReptilNativo(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo,
m_venenoso, m_tipo_de_veneno.
*/
ReptilNativo::ReptilNativo(int m_codigo, int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		bool m_veterinario, bool m_tratador, bool m_venenoso, std::string m_tipo_de_veneno, std::string m_autorizacao_ibama, std::string m_uf_origem, std::string m_cidade_origem):
		Reptil(m_codigo, m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_venenoso, m_tipo_de_veneno),
		AnimalNativo(m_autorizacao_ibama, m_uf_origem, m_cidade_origem) {}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/	
ReptilNativo::~ReptilNativo(){}

/**
* @brief Método de impressão de um ReptilNativo.
* @return Não possui retorno
*/
void ReptilNativo::imprime(){

	cout << m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_venenoso <<m_tipo_de_veneno 
	<<m_autorizacao_ibama <<m_uf_origem <<m_cidade_origem << endl;

}

/** @brief Setters */
	void ReptilNativo::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void ReptilNativo::setM_id(int id){
		m_id = id;
	}
	void ReptilNativo::setM_classe(string classe){
		m_classe = classe;
	}
	void ReptilNativo::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void ReptilNativo::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void ReptilNativo::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void ReptilNativo::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void ReptilNativo::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void ReptilNativo::setM_autorizacao_ibama(string autorizacao_ibama){
		m_autorizacao_ibama = autorizacao_ibama;
	}
	void ReptilNativo::setM_uf_origem(string uf_origem){
		m_uf_origem = uf_origem;
	}
	void ReptilNativo::setM_cidade_origem(string cidade_origem){
		m_cidade_origem = cidade_origem;
	}

/** @brief Getters */
	int ReptilNativo::getM_codigo(){
		return m_codigo;
	}
	int ReptilNativo::getM_id(){
		return m_id;
	}
	string ReptilNativo::getM_classe(){
		return m_classe;
	}
	string ReptilNativo::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char ReptilNativo::getM_sexo(){
		return m_sexo;
	}
	double ReptilNativo::getM_tamanho(){
		return m_tamanho;
	}
	string ReptilNativo::getM_dieta(){
		return m_dieta;
	}
	string ReptilNativo::getM_nome_batismo(){
		return m_nome_batismo;
	}
	string ReptilNativo::getM_autorizacao_ibama(){
		return m_autorizacao_ibama;
	}
	string ReptilNativo::getM_uf_origem(){
		return m_uf_origem;
	}
	string ReptilNativo::getM_cidade_origem(){
		return m_cidade_origem;
	}
