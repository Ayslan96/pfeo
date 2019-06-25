/**
* @file animalexotico.h
* @brief Classe AnimalExotico filha da classe base Animal
*/

#ifndef AnimalExotico_H
#define AnimalExotico_H

<<<<<<< HEAD
/** @brief Inclui a biblioteca animal.h */
#include "animal.h"
=======
#include <string>
#include <iostream>
#include "animalsilvestre.h"

class AnimalExotico: public AnimalSilvestre {
>>>>>>> ayslan

using std::string;

/** @brief Define a classe AnimalExotico que herda da classe Animal */
class AnimalExotico: public Animal{

protected:

	/** @brief Define o pais origem do animal */
	std::string m_pais_origem;

public:

	/** @brief Definindo construtor padrão da classe AnimalExotico para void, pois não utilizaremos*/
	AnimalExotico(void);
<<<<<<< HEAD

	/** @brief Definindo construtor padronizado da classe AnimalExotico*/ 
	AnimalExotico(int, string, string, char , int, string , string, string);

	/** @brief Definindo destrutor da classe AnimalExotico*/
=======
	AnimalExotico(std::string, std::string);
>>>>>>> ayslan
	virtual ~AnimalExotico();

<<<<<<< HEAD
	/** @brief Definindo método de impressão sem retorno*/
	virtual void imprime() = 0;

};

=======
 	friend std::ostream& operator << (std::ostream& os, const AnimalExotico& b) {
		return b.print(os);
	}

};
>>>>>>> ayslan
#endif