#ifndef Reptil_H
#define Reptil_H

#include <string>

class Reptil : public Animal {
private:
	bool m_venenoso;
	std::string m_tipo_veneno;
	
public:

	Reptil(delete);
	Mamifero(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario,  Tratador tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno;
	 );


	~Reptil();

};