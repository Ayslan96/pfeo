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

public:
	//Interfaces(void);
	//~Interfaces();
	/** @brief Define o método exibeNome()  */
	void exibeNome();

	/** @brief Define o método responsável por cadastrar um mamífero  */
	void mamifero();

	/** @brief Define o método responsável por cadastrar uma ave  */
	void ave();

	/** @brief Define o método responsável por cadastrar um réptil  */
	void reptil();

	/** @brief Define o método responsável por cadastrar um anfíbio  */
	void anfibio();

	/** @brief Define o método responsável por cadastrar um veterinário  */
	void veterinario();
	//void tratador();

};

#endif