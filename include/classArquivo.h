#ifndef classArquivos_h
#define classArquivos_h
#include <iostream>
#include <fstream>

class Arquivo_Geral {

	int numero;
	std::string classe;
	std::string nome;
	std::string nome_Cien;
	char cpf[11];
	int idade_funcionario;
	std::string tipo_sangue;
	char fator_rh[1];
	std::string especialidade;
	std::string codigo_CRMV;
	int nivel_seguranca; 
	char sexo;
	float tamanho_Metros;
	std::string dieta;
	int veterinario;
	int tratador;
	std::string nome_Batismo;
	ifstream arquivo;



public:
	void leituraArquivo_Animal(ifstream arquivo_);
	void leituraArquivo_Funcionario(ifstream arquivo2_);

};



#endif