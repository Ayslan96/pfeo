/**
* @file veterinario.h
* @brief Classe Filha Veterinario
* @brief Definindo biblioteca Veterinario
*/
#ifndef Veterinario_H
#define Veterinario_H

#include <iostream>
#include <string>

/** @brief Inclui a biblioteca funcionario.h */
#include "funcionario.h"

/** @brief Definindo a classe Veterinario que herda da classe Funcionario */
class Veterinario : public Funcionario {
private:
	
	/** @brief Define a variável chamada m_crmv do tipo string */
	std::string m_crmv;
	
	/** @brief Implementação do método virtual sobrecarga de impressão */
	std::ostream& print(std::ostream& os) const {
	return os << m_id << ";" << m_nome << ";" << m_cpf << ";" << m_idade << ";" << m_tipo_sanguineo 
			  << ";" << m_fator_rh << ";" << m_especialidade << ";" << m_crmv
			  << std::endl;
	}
public:

	/** @brief Definindo função de impressão sem retorno */ 
	void imprime();

	/** @brief Definindo construtor padronizado da classe Veterinario */
	Veterinario(int,string,string,int,string,char,string,string);
	
	/** @brief Definindo destrutor da classe Veterinario */ 
	~Veterinario();

	
};

#endif