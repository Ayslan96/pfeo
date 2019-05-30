#ifndef AnfibioExotico_H
#define AnfibioExotico_H

#include <string>

class AnfibioExotico : public Anfibio , public AnimalExotico {

public:

	AnfibioExotico(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario, 
	 Tratador tratador, std::string nome_batismo, int total_de_mudas, date ultima_muda);

	AnfibioExotico();

	~AnfibioExotico();

};