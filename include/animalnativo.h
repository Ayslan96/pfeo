/**
* @file animaleativo.h
* @brief Classe AnimalNativo filha da classe base Animal
*/

#ifndef AnimalNativo_H
#define AnimalNativo_H


#include <string>
#include <iostream>
#include "animalsilvestre.h"

using std::string;

/** @brief Define a classe AnimalNativo que herda da classe AnimalSilvestre */
class AnimalNativo : public AnimalSilvestre {

protected:

	/** @brief Define a origem do animal */
	string m_uf_origem;
	
	/** @brief Define se o animal tem autorização */
	string m_cidade_origem;
	
public:

	/** @brief Definindo construtor padrão da classe AnimalNativo para void, pois não utilizaremos*/
	AnimalNativo(void);

	AnimalNativo(string, string, string);

	/** @brief Definindo destrutor da classe AnimalNativo*/
	~AnimalNativo();

};

#endif