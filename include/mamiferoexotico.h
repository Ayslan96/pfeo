/**
* @file mamiferoexotico.h
* @brief Classe MamiferoExotico filha da classe base Mamifero e AnimalExotico
*/

#ifndef MamiferoExotico_H
#define MamiferoExotico_H


/** @brief Inclui a biblioteca Mamifero.h */
#include "Mamifero.h"

/** @brief Inclui a biblioteca AnimalExotico.h */
#include "animalExotico.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe MamiferoExotico que herda da classe Mamifero e AnimalExotico*/
class MamiferoExotico : public Mamifero , public AnimalExotico{

private:

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_cor_pelo << ";" << m_pais_origem << ";" << endl;
	}
	

public:

	/** @brief Definindo construtor padrão da classe MamiferoExotico para void, pois não utilizaremos*/
	MamiferoExotico(void);


	/** @brief Definindo construtor padronizado da classe MamiferoExotico*/ 
	MamiferoExotico(int, string, string, char, int, string, string, string, string);

	/** @brief Definindo destrutor da classe MamiferoExotico*/
	~MamiferoExotico();




};

#endif



