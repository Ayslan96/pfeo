#ifndef interfaces_h
#define interfaces_h

#include "mamifero.h"
#include "reptil.h"
#include "anfibio.h"
#include "ave.h"
#include "animal.h"
#include "date.h"
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