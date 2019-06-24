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
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_cor_pelo << endl;
	}

		
public:
	/** @brief Definindo construtor padrão da classe Mamifero para void, pois não utilizaremos */
	Mamifero(void);

	/** @brief Definindo construtor padronizado da classe Mamifero */ 
	Mamifero(int, string, string, char, int, string, string, string);

	/** @brief Definindo destrutor da classe Mamifero */ 
	~Mamifero();

	/** @brief Definindo método de impressão sem retorno */ 
	void imprime();

};
 
#endif