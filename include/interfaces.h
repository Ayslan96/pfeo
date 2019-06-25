/**
* @file interfaces.h
* @brief Classe Interfaces
* @brief Definindo biblioteca interface.h
*/
#ifndef interfaces_h
#define interfaces_h

/** @brief Inclui a biblioteca mamifero.h  */
#include "mamifero.h"

/** @brief Inclui a biblioteca reptil.h  */
#include "reptil.h"

/** @brief Inclui a biblioteca anfibio.h  */
#include "anfibio.h"

/** @brief Inclui a biblioteca ave.h  */
#include "ave.h"

/** @brief Inclui a biblioteca animal.h  */
#include "animal.h"

/** @brief Inclui a biblioteca date.h  */
#include "date.h"

/** @brief Inclui a biblioteca classArquivo.h  */
#include "classArquivo.h"

/** @brief Inclui a biblioteca funcionario.h  */
#include "funcionario.h"

/** @brief Inclui a biblioteca veterinario.h  */
#include "veterinario.h"

/** @brief Inclui a biblioteca tratador.h  */
#include "tratador.h"

/** @brief Define a classe Interfaces */
class Interfaces{

private:
	
	/** @brief Atributos de animais.h e funcionarios.h  */
	int id;
	std::string classe;
	std::string nome_cientifico;
	char sexo;
	double tamanho;
	std::string dieta;
	std::string nome_batismo;
	std::string m_nome;
	std::string m_cpf;
	int m_idade;
	std::string m_tipo_sanguineo;
	char m_fator_rh;
	std::string m_especialidade;
	int nivel_de_seguranca;
	std::string pais_de_origem;
	std::string uf_origem;
	std::string autorizacao;
	std::string autorizacao_ibama;

public:
	//Interfaces(void);
	//~Interfaces();
	/** @brief Define o método exibeNome()  */
	void exibeNome();

	/** @brief Define o método responsável por cadastrar um mamífero exótico  */
	void mamiferoE();

	/** @brief Define o método responsável por cadastrar um mamífero nativo */
	void mamiferoN();

	/** @brief Define o método responsável por cadastrar uma ave exótica */
	void aveE();

	/** @brief Define o método responsável por cadastrar uma ave nativa */
	void aveN();

	/** @brief Define o método responsável por cadastrar um réptil exótico */
	void reptilE();

	/** @brief Define o método responsável por cadastrar um réptil  nativo */
	void reptilN();

	/** @brief Define o método responsável por cadastrar um anfíbio exótico */
	void anfibioE();

	/** @brief Define o método responsável por cadastrar um anfíbio nativo */
	void anfibioN();

	/** @brief Define o método responsável por cadastrar um veterinário  */
	void veterinario();

	/** @brief Define o método responsável por cadastrar um tratador  */
	void tratador();

};

#endif