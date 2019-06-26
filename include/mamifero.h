/**
* @file mamifero.h
* @brief Classe Filha mamifero
* @brief Definindo biblioteca Mamifero
*/
#ifndef Mamifero_H
#define Mamifero_H

/** @brief Inclui a biblioteca animal.h */
#include "animal.h"

using std::string;
using std::cout;
using std::endl;

/** @brief Definindo a classe Ave que herda da classe Animal */
class Mamifero : public Animal{
private:
	
	/** @brief Define a variável chamada m_cor_pelo do tipo string */
	std::string m_cor_pelo;

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_codigo << ";" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_cor_pelo << "|" << endl;
	}

		
public:
	/** @brief Definindo construtor padrão da classe Mamifero para void, pois não utilizaremos */
	Mamifero(void);

	/** @brief Definindo construtor padronizado da classe Mamifero */ 
	Mamifero(int, int, string, string, char, int, string, string, string);

	/** @brief Definindo destrutor da classe Mamifero */ 
	~Mamifero();

	/** @brief Definindo método de impressão sem retorno */ 
	void imprime();
	
	
/** @brief Setters */
	void setM_codigo(int);
	void setM_id(int);
	void setM_classe(string);
	void setM_nome_cientifico(string);
	void setM_sexo(char);
	void setM_tamanho(double);
	void setM_dieta(string);
	void setM_nome_batismo(string);
	void setM_cor_pelo(string);
	
/** @brief Getters */
	int getM_codigo();
	int getM_id();
	string getM_classe();
	string getM_nome_cientifico();
	char getM_sexo();
	double getM_tamanho();
	string getM_dieta();
	string getM_nome_batismo();
	string getM_cor_pelo();


};
 
#endif
