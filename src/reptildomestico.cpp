/**
* @file reptil.cpp
* @brief Métodos da Classe ReptilDomestico filha da classe base Reptil
*/

/** @brief Inclui a biblioteca reptildomestico.h */
#include "../include/reptildomestico.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
ReptilDomestico::ReptilDomestico(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo,
m_venenoso, m_tipo_de_veneno.
* @return Não possui retorno
*/
ReptilDomestico::ReptilDomestico(int m_codigo, int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		bool m_veterinario, bool m_tratador, bool m_venenoso, std::string m_tipo_de_veneno, std::string m_uf_origem, std::string m_cidade_origem):
		Reptil(m_codigo, m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_veterinario, m_tratador,m_venenoso, m_tipo_de_veneno),
		AnimalDomestico(m_uf_origem, m_cidade_origem) {}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/	
ReptilDomestico::~ReptilDomestico(){}

/**
* @brief Método de impressão de um ReptilDomestico.
* @return Não possui retorno
*/
void ReptilDomestico::imprime(){

	cout << m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_venenoso <<m_tipo_de_veneno 
	<<m_uf_origem <<m_cidade_origem << endl;

}

/** @brief Setters */
	void ReptilDomestico::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void ReptilDomestico::setM_id(int id){
		m_id = id;
	}
	void ReptilDomestico::setM_classe(string classe){
		m_classe = classe;
	}
	void ReptilDomestico::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void ReptilDomestico::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void ReptilDomestico::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void ReptilDomestico::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void ReptilDomestico::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void ReptilDomestico::setM_uf_origem(string uf_origem){
		m_uf_origem = uf_origem;
	}
	void ReptilDomestico::setM_cidade_origem(string cidade_origem){
		m_cidade_origem = cidade_origem;
	}

/** @brief Getters */
	int ReptilDomestico::getM_codigo(){
		return m_codigo;
	}
	int ReptilDomestico::getM_id(){
		return m_id;
	}
	string ReptilDomestico::getM_classe(){
		return m_classe;
	}
	string ReptilDomestico::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char ReptilDomestico::getM_sexo(){
		return m_sexo;
	}
	double ReptilDomestico::getM_tamanho(){
		return m_tamanho;
	}
	string ReptilDomestico::getM_dieta(){
		return m_dieta;
	}
	string ReptilDomestico::getM_nome_batismo(){
		return m_nome_batismo;
	}
	string ReptilDomestico::getM_uf_origem(){
		return m_uf_origem;
	}
	string ReptilDomestico::getM_cidade_origem(){
		return m_cidade_origem;
	}

