/**
* @file mamiferonativo.h
* @brief Classe MamiferoNativo filha da classe base Mamifero e AnimalNativo
*/

#ifndef MamiferoNativo_H
#define MamiferoNativo_H

<<<<<<< HEAD
/** @brief Inclui a biblioteca Mamifero.h */
#include "Mamifero.h"

/** @brief Inclui a biblioteca AnimalNativo.h */
#include "animalNativo.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe MamiferoNativo que herda da classe Mamifero e AnimalNativo*/
class MamiferoNativo : public Mamifero , public AnimalNativo{

private:

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_cor_pelo << ";" << m_uf_origem << ";" << m_autorizacao << ";" << endl;
	}
	

public:

	/** @brief Definindo construtor padrão da classe MamiferoNativo para void, pois não utilizaremos*/
	MamiferoNativo(void);
=======
#include <string>
#include "mamifero.h"
#include "animalnativo.h"


class MamiferoNativo : public Mamifero, public AnimalNativo  {

private:
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_cor_pelo <<";" <<m_autorizacao_ibama 
			  <<";" <<m_uf_origem <<";" <<m_autorizacao << endl;
	}

public:

	MamiferoNativo(void);

	MamiferoNativo(int, string, string, char, int, string, string, string,std::string,std::string,std::string);
>>>>>>> ayslan

	/** @brief Definindo construtor padronizado da classe MamiferoNativo*/ 
	MamiferoNativo(int, string, string, char, int, string, string, string, string, string);

	/** @brief Definindo destrutor da classe MamiferoNativo*/
	~MamiferoNativo();

<<<<<<< HEAD


};

#endif


=======
	void imprime();

};
#endif

>>>>>>> ayslan
