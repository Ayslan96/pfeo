/**
* @file animaldomestico.h
* @brief Classe AnimalDomestico filha da classe base Animal
*/

#ifndef AnimalDomestico_H
#define AnimalDomestico_H


#include <string>
#include <iostream>

using std::string;

/** @brief Define a classe AnimalDomestico que herda da classe AnimalSilvestre */
class AnimalDomestico {

protected:

	/** @brief Define a origem do animal */
	string m_uf_origem;
	
	/** @brief Define se o animal tem autorização */
	string m_cidade_origem;
	
public:

	/** @brief Definindo construtor padrão da classe AnimalDomestico para void, pois não utilizaremos*/
	AnimalDomestico(void);

	AnimalDomestico(string, string);

	/** @brief Definindo destrutor da classe AnimalDomestico*/
	~AnimalDomestico();

};

#endif
