#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

#include "veterinario.h"
#include "tratador.h"

class Animal {
	
protected:
	int m_id;
	std::string m_class;
	std::string m_nome_cientifico;
	char m_sexo;
	double m_tamanho;
	std::string m_dieta;
	Veterinario m_veterinario;
	Tratador m_tratador;
	std::string m_nome_batismo;

public:

	Animal();

	Animal(int, std::string, std::string, char, double, std::string, Veterinario, std::string );

	~Animal();

};