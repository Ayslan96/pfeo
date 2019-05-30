#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
//#include "veterinario.h"
//#include "tratador.h"

class Animal {
	 
protected:
	int m_id;
	std::string m_class;
	std::string m_nome_cientifico;
	char m_sexo;
	double m_tamanho;
	std::string m_dieta;
	//Veterinario m_veterinario;
	//Tratador m_tratador;
	std::string m_nome_batismo;

public:

	Animal(void);
	Animal(int m_id, std::string m_class, std::string m_nome_cientifico, char m_sexo, double m_tamanho, std::string m_dieta, std::string m_nome_batismo);
    ~Animal();
  	virtual std::ostream& print(std::ostream&) const = 0;
    friend std::ostream& operator << (std::ostream& os, const Animal& b) {
		return b.print(os);
	}

 };

#endif