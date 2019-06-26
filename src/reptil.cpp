/**
* @file reptil.cpp
* @brief Métodos da Classe Reptil filha da classe base Animal
*/

/** @brief Inclui a biblioteca reptil.h */
#include "../include/reptil.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Reptil::Reptil(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo,
m_venenoso, m_tipo_de_veneno.
*/
Reptil::Reptil(int m_codigo,int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, string m_nome_batismo,
		bool m_venenoso, string m_tipo_de_veneno):
	Animal(m_codigo, m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
	m_venenoso(m_venenoso), m_tipo_de_veneno(m_tipo_de_veneno) {}

	
/**
* @brief Método destrutor.
* @return Não possui retorno
*/
Reptil::~Reptil(){}

/**
* @brief Método de impressão de um anfíbio.
* @return Não possui retorno
*/
void Reptil::imprime(){

	cout <<m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_venenoso << m_tipo_de_veneno << endl;

}

	/** @brief Setters */
void Reptil::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void Reptil::setM_id(int id){
		m_id = id;
	}
	void Reptil::setM_classe(string classe){
		m_classe = classe;
	}
	void Reptil::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void Reptil::setM_sexo(char sexo){
		m_sexo= sexo;
	}
	void Reptil::setM_tamanho(double tamanho){
		m_tamanho= tamanho;
	}
	void Reptil::setM_dieta(string dieta){
		m_dieta= dieta;
	}
	void Reptil::setM_nome_batismo(string nome_batismo){
		m_nome_batismo= nome_batismo;
	}
	void Reptil::setM_venenoso(bool venenoso){
		m_venenoso = venenoso;
	}
	void Reptil::setM_tipo_de_veneno(string tipo_de_veneno){
		m_tipo_de_veneno = tipo_de_veneno;
	}

	/** @brief Getters */
	int Reptil::getM_codigo(){
		return m_codigo;
	}
	int Reptil::getM_id(){
		return m_id;
	}
	string Reptil::getM_classe(){
		return m_classe;
	}
	string Reptil::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char Reptil::getM_sexo(){
		return m_sexo;
	}
	double Reptil::getM_tamanho(){
		return m_tamanho;
	}
	string Reptil::getM_dieta(){
		return m_dieta;
	}
	string Reptil::getM_nome_batismo(){
		return m_nome_batismo;
	}

	bool Reptil::getM_venenoso(){
		return m_venenoso;
	}

	string Reptil::getM_tipo_de_veneno(){
		return m_tipo_de_veneno;
	}
