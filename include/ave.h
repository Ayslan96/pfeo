/**
* @file ave.h
* @brief Classe Filha Ave
* @brief Definindo biblioteca Ave
*/
#ifndef Ave_H
#define Ave_H

/** @brief Inclui a biblioteca animal.h */
#include "animal.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Definindo a classe Ave que herda da classe Animal */
class Ave : public Animal{
protected:

	/** @brief Define a variável chamada m_tamanho_do_bico_cm do tipo double */
	double m_tamanho_do_bico_cm;

	/** @brief Define a variável chamada m_envergadura_das_asas do tipo double */
	double m_envergadura_das_asas;

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_codigo << ";" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho << ";" << m_dieta <<";"<< m_nome_batismo << ";" << m_veterinario << ";" << m_tratador
			  <<";" << m_tamanho_do_bico_cm << ";" << m_envergadura_das_asas << ";" << "|" << endl;
	}

		
public:
	/** @brief Definindo construtor padrão da classe Ave para void, pois não utilizaremos */ 
	Ave(void);

	/** @brief Definindo construtor padronizado da classe Ave */ 
	Ave(int, int, string, string, char, int, string, string, bool, bool, double, double);

	/** @brief Definindo destrutor da classe Ave */ 
	~Ave();

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
	void setM_tamanho_do_bico_cm(double);
	void setM_envergadura_das_asas(double);
	void setM_veterinario(bool);
	void setM_funcionario(bool);

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
	bool getM_veterinario();
	bool getM_tratador();

};

#endif
