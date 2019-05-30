#ifndef AnfibioNativo_H
#define AnfibioNativo_H

#include <string>

class AnfibioNativo : public Anfibio , public AnimalNativo {

public:

	AnfibioNativo(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario, 
	 Tratador tratador, std::string nome_batismo, int total_de_mudas, date ultima_muda);

	AnfibioNativo();

	~AnfibioNativo();

};