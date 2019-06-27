/**
* @file anfibioDomestico.cpp
* @brief Métodos da Classe AnfibioDomestico filha da classe base Anfibio
*/

/** @brief Inclui a biblioteca AnfibioDomestico.h */
#include "../include/anfibiodomestico.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
AnfibioDomestico::AnfibioDomestico(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo,
m_total_de_mudas, m_ultima_muda, m_uf_origem, m_cidade_origem.
*/

AnfibioDomestico::AnfibioDomestico(int m_codigo, int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, string m_nome_batismo,
bool m_veterinario, bool m_tratador, int m_total_de_mudas, Date m_ultima_muda, string m_uf_origem, string m_cidade_origem):
	Anfibio(m_codigo,m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_veterinario, m_tratador, m_total_de_mudas, m_ultima_muda),AnimalDomestico(m_uf_origem, m_cidade_origem){}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
AnfibioDomestico::~AnfibioDomestico(){}

/**
* @brief Método de impressão de um anfíbio.
* @return Não possui retorno
*/

void AnfibioDomestico::imprimir() {
	std::cout << m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo <<m_total_de_mudas <<m_ultima_muda
	<<m_uf_origem <<m_cidade_origem << endl;

}


	/** @brief Setters */
	void AnfibioDomestico::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void AnfibioDomestico::setM_id(int id){
		m_id = id;
	}
	void AnfibioDomestico::setM_classe(string classe){
		m_classe = classe;
	}
	void AnfibioDomestico::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void AnfibioDomestico::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void AnfibioDomestico::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void AnfibioDomestico::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void AnfibioDomestico::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void AnfibioDomestico::setM_total_de_mudas(int total_de_mudas){
		m_total_de_mudas = total_de_mudas;
	}
	void AnfibioDomestico::setM_ultima_muda(Date ultima_muda){
		m_ultima_muda = ultima_muda;
	}
	void AnfibioDomestico::setM_uf_origem(string uf_origem){
		m_uf_origem = uf_origem;
	}
	void AnfibioDomestico::setM_cidade_origem(string cidade_origem){
		m_cidade_origem = cidade_origem;
	}
	void AnfibioDomestico::setM_veterinario(bool veterinario){
		m_veterinario = veterinario;
	}
	void AnfibioDomestico::setM_funcionario(bool tratador){
		m_tratador = tratador;
	}



	/** @brief Getters */
	int AnfibioDomestico::getM_codigo(){
		return m_codigo;
	}
	int AnfibioDomestico::getM_id(){
		return m_id;
	}
	string AnfibioDomestico::getM_classe(){
		return m_classe;
	}
	string AnfibioDomestico::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char AnfibioDomestico::getM_sexo(){
		return m_sexo;
	}
	double AnfibioDomestico::getM_tamanho(){
		return m_tamanho;
	}
	string AnfibioDomestico::getM_dieta(){
		return m_dieta;
	}
	string AnfibioDomestico::getM_nome_batismo(){
		return m_nome_batismo;
	}

	int AnfibioDomestico::getM_total_de_mudas(){
		return m_total_de_mudas;
	}
	Date AnfibioDomestico::getM_ultima_muda(){
		return m_ultima_muda;
	}
	
	string AnfibioDomestico::getM_uf_origem(){
		return m_uf_origem;
	}
	string AnfibioDomestico::getM_cidade_origem(){
		return m_cidade_origem;
	}

	bool AnfibioDomestico::getM_veterinario(){
		return m_veterinario;
	}

	bool AnfibioDomestico::getM_tratador(){
		return m_tratador;
	}

