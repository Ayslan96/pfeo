/**
* @file animaleativo.h
* @brief Classe AnimalNativo filha da classe base Animal
*/

#ifndef AnimalNativo_H
#define AnimalNativo_H

/** @brief Inclui a biblioteca animal.h */
#include "animal.h"

using std::string;

/** @brief Define a classe AnimalNativo que herda da classe Animal */
class AnimalNativo: public Animal{

protected:

	/** @brief Define a origem do animal */
	std::string m_uf_origem;
	
	/** @brief Define se o animal tem autorização */
	std::string m_autorizacao;
	
public:

	/** @brief Definindo construtor padrão da classe AnimalNativo para void, pois não utilizaremos*/
	AnimalNativo(void);

	/** @brief Definindo construtor padronizado da classe AnimalNativo*/ 
	AnimalNativo(int, string, string, char , int, string , string, string, string);

	/** @brief Definindo destrutor da classe AnimalNativo*/
	virtual ~AnimalNativo();

	/** @brief Definindo método de impressão sem retorno*/
	virtual void imprime() = 0;

};

#endif