/**
* @file animalsilvestre.h
* @brief Classe AnimalSilvestre filha da classe base Animal
*/


#ifndef AnimalSilvestre_H
#define AnimalSilvestre_H

/** @brief Inclui a biblioteca animal.h */
#include "animalNativo.h"
#include "animalExotico.h"

<<<<<<< HEAD
using std::string;

/** @brief Define a classe AnimalSilvestre que herda da classe Animal */
template <class T>
class AnimalSilvestre : public T {
=======
class AnimalSilvestre {
>>>>>>> ayslan
private:

	virtual std::ostream& print(std::ostream&) const = 0;

protected:
	std::string m_autorizacao_ibama;
	
public:
	AnimalSilvestre(void);
	AnimalSilvestre(std::string m_autorizacao_ibama);
	~AnimalSilvestre();

	virtual void imprime()=0;
    friend std::ostream& operator << (std::ostream& os, const AnimalSilvestre& b) {
		return b.print(os);
	}
};
<<<<<<< HEAD

#endif
=======
#endif
>>>>>>> ayslan
