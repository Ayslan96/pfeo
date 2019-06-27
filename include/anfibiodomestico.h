/**
* @file anfibioDomestico.h
* @brief Classe Anfibio filha da classe base Anfibio
*/
#ifndef AnfibioDomestico_H
#define AnfibioDomestico_H

/** @brief Inclui a biblioteca anfibio.h */
#include <iostream>
#include <string>
#include "anfibio.h"
#include "animaldomestico.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe AnfibioDomestico que herda da classe Anfibio */

class AnfibioDomestico : public Anfibio, public AnimalDomestico {

private:
	
	/** @brief Implementação do método virtual sobrecarga de impressão*/ 
	//std::ostream& print(std::ostream& os) const{
		//return os << m_codigo << ";" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			//  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			//  <<";" << m_total_de_mudas << ";" << m_ultima_muda  << ";" << m_uf_origem << ";" << m_cidade_origem 
			//  <<";" << endl;
		//}
public:


	/** @brief Definindo construtor padrão da classe AnfibioDomestico para void, pois não utilizaremos*/ 
	AnfibioDomestico(void);

	/** @brief Definindo construtor padronizado da classe AnfibioDomestico*/
	AnfibioDomestico(int,int,string,string,char,int,string,string,int,Date,string,string);
	
	/** @brief Definindo destrutor da classe AnfibioDomestico*/ 

	~AnfibioDomestico();


	void imprimir();
	
	void setM_codigo(int);
	void setM_id(int);
	void setM_classe(string);
	void setM_nome_cientifico(string);
	void setM_sexo(char);
	void setM_tamanho(double);
	void setM_dieta(string);
	void setM_nome_batismo(string);
	void setM_total_de_mudas(int);
	void setM_ultima_muda(Date);
	void setM_uf_origem(string);
	void setM_cidade_origem(string);


	/** @brief Getters */
	int getM_codigo();
	int getM_id();
	string getM_classe();
	string getM_nome_cientifico();
	char getM_sexo();
	double getM_tamanho();
	string getM_dieta();
	string getM_nome_batismo();
	int getM_total_de_mudas();
	Date getM_ultima_muda();
	string getM_uf_origem();
	string getM_cidade_origem();
};
#endif

