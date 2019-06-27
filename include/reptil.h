/**
* @file reptil.h
* @brief Classe Filha Reptil
* @brief Definindo biblioteca Reptil
*/
#ifndef Reptil_H
#define Reptil_H

/** @brief Inclui a biblioteca animal.h */
#include "animal.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Definindo a classe Ave que herda da classe Animal */
class Reptil : public Animal{
protected:

	/** @brief Define a variável chamada m_venenoso do tipo bool */
	bool m_venenoso;

	/** @brief Define a variável chamada m_tipo_de_veneno do tipo string */
	std::string m_tipo_de_veneno;

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {

		return os << m_codigo << ";" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho << ";" << m_dieta << ";" << m_nome_batismo << ";" << m_veterinario << ";" << m_tratador
			  << ";" << m_venenoso << ";" << m_tipo_de_veneno << endl;

	}

		
public:
	/** @brief Definindo construtor padrão da classe Ave para void, pois não utilizaremos */ 
	Reptil(void);


		/** @brief Definindo construtor padronizado da classe Reptil */ 
	Reptil(int, int, string, string, char, int, string, string, bool, bool, bool, string);


	/** @brief Definindo destrutor da classe Ave */ 
	~Reptil();

	/** @brief Definindo método de impressão sem retorno */ 
	void imprime();


 
	/** @brief Setters */
	void setM_codigo(int);
	void setM_id(int);
	void setM_classe(string);
	void setM_nome_cientifico(string);
	void setM_sexo(char);
	void setM_tamanho(double);
	void setM_dieta(string);
	void setM_nome_batismo(string);
	void setM_venenoso(bool);
	void setM_tipo_de_veneno(string);

	/** @brief Getters */
	int getM_codigo();
	int getM_id();
	string getM_classe();
	string getM_nome_cientifico();
	char getM_sexo();
	double getM_tamanho();
	string getM_dieta();
	string getM_nome_batismo();
	bool getM_venenoso();
	string getM_tipo_de_veneno();

};

#endif