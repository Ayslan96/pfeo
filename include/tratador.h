/**
* @file tratador.h
* @brief Classe Filha Tratador
* @brief Definindo biblioteca Tratador
*/
#ifndef Tratador_H
#define Tratador_H

#include <iostream>
#include <string>

/** @brief Inclui a biblioteca funcionario.h */
#include "funcionario.h"

/** @brief Definindo a classe Tratador que herda da classe Funcionario */
class Tratador : public Funcionario {
private:
	
	/** @brief Define a variável chamada m_nivel_de_segurança do tipo int */
	int m_nivel_de_seguranca;

	/** @brief Implementação do método virtual sobrecarga de impressão */
	std::ostream& print(std::ostream& os) const {
	return os << m_id << ";" << m_nome << ";" << m_cpf << ";" << m_idade << ";" << m_tipo_sanguineo 
			  << ";" << m_fator_rh << ";" << m_especialidade << ";" << m_nivel_de_seguranca
			  << "|" << std::endl;
}
	
public:

	/** @brief Definindo construtor padrãodo tipo void da classe Tratador, pois não utilizaremos */
	Tratador(void);
	
	/** @brief Definindo método de impressão sem retorno */ 
	void imprime();

	/** @brief Definindo construtor padronizado da classe Tratador */
	Tratador(int,string,string,int,string,char,string,int);

	/** @brief Definindo destrutor da classe Tratador */ 
	~Tratador();

	
};

#endif