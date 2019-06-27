/**
* @file mamiferodomestico.cpp
* @brief Métodos da Classe MamiferoDomestico
*/

/** @brief Inclui a biblioteca mamiferodomestico.h */
#include "../include/mamiferodomestico.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
MamiferoDomestico::MamiferoDomestico(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo, m_tratador, m_veterinario, m_cor_pelo
* @return Não possui retorno
*/
MamiferoDomestico::MamiferoDomestico(int m_codigo, int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo, 
	bool m_veterinario, bool m_tratador, std::string m_cor_pelo, std::string m_uf_origem, std::string m_cidade_origem):
		Mamifero
	(m_codigo, m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_veterinario, m_tratador, m_cor_pelo),
		AnimalDomestico(m_uf_origem, m_cidade_origem) {}
	
/**
* @brief Método destrutor.
* @return Não possui retorno
*/
MamiferoDomestico::~MamiferoDomestico(){}

/** @brief Implementação do método de impressão de um mamíferoDomestico*/
void MamiferoDomestico::imprime(){

	cout << m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_cor_pelo 
	<<m_uf_origem <<m_cidade_origem << endl;

}

/** @brief Setters */
	void MamiferoDomestico::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void MamiferoDomestico::setM_id(int id){
		m_id = id;
	}
	void MamiferoDomestico::setM_classe(string classe){
		m_classe = classe;
	}
	void MamiferoDomestico::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void MamiferoDomestico::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void MamiferoDomestico::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void MamiferoDomestico::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void MamiferoDomestico::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void MamiferoDomestico::setM_cor_pelo(string cor_pelo){
		m_cor_pelo = cor_pelo;
	}
	void MamiferoDomestico::setM_uf_origem(string uf_origem){
		m_uf_origem = uf_origem;
	}
	void MamiferoDomestico::setM_cidade_origem(string cidade_origem){
		m_cidade_origem = cidade_origem;
	}



/** @brief Getters */
	int MamiferoDomestico::getM_codigo(){
		return m_codigo;
	}
	int MamiferoDomestico::getM_id(){
		return m_id;
	}
	string MamiferoDomestico::getM_classe(){
		return m_classe;
	}
	string MamiferoDomestico::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char MamiferoDomestico::getM_sexo(){
		return m_sexo;
	}
	double MamiferoDomestico::getM_tamanho(){
		return m_tamanho;
	}
	string MamiferoDomestico::getM_dieta(){
		return m_dieta;
	}
	string MamiferoDomestico::getM_nome_batismo(){
		return m_nome_batismo;
	}
	string MamiferoDomestico::getM_cor_pelo(){
		return m_cor_pelo;
	}
	string MamiferoDomestico::getM_uf_origem(){
		return m_uf_origem;
	}
	string MamiferoDomestico::getM_cidade_origem(){
		return m_cidade_origem;
	}


