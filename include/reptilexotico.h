/**
* @file reptilexotico.h
* @brief Classe ReptilExotico filha da classe base Reptil e AnimalExotico
*/

#ifndef ReptilExotico_H
#define ReptilExotico_H


/** @brief Inclui a biblioteca Reptil.h */
#include "Reptil.h"

/** @brief Inclui a biblioteca AnimalExotico.h */
#include "animalExotico.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe ReptilExotico que herda da classe Reptil e AnimalExotico*/
class ReptilExotico : public Reptil , public AnimalExotico{

private:

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho << ";" << m_dieta << ";" << m_nome_batismo
			  << ";" << m_venenoso << ";" << m_tipo_de_veneno << ";" << m_pais_origem << ";" << "|" << endl;
	}
	

public:

	/** @brief Definindo construtor padrão da classe ReptilExotico para void, pois não utilizaremos*/
	ReptilExotico(void);

	/** @brief Definindo construtor padronizado da classe ReptilExotico*/ 
	ReptilExotico(int, string, string, char, int, string, string, bool, string, string);



	/** @brief Definindo destrutor da classe ReptilExotico*/
	~ReptilExotico();




};

#endif


