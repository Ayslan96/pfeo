#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
//#include "ave.h"
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
    virtual void print(std::ostream str) const = 0 ;
    friend std::ostream& operator << (std::ostream &saida, const Animal& p);
};

class Ave : public Animal{
private:
	double m_tamanho_do_bico_cm;
	double m_envergadura_das_asas;
		
public:
	Ave(void);
	Ave(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, std::string nome_batismo, double m_tamanho_do_bico_cm, double m_envergadura_das_asas);
	~Ave();
	void print(std::ostream str);
	friend std::ostream& operator << (std::ostream &saida, const Ave& p){
    	saida << "Id: " << p.m_id << " Classe: " << p.m_class<< " Nome cientifico: " << p.m_nome_cientifico << " Sexo: " << p.m_nome_cientifico << " Tamanho: " << p.m_tamanho << " Dieta: " << p.m_dieta << " Nome de batismo: " << p.m_nome_batismo << "Tamanho de bico: " << p.m_tamanho_do_bico_cm << " Envergadura das asas: " << p.m_envergadura_das_asas;
		return saida;
	}

};

#endif