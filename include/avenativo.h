/**
* @file avenativo.h
* @brief Classe Ave filha da classe base Ave
*/

#ifndef AveNativo_H
#define AveNativo_H

/** @brief Inclui a biblioteca Ave.h */
#include "ave.h"

/** @brief Inclui a biblioteca AnimalNativo.h */
#include "animalnativo.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe AveNativo que herda da classe Ave */
class AveNativo : public Ave , public AnimalNativo{

private:
	
	/** @brief Implementação do método virtual sobrecarga de impressão*/ 
	//std::ostream& print(std::ostream& os) const {
		//return os << m_codigo << ";" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			//  <<";" << m_tamanho << ";" << m_dieta <<";"<< m_nome_batismo << ";" << m_veterinario << ";" << m_tratador
			  //<<";" << m_tamanho_do_bico_cm << ";" << m_envergadura_das_asas << ";" << m_autorizacao_ibama 
			  //<< ";"<< m_uf_origem <<";" << m_cidade_origem << ";" << endl;


	

public:

	/** @brief Definindo construtor padrão da classe AveNativo para void, pois não utilizaremos*/ 
	AveNativo(void);


	/** @brief Definindo construtor padronizado da classe AveNativo*/
	AveNativo(int,int, string, string, char, int, string, string, bool, bool, double, double, string, string, string);
	
	/** @brief Definindo destrutor da classe AveNativo*/ 
	~AveNativo();


	/** @brief Definindo função de impressão sem retorno*/ 
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
	void setM_autorizacao_ibama(string);
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
	double getM_tamanho_do_bico_cm();
	double getM_envergadura_das_asas();
	string getM_autorizacao_ibama();
	string getM_uf_origem();
	string getM_cidade_origem();
};
#endif
