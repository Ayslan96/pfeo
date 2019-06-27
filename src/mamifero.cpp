/**
* @file mamifero.cpp
* @brief Métodos da Classe Mamifero
*/

/** @brief Inclui a biblioteca mamifero.h */
#include "../include/mamifero.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Mamifero::Mamifero(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo, m_tratador, m_veterinario, m_cor_pelo
* @return Não possui retorno
*/
Mamifero::Mamifero(int m_codigo,int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, string m_nome_batismo,
		bool m_veterinario, bool m_tratador, string m_cor_pelo):Animal(m_codigo, m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_veterinario, m_tratador),
		m_cor_pelo(m_cor_pelo) {}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
Mamifero::~Mamifero(){}

/** @brief Implementação do método de impressão de um mamífero*/
void Mamifero::imprime(){

	std::cout <<m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_cor_pelo << std::endl;

}

/** @brief Setters */
	void Mamifero::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void Mamifero::setM_id(int id){
		m_id = id;
	}
	void Mamifero::setM_classe(string classe){
		m_classe = classe;
	}
	void Mamifero::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void Mamifero::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void Mamifero::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void Mamifero::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void Mamifero::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void Mamifero::setM_cor_pelo(string cor_pelo){
		m_cor_pelo = cor_pelo;
	}


/** @brief Getters */
	int Mamifero::getM_codigo(){
		return m_codigo;
	}
	int Mamifero::getM_id(){
		return m_id;
	}
	string Mamifero::getM_classe(){
		return m_classe;
	}
	string Mamifero::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char Mamifero::getM_sexo(){
		return m_sexo;
	}
	double Mamifero::getM_tamanho(){
		return m_tamanho;
	}
	string Mamifero::getM_dieta(){
		return m_dieta;
	}
	string Mamifero::getM_nome_batismo(){
		return m_nome_batismo;
	}
	string Mamifero::getM_cor_pelo(){
		return m_cor_pelo;
	}

