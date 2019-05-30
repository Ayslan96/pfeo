#ifndef ReptilExotico_H
#define ReptilExotico_H

#include <string>

class ReptilExotico : public Reptil, public AnimalExotico{

public:

	ReptilExotico(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario,  
		Tratador tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno);
	
	ReptilExotico();

	~ReptilExotico();

};