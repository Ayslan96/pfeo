/**
* @file reptildomestico.h
* @brief Classe ReptilDomestico filha da classe base Reptil e AnimalDomestico
*/

#ifndef ReptilDomestico_H
#define ReptilDomestico_H


/** @brief Inclui a biblioteca Reptil.h */
#include "reptil.h"
#include "animaldomestico.h"
using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe ReptilDomestico que herda da classe Reptil e AnimalDomestico*/
class ReptilDomestico : public Reptil, public AnimalDomestico {

private:

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho << ";" << m_dieta << ";" << m_nome_batismo << ";" << m_veterinario << ";" << m_tratador
			  << ";" << m_venenoso << ";" << m_tipo_de_veneno << ";" << m_uf_origem << ";" << m_cidade_origem
			  << ";" << "|" << endl;
	}
	

public:

	/** @brief Definindo construtor padrão da classe ReptilDomestico para void, pois não utilizaremos*/
	ReptilDomestico(void);

	/** @brief Definindo construtor padronizado da classe ReptilDomestico*/ 
	ReptilDomestico(int, int, string, string, char, int, string, string, bool, bool, bool, string, string, string);


	/** @brief Definindo destrutor da classe ReptilDomestico*/
	~ReptilDomestico();
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
	string getM_uf_origem();
	string getM_cidade_origem();

};

#endif



