/**
* @file reptilnativo.h
* @brief Classe ReptilNativo filha da classe base Reptil e AnimalNativo
*/

#ifndef ReptilNativo_H
#define ReptilNativo_H

/** @brief Inclui a biblioteca Reptil.h */
#include "Reptil.h"

/** @brief Inclui a biblioteca AnimalNativo.h */
#include "animalNativo.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe ReptilNativo que herda da classe Reptil e AnimalNativo*/
class ReptilNativo : public Reptil , public AnimalNativo{

private:

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho << ";" << m_dieta << ";" << m_nome_batismo
			  << ";" << m_venenoso << ";" << m_tipo_de_veneno << ";" << m_uf_origem << ";" << m_autorizacao 
			  << ";" << endl;
	}
	

public:

	/** @brief Definindo construtor padrão da classe ReptilNativo para void, pois não utilizaremos*/
	ReptilNativo(void);

	/** @brief Definindo construtor padronizado da classe ReptilNativo*/ 
	ReptilNativo(int, string, string, char, int, string, string, bool, string, string, string);


	/** @brief Definindo destrutor da classe ReptilNativo*/
	~ReptilNativo();



};

#endif


