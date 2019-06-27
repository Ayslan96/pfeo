/**
* @file reptilnativo.h
* @brief Classe ReptilNativo filha da classe base Reptil e AnimalNativo
*/

#ifndef ReptilNativo_H
#define ReptilNativo_H


/** @brief Inclui a biblioteca Reptil.h */
#include "reptil.h"

/** @brief Inclui a biblioteca AnimalNativo.h */
#include "animalnativo.h"

using std::string;
using std::cout;
using std::endl;


/** @brief Define a classe ReptilNativo que herda da classe Reptil e AnimalNativo*/
class ReptilNativo : public Reptil , public AnimalNativo{

private:

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho << ";" << m_dieta << ";" << m_nome_batismo << ";" << m_veterinario << ";" << m_tratador
			  << ";" << m_venenoso << ";" << m_tipo_de_veneno << ";" << m_autorizacao_ibama << ";" << m_uf_origem << ";" << m_cidade_origem
			  << ";" << "|" << endl;
	}
	

public:

	/** @brief Definindo construtor padrão da classe ReptilNativo para void, pois não utilizaremos*/
	ReptilNativo(void);

	/** @brief Definindo construtor padronizado da classe ReptilNativo*/ 
	ReptilNativo(int, int, string, string, char, int, string, string, bool, bool, bool, string, string, string, string);


	/** @brief Definindo destrutor da classe ReptilNativo*/
	~ReptilNativo();
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
	string getM_autorizacao_ibama();
	string getM_uf_origem();
	string getM_cidade_origem();

};

#endif



