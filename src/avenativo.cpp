/**
* @file avenativo.cpp
* @brief Métodos da Classe AveNativo filha da classe base Ave
*/

/** @brief Inclui a biblioteca avenativo.h */
#include "../include/avenativo.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
AveNativo::AveNativo(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo,
m_tamanho_do_bico_cm, m_envergadura_das_asas, m_pais_origem
*/
AveNativo::AveNativo(int m_codigo, int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, 
	string m_nome_batismo, bool m_veterinario, bool m_tratador, double m_tamanho_do_bico_cm, double m_envergadura_das_asas,string m_autorizacao_ibama, string m_uf_origem, string m_cidade_origem ):
	Ave(m_codigo,m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_veterinario, m_tratador, m_tamanho_do_bico_cm, m_envergadura_das_asas),
	AnimalNativo(m_autorizacao_ibama, m_uf_origem, m_cidade_origem) {}
	
	
/**
* @brief Método destrutor.
* @return Não possui retorno
*/
AveNativo::~AveNativo(){}

/**
* @brief Método de impressão de um anfíbio.
* @return Não possui retorno
*/

void AveNativo::imprime(){

	cout << m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo <<m_tamanho_do_bico_cm  <<m_envergadura_das_asas
	<<m_autorizacao_ibama <<m_uf_origem <<m_cidade_origem << endl;

}

/** @brief Setters */
	void AveNativo::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void AveNativo::setM_id(int id){
		m_id = id;
	}
	void AveNativo::setM_classe(string classe){
		m_classe = classe;
	}
	void AveNativo::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void AveNativo::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void AveNativo::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void AveNativo::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void AveNativo::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void AveNativo::setM_tamanho_do_bico_cm(double tamanho_do_bico_cm){
		m_tamanho_do_bico_cm = tamanho_do_bico_cm;
	}
	void AveNativo::setM_envergadura_das_asas(double envergadura_das_asas){
		m_envergadura_das_asas = envergadura_das_asas;
	}
	void AveNativo::setM_autorizacao_ibama(string autorizacao_ibama){
		m_autorizacao_ibama = autorizacao_ibama;
	}
	void AveNativo::setM_uf_origem(string uf_origem){
		m_uf_origem = uf_origem;
	}
	void AveNativo::setM_cidade_origem(string cidade_origem){
		m_cidade_origem = cidade_origem;
	}

/** @brief Getters */
	int AveNativo::getM_codigo(){
		return m_codigo;
	}
	int AveNativo::getM_id(){
		return m_id;
	}
	string AveNativo::getM_classe(){
		return m_classe;
	}
	string AveNativo::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char AveNativo::getM_sexo(){
		return m_sexo;
	}
	double AveNativo::getM_tamanho(){
		return m_tamanho;
	}
	string AveNativo::getM_dieta(){
		return m_dieta;
	}
	string AveNativo::getM_nome_batismo(){
		return m_nome_batismo;
	}
	double AveNativo::getM_tamanho_do_bico_cm(){
		return m_tamanho_do_bico_cm;
	}
	double AveNativo::getM_envergadura_das_asas(){
		return m_envergadura_das_asas;
	}
	string AveNativo::getM_autorizacao_ibama(){
		return m_autorizacao_ibama;
	}
	string AveNativo::getM_uf_origem(){
		return m_uf_origem;
	}
	string AveNativo::getM_cidade_origem(){
		return m_cidade_origem;
	}

