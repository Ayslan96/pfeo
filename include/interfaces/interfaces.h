#ifndef interfaces_h
#define interfaces_h

#include "/home/andrehabib/Documentos/pfeo/include/animal/anfibio/anfibio.h"
#include "/home/andrehabib/Documentos/pfeo/include/animal/ave/ave.h"
#include "/home/andrehabib/Documentos/pfeo/include/animal/animal.h"

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