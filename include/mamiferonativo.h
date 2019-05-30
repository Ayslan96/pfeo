#ifndef MamiferoNativo_H
#define MamiferoNativo_H

#include <string>

class MamiferoNativo : public Mamifero , public AnimalNativo {

public:

	MamiferoNativo(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario,  
		Tratador tratador, std::string nome_batismo, std::string cor_pelo);

	MamiferoNativo();
	
	~MamiferoNativo();

};