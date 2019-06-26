/*
* @file funcionario.h
* @brief Classe Funcionário
* @brief Definindo biblioteca Funcionário
* @details É a classe abstrata que servirá como base para os vários tipos de funcionários do sistema PetFera
*/
#ifndef Funcionario_H
#define Funcionario_H

/** @brief Inclui a biblioteca string para manipulação de caracteres */
#include <string>

/** @brief Para utilizar string apenas colocando 'string' */
using std::string;

/** @brief Definindo a classe abstrata Funcionário */
class Funcionario {

private:

/** @brief Definindo um método virtual puro de sobrecarga de impressão */
virtual std::ostream& print(std::ostream&) const = 0;

protected:
	
	/** @brief Define uma variável chamada m_codigo do tipo inteiro para os ids dos funcionário */
	int m_codigo;
	/** @brief Define uma variável chamada m_id do tipo inteiro para os ids dos funcionário */
	int m_id;

	/** @brief Define uma variável chamada m_nome do tipo string para armazenar o nome dos funcionários */
	std::string m_nome;

	/** @brief Define uma variável chamada m_cpf do tipo string para armazenar o cpf dos funcionários */
	std::string m_cpf;

	/** @brief Define uma variável chamada m_idade do tipo inteiro para armazenar a idade dos funcionários */
	int m_idade;

	/** @brief Define uma variável chamada m_tipo_sanguineo do tipo string para armazenar o tipo sanguineo dos funcionários */
	string m_tipo_sanguineo;

	/** @brief Define uma variável chamada m_faotr_rh do tipo char para armazenar o fator rh dos funcionários */
	char m_fator_rh;

	/** @brief Define uma variável chamada m_especialidade do tipo string para armazenar a especialidade dos funcionários */
	std::string m_especialidade;

public:

	/** @brief Define o construtor padrão de Funcionario com o parâmetro void, pois não utilizaremos o construtor padrão */
	Funcionario(void);

	/** @brief Define o construtor padronizado de Animal */
	Funcionario(int m_codigo, int m_id, string m_nome, string m_cpf, 
				int m_idade, string m_tipo_sanguineo, 
				char m_fator_rh, string m_especialidade);

	/** @brief Define o destrutor de Animal como virtual */
	virtual ~Funcionario();

	/** @brief Definindo um método virtual puro */
	virtual void imprime()=0;


	friend std::ostream& operator << (std::ostream& os, const Funcionario& b) {
	return b.print(os);
	}


	/** @brief Setters */



	/*void setM_id(int);
	void setM_nome(string);
	void setM_cpf(string);
	void setM_idade(int);
	void setM_tipo_sanguineo(string);
	void setM_fator_rh(char);
	void setM_especialidade(string);*/

	/** @brief Getters */
	/*
	int getM_id();
	string getM_nome();
	string getM_cpf();
	int getM_idade();
	string getM_tipo_sanguineo();
	char getM_fator_rh();
	string getM_especialidade();*/
};

#endif
