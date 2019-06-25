/**
* @file animalexotico.h
* @brief Classe AnimalExotico filha da classe base Animal
*/

#ifndef AnimalExotico_H
#define AnimalExotico_H


#include <string>
#include <iostream>
#include "animalsilvestre.h"

using std::string;

/** @brief Define a classe AnimalExotico que herda da classe AnimalSilvestre */
class AnimalExotico: public AnimalSilvestre {


protected:

	/** @brief Define o pais origem do animal */
	string m_pais_origem;

public:

	/** @brief Definindo construtor padrão da classe AnimalExotico para void, pois não utilizaremos*/
	AnimalExotico(void);

	AnimalExotico(string, string);

	/** @brief Definindo destrutor da classe AnimalExotico*/
	~AnimalExotico();

};

#endif