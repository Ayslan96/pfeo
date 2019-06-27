/**
* @file anfibioexotico.h
* @brief Classe AnfibioExotico filha da classe base Anfibio e AnimalExotico
*/

#ifndef AnfibioExotico_H
#define AnfibioExotico_H

/** @brief Inclui a biblioteca anfibio.h */
#include "anfibio.h"

/** @brief Inclui a biblioteca AnimalExotico.h */
#include "animalexotico.h"

using std::string;
using std::cout;
using std::endl;

/** @brief Define a classe AnfibioExotico que herda da classe Anfibio e AnimalExotico*/
class AnfibioExotico : public Anfibio , public AnimalExotico{

private:

	/** @brief Implementação do método virtual sobrecarga de impressão*/ 
	std::ostream& print(std::ostream& os) const {
		return os << m_codigo << ";" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo << ";" << m_veterinario << ";" << m_tratador
			  <<";" << m_total_de_mudas << ";" << m_ultima_muda << ";" << m_autorizacao_ibama << ";" << m_pais_origem << ";" << endl;

	}
	

public:

	/** @brief Definindo construtor padrão da classe AnfibioExotico para void, pois não utilizaremos*/
	AnfibioExotico(void);

	/** @brief Definindo construtor padronizado da classe AnfibioExotico*/ 
	AnfibioExotico(int, int, string, string, char , int, string , string, bool, bool int, Date, string, string);

	/** @brief Definindo destrutor da classe AnfibioExotico*/
	~AnfibioExotico();


	/** @brief Definindo setters de todos os atributos*/ 
	void setM_codigo(int);
	void setM_id(int);
	void setM_classe(string);
	void setM_nome_cientifico(string);
	void setM_sexo(char);
	void setM_tamanho(double);
	void setM_dieta(string);
	void setM_nome_batismo(string);
	void setM_total_de_mudas(int);
	//void setM_ultima_muda(Date);
	void setM_autorizacao_ibama(string);
	void setM_pais_origem(string);
		void setM_veterinario(bool);
	void setM_nome_tratador(bool)

	/** @brief Definindo getters de todos os atributos*/ 
	int getM_codigo();
	int getM_id();
	string getM_classe();
	string getM_nome_cientifico();
	char getM_sexo();
	double getM_tamanho();
	string getM_dieta();
	string getM_nome_batismo();
	int getM_total_de_mudas();
	//Date getM_ultima_muda();
	string getM_autorizacao_ibama();
	string getM_pais_origem();
	bool getM_veterinario();
	bool getM_tratador();

};
#endif

