/**
* @file animalexotico.h
* @brief Classe AnimalExotico filha da classe base Animal
*/

#ifndef AnimalExotico_H
#define AnimalExotico_H

/** @brief Inclui a biblioteca animal.h */
#include "animal.h"

using std::string;

/** @brief Define a classe AnimalExotico que herda da classe Animal */
class AnimalExotico: public Animal{

protected:

	/** @brief Define o pais origem do animal */
	std::string m_pais_origem;

public:

	/** @brief Definindo construtor padrão da classe AnimalExotico para void, pois não utilizaremos*/
	AnimalExotico(void);

	/** @brief Definindo construtor padronizado da classe AnimalExotico*/ 
	AnimalExotico(int, string, string, char , int, string , string, string);

	/** @brief Definindo destrutor da classe AnimalExotico*/
	virtual ~AnimalExotico();

	/** @brief Definindo método de impressão sem retorno*/
	virtual void imprime() = 0;

};

#endif