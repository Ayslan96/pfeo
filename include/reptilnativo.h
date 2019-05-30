#ifndef ReptilNativo_H
#define ReptilNativo_H

#include <string>

class ReptilNativo : public Reptil, public AnimalNativo{

public:

	ReptilNativo(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario,  
		Tratador tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno);

	ReptilNativo();

	~ReptilNativo();

};