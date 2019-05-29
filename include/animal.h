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
	//Veterinario m_veterinario;
	//Tratador m_tratador;
	std::string m_nome_batismo;

public:

	Animal(delete);

	virtual friend std::ostream& operator<< (std::ostream &saida, Animal const p);
	Animal(int m_id, std::string m_class, std::string m_nome_cientifico, char m_sexo, double m_tamanho, std::string m_dieta, std::string m_nome_batismo);
    ~Animal();

    void 

};


std::ostream& operator<< (std::ostream &saida, Animal const p) {
saida << "Id: " << p->m_id << " Classe: " << p->m_class<< " Nome cientifico: " << p->m_nome_cientifico << " Sexo: " << p->m_nome_cientifico << " Tamanho: " << p->m_tamanho << " Dieta: " << p->m_dieta << " Nome de batismo: " << p->m_nome_batismo;
return o;
}