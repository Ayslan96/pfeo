/**
* @file avedomestico.h
* @brief Classe Ave filha da classe base Ave
*/

#ifndef AveDomestico_H
#define AveDomestico_H

/** @brief Inclui a biblioteca Ave.h */
#include "ave.h"


using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe AveDomestico que herda da classe Ave */
class AveDomestico : public Ave {

private:
	
	/** @brief Implementação do método virtual sobrecarga de impressão*/ 
	//std::ostream& print(std::ostream& os) const {
		//return os << m_codigo << ";" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			//  <<";" << m_tamanho << ";" << m_dieta <<";"<< m_nome_batismo
			  //<<";" << m_tamanho_do_bico_cm << ";" << m_envergadura_das_asas << ";" << m_autorizacao_ibama 
			  //<< ";"<< m_uf_origem <<";" << m_cidade_origem << ";" << endl;


	

public:

	/** @brief Definindo construtor padrão da classe AveDomestico para void, pois não utilizaremos*/ 
	AveDomestico(void);


	/** @brief Definindo construtor padronizado da classe AveDomestico*/
	AveDomestico(int,int, string, string, char, int, string, string, double, double, string, string, string);
	
	/** @brief Definindo destrutor da classe AveDomestico*/ 
	~AveDomestico();


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
