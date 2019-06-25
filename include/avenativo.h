/**
* @file avenativo.h
* @brief Classe Ave filha da classe base Ave
*/

#ifndef AveNativo_H
#define AveNativo_H

<<<<<<< HEAD
/** @brief Inclui a biblioteca Ave.h */
#include "Ave.h"

/** @brief Inclui a biblioteca AnimalNativo.h */
#include "animalNativo.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe AveNativo que herda da classe Ave */
class AveNativo : public Ave , public AnimalNativo{

private:
	
	/** @brief Implementação do método virtual sobrecarga de impressão*/ 
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho << ";" << m_dieta <<";"<< m_nome_batismo
			  <<";" << m_tamanho_do_bico_cm << ";" << m_envergadura_das_asas << ";" << m_uf_origem <<
			  <<";" << m_autorizacao << ";" << endl;
	}

	

public:

	/** @brief Definindo construtor padrão da classe AveNativo para void, pois não utilizaremos*/ 
	AveNativo(void);
=======
#include <string>
#include "ave.h"
#include "animalnativo.h"


class AveNativo : public Ave, public AnimalNativo  {

private:
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" <<m_tamanho_do_bico_cm << ";" <<m_envergadura_das_asas <<";" <<m_autorizacao_ibama 
			  <<";" <<m_uf_origem <<";" <<m_autorizacao << endl;
	}

public:

	AveNativo(void);

	AveNativo(int, string, string, char, int, string, string, double, double,std::string,std::string,std::string);
>>>>>>> ayslan

	/** @brief Definindo construtor padronizado da classe AveNativo*/
	AveNativo(int, string, string, char, int, string, string, double, double, string, string);
	
	/** @brief Definindo destrutor da classe AveNativo*/ 
	~AveNativo();

<<<<<<< HEAD
	/** @brief Definindo função de impressão sem retorno*/ 
	void imprime();
};
=======
	void imprime();

};
#endif
>>>>>>> ayslan
