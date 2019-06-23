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

/** @brief Inclui a biblioteca mamifero.h  */
#include "classArquivo.h"
#include "funcionario.h"
#include "veterinario.h"
#include "tratador.h"

class Interfaces{

private:
	int id;
	std::string classe;
	std::string nome_cientifico;
	char sexo;
	double tamanho;
	std::string dieta;
	std::string nome_batismo;
	Arquivo_Geral geral; // objeto da calsse Arquivo_Geral apra chamar os métodos.
	std::string m_nome;
	std::string m_cpf;
	int m_idade;
	std::string m_tipo_sanguineo;
	char m_fator_rh;
	std::string m_especialidade;

public:
	//Interfaces(void);
	//~Interfaces(); 
	void exibeNome();
	void mamifero();
	void ave();
	void reptil();
	void anfibio();
	void veterinario();
	//void tratador();

};

#endif