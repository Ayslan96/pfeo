/**
* @file animalsilvestre.h
* @brief Classe AnimalSilvestre filha da classe base Animal
*/

#ifndef AnimalSilvestre_H
#define AnimalSilvestre_H

using std::string;

/** @brief Define a classe AnimalExotico*/
class AnimalSilvestre {

protected:

	/** @brief codigo de autorização do ibama */
	string m_autorizacao_ibama;
	
public:

	/** @brief Definindo construtor padrão da classe AnimalExotico para void, pois não utilizaremos*/
	AnimalSilvestre(void);

	AnimalSilvestre(string);

	/** @brief Definindo destrutor da classe AnimalExotico*/
	~AnimalSilvestre();

};


#endif


