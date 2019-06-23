/**
* @file ave.h
* @brief Classe Filha Ave
* @brief Definindo biblioteca Ave
*/
#ifndef Ave_H
#define Ave_H

/** @brief Inclui a biblioteca animal.h */
#include "animal.h"

/** @brief Definindo a classe Ave que herda da classe Animal */
class Ave : public Animal{
private:

	/** @brief Define a variável chamada m_tamanho_do_bico_cm do tipo double */
	double m_tamanho_do_bico_cm;

	/** @brief Define a variável chamada m_envergadura_das_asas do tipo double */
	double m_envergadura_das_asas;

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<<m_dieta <<";"<<m_nome_batismo
			  <<";" <<m_tamanho_do_bico_cm << ";" <<m_envergadura_das_asas << endl;
	}

		
public:
	/** @brief Definindo construtor padrão da classe Ave para void, pois não utilizaremos */ 
	Ave(void);

	/** @brief Definindo construtor padronizado da classe Ave */ 
	Ave(int, string, string, char, int, string, string, double, double);

	/** @brief Definindo destrutor da classe Ave */ 
	~Ave();

	/** @brief Definindo função de impressão sem retorno */ 
	void imprime();

	

};
 
#endif