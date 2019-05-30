#ifndef MamiferoExotico_H
#define MamiferoExotico_H

#include <string>

class MamiferoExotico : public Mamifero , public AnimalExotico{

public:

	MamiferoExotico(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario,  
		Tratador tratador, std::string nome_batismo, std::string cor_pelo);

	MamiferoExotico();

	~MamiferoExotico();

};