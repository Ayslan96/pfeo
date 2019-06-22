#ifndef classArquivos_h
#define classArquivos_h
#include <iostream>
#include <fstream>
#include <string> 
#include "mamifero.h"
#include "reptil.h"
#include "anfibio.h"
#include "ave.h"
#include "animal.h"
#include "date.h"
#include "funcionario.h"
#include "tratador.h"
#include "veterinario.h"

class Arquivo_Geral {
private:

	ofstream arquivoFuncionario_;
	ofstream arquivoAnimal_;
	ifstream arquivoFuncionario;
	ifstream arquivoAnimal;
	std::string linha;
	




public:
	void leituraArquivo_Animal();
	void leituraArquivo_Funcionario();
	void fecharArquivo_Animal();
	void fecharArquivo_Funcionario();
	void cadastrar_Mamifero(Animal &m);
	void cadastrar_Tratador(Tratador &t);

};




#endif