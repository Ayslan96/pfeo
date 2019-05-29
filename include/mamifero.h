#ifndef Mamifero_H
#define Mamifero_H

#include <string>

class Mamifero : public Animal {
private:
	
	std::string m_cor_pelo;
	
public:

	Mamifero(delete);
	Mamifero(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario,  Tratador tratador, std::string nome_batismo, std::string cor_pelo);


	~Mamifero();

};