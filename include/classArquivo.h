/**
* @file classArquivo.h
* @brief Classe para controlar a manipulação com os arquivos
* @brief Definindo biblioteca classArquivo.h
*/
#ifndef classArquivos_h
#define classArquivos_h

/** @brief Inclui a biblioteca iostream  */
#include <iostream>

/** @brief Inclui a biblioteca fstream para manipulação dos arquvios  */
#include <fstream>

/** @brief Inclui a biblioteca string para manipulação de caracteres  */
#include <string> 

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

/** @brief Inclui a biblioteca funcionario.h  */
#include "funcionario.h"

/** @brief Inclui a biblioteca tratador.h  */
#include "tratador.h"

/** @brief Inclui a biblioteca veterinario.h  */
#include "veterinario.h"

/** @brief Definindo a classe Arquivo_Geral */
class Arquivo_Geral {
private:


	/** @brief Define a variável chamada arquivoFuncionario_ do tipo ofstream para leitura do arquivo funcionarios.txt*/
	ofstream arquivoFuncionario_;

	/** @brief Define a variável chamada arquivoAnimal_ do tipo ofstream para leitura do arquivo animais.txt*/
	ofstream arquivoAnimal_;

	/** @brief Define a variável chamada arquivoFuncionario do tipo ofstream para sobrescrita do arquivo funcionarios.txt */
	ifstream arquivoFuncionario;

	/** @brief Define a variável chamada arquivoAnimal do tipo ofstream para sobrescrita do arquivo animais.txt */
	ifstream arquivoAnimal;

	/** @brief Define a variável chamada linha do tipo string para armazenar as linhas dos arquivos */
	std::string linha;	

public:


	/** @brief Define método para ler o arquivo animais.txt*/ 
	void leituraArquivo_Animal();

	/** @brief Define método para ler o arquivo funcionarios.txt*/ 
	void leituraArquivo_Funcionario();

	/** @brief Define método para sobrescrever arquivo animais.txt*/ 
	void fecharArquivo_Animal();

	/** @brief Define método para sobrescrever arquivo funcionarios.txt*/ 
	void fecharArquivo_Funcionario();

};


#endif