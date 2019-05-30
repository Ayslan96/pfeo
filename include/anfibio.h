#ifndef Anfibio_H
#define Anfibio_H

#include "date"
#include <string>

class Anfibio : public Animal {
private:
	
	int m_total_de_mudas;
	date m_ultima_muda;
	
public:

	Anfibio(delete);
	Anfibio(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario, 
	 Tratador tratador, std::string nome_batismo, int total_de_mudas, date ultima_muda);

	~Anfibio();

};