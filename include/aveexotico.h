/**
* @file aveexotico.h
* @brief Classe AveExotico filha da classe base Ave e AnimalExotico
*/

#ifndef AveExotico_H
#define AveExotico_H


/** @brief Inclui a biblioteca Ave.h */
#include "ave.h"

/** @brief Inclui a biblioteca AnimalExotico.h */
#include "animalexotico.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe AveExotico que herda da classe Ave e AnimalExotico*/
class AveExotico : public Ave , public AnimalExotico{

private:

	/** @brief Implementação do método virtual sobrecarga de impressão*/ 
	std::ostream& print(std::ostream& os) const {
		return os << m_codigo << ";" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho << ";" << m_dieta <<";"<< m_nome_batismo << ";" << m_veterinario << ";" << m_tratador
			  <<";" << m_tamanho_do_bico_cm << ";" << m_envergadura_das_asas << ";" << m_autorizacao_ibama << ";" << m_pais_origem 
			  <<";"<< endl;

	}	

public:

	/** @brief Definindo construtor padrão da classe AveExotico para void, pois não utilizaremos*/
	AveExotico(void);

	/** @brief Definindo construtor padronizado da classe AveExotico*/ 
	AveExotico(int, int, string, string, char, int, string, string, bool, bool, double, double, string, string);

	/** @brief Definindo destrutor da classe AveExotico*/
	~AveExotico();



	/** @brief Setters */
	void setM_codigo(int);
	void setM_id(int);
	void setM_classe(string);
	void setM_nome_cientifico(string);
	void setM_sexo(char);
	void setM_tamanho(double);
	void setM_dieta(string);
	void setM_nome_batismo(string);
	void setM_tamanho_do_bico_cm(double);
	void setM_envergadura_das_asas(double);
	void setM_autorizacao_ibama(string);
	void setM_pais_origem(string);

	/** @brief Getters */
	int getM_codigo();
	int getM_id();
	string getM_classe();
	string getM_nome_cientifico();
	char getM_sexo();
	double getM_tamanho();
	string getM_dieta();
	string getM_nome_batismo();
	double getM_tamanho_do_bico_cm();
	double getM_envergadura_das_asas();
	string getM_autorizacao_ibama();
	string getM_pais_origem();

};

#endif


