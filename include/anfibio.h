/**
* @file anfibio.h
* @brief Classe Anfibio filha da classe base Animal
*/
#ifndef Anfibio_H
#define Anfibio_H

/** @brief Inclui a biblioteca animal.h */
#include "animal.h"

/** @brief Inclui a biblioteca date.h */
#include "date.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe Anfibio que herda da classe Animal */
class Anfibio : public Animal {

protected:

	/** @brief Define a quantidade máxima de mudas */
	int m_total_de_mudas;
	/** @brief Define uma variável do tipo DATE para receber uma data */ 
	Date m_ultima_muda;
	/** @brief Implementação do método virtual sobrecarga de impressão*/ 

	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_total_de_mudas << ";" << m_ultima_muda << ";" << "|" << endl;
	}

	
public:
	/** @brief Definindo construtor padrão da classe Anfibio para void, pois não utilizaremos*/ 
	Anfibio(void);

	/** @brief Definindo construtor padronizado da classe Anfibio*/ 
	Anfibio(int , string, string, char, int, string, string, int, Date);
 
	
	/** @brief Definindo destrutor da classe Anfibio*/
	~Anfibio();
	/** @brief Definindo método de impressão sem retorno */ 
	void imprime();

	/** @brief Definindo setters de todos os atributos*/ 
	void setM_id(int);
	void setM_classe(string);
	void setM_nome_cientifico(string);
	void setM_sexo(char);
	void setM_tamanho(double);
	void setM_dieta(string);
	void setM_nome_batismo(string);
	void setM_total_de_mudas(int);
	//void setM_ultima_muda(Date);

	/** @brief Definindo getters de todos os atributos*/ 
	int getM_id();
	string getM_classe();
	string getM_nome_cientifico();
	char getM_sexo();
	double getM_tamanho();
	string getM_dieta();
	string getM_nome_batismo();
	int getM_total_de_mudas();
	//Date getM_ultima_muda();
   
};

#endif
