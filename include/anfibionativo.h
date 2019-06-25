/**
* @file anfibionativo.h
* @brief Classe Anfibio filha da classe base Anfibio
*/

#ifndef AnfibioNativo_H
#define AnfibioNativo_H

<<<<<<< HEAD
/** @brief Inclui a biblioteca anfibio.h */
#include "anfibio.h"

/** @brief Inclui a biblioteca AnimalNativo.h */
#include "animalNativo.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe AnfibioNativo que herda da classe Anfibio */
class AnfibioNativo : public Anfibio , public AnimalNativo{

private:
	
	/** @brief Implementação do método virtual sobrecarga de impressão*/ 
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_total_de_mudas << ";" << m_ultima_muda << ";" << m_uf_origem << ";" << m_autorizacao 
			  <<";" << endl;
	}

public:


	/** @brief Definindo construtor padrão da classe AnfibioNativo para void, pois não utilizaremos*/ 
	AnfibioNativo(void);

	/** @brief Definindo construtor padronizado da classe AnfibioNativo*/
	AnfibioNativo(int , string, string, char, int, string, string, int, Date);
	
	/** @brief Definindo destrutor da classe AnfibioNativo*/ 

	~AnfibioNativo();

	/** @brief Definindo função de impressão sem retorno*/ 
	void imprime();

};
#endif

