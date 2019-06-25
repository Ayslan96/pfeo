/**
* @file repitil.h
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

/** @brief Definindo a classe Reptil que herda da classe Animal */
class Reptil : public Animal{
private:
	
	/** @brief Define a variável chamada m_venenoso do tipo bool */
	bool m_venenoso;

	/** @brief Define a variável chamada m_tipo_de_veneno do tipo string */
	std::string m_tipo_de_veneno;

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_codigo << ";" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho << ";" << m_dieta << ";" << m_nome_batismo
			  << ";" << m_venenoso << ";" << m_tipo_de_veneno << endl;
	}

		
public:
	/** @brief Definindo construtor padrão da classe Reptil para void, pois não utilizaremos */ 
	Reptil(void);

		/** @brief Definindo construtor padronizado da classe Reptil */ 
	Reptil(int, int, string, string, char, int, string, string, bool, string);

	/** @brief Definindo destrutor da classe Reptil */ 
	~Reptil();

	/** @brief Definindo método de impressão sem retorno */ 
	void imprime();

};
 
#endif