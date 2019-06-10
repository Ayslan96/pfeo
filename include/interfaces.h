#ifndef interfaces_h
#define interfaces_h

#include "mamifero.h"
#include "reptil.h"
#include "anfibio.h"
#include "ave.h"
#include "animal.h"

class Interfaces{

private:
	int id;
	std::string classe;
	std::string nome_cientifico;
	char sexo;
	double tamanho;
	std::string dieta;
	std::string nome_batismo;

public:
	//Interfaces();
	//~Interfaces(); 
	void exibeNome();
	void mamifero();
	void ave();
	void reptil();
	void anfibio();

};

#endif