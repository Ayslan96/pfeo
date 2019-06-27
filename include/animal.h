/**
* @file animal.h
* @brief Classe base Animal
* @brief Definindo biblioteca Animal
* @details É a classe abstrata que servirá como base para os vários tipos de animais do sistema PetFera
*/
#ifndef ANIMAL_H
#define ANIMAL_H

/** @brief Inclui a biblioteca string para uso de caracteres */
#include <string>

/** @brief Inclui a biblioteca iostream */
#include <iostream>

/** @brief Define o uso de namespace no programa */
using namespace std;

/** @brief Define uma classe chamada Animal */
class Animal {

private:

	/** @brief Definindo um método virtual puro de sobrecarga de impressão */
	virtual std::ostream& print(std::ostream&) const = 0;
	
protected:
	/** @brief Define uma variável chamada codigo do tipo inteiro para um animal */
	int m_codigo;
	/** @brief Define uma variável chamada m_id do tipo inteiro para um animal */
	int m_id;
	/** @brief Define uma variável chamdada m_classe do tipo string para armazenar a classe dos animais */
	std::string m_classe;
	/** @brief Define uma variável chamada m_nome_cientifico do tipo string que recebe o nome cientifico */
	std::string m_nome_cientifico;
	/** @brief Define uma variável chamada m_sexo do tipo char que recebe o sexo de um animal */
	char m_sexo;
	/** @brief Define uma variável chamada m_tamanho do tipo inteiro que recebe o tamanho de um animal */
	double m_tamanho;
	/** @brief Define uma variável chamada m_dieta tipo string que recebe a dieta de um animal */
	std::string m_dieta;
	/** @brief Define uma variável chamada m_nome_batismo do tipo string que recebe o nome de um animal */
	std::string m_nome_batismo;

	/** @brief Define uma variável chamada m_veterinariodo tipo bool que recebe 0 ou 1 */
	bool m_veterinario;

	/** @brief Define uma variável chamada m_tratador do tipo bool que recebe 0 ou 1 */
	bool m_tratador;

	public:

	/** @brief Define o construtor padrão de Animal com o parâmetro void, pois não utilizaremos o construtor padrão */
	Animal(void);

	/** @brief Define o construtor padronizado de Animal */
	Animal(int, int , string, string , char , int, string , string, bool, bool);


	/** @brief Definindo um método virtual puro */
	virtual ~Animal();

	/** @brief Definindo um método virtual puro */
	virtual void imprime()=0;

    friend std::ostream& operator << (std::ostream& os, const Animal& b) {
		return b.print(os);
	}

	/** @brief Setters */

	static int total;
	static int getTotal();


	/** @brief Setters */
	void setM_codigo(int);
	void setM_id(int);
	void setM_classe(string);
	void setM_nome_cientifico(string);
	void setM_sexo(char);
	void setM_tamanho(double);
	void setM_dieta(string);
	void setM_nome_batismo(string);
	void setM_veterinario(bool);
	void setM_funcionario(bool);

	/** @brief Getters */
	int getM_codigo();
	int getM_id();
	string getM_classe();
	string getM_nome_cientifico();
	char getM_sexo();
	double getM_tamanho();
	string getM_dieta();
	string getM_nome_batismo();
	bool getM_veterinario();
	bool getM_tratador();

};

#endif
