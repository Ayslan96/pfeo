#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>


using std::string;

class Animal {
	
protected:
	int m_id;
	std::string m_class;
	std::string m_nome_cientifico;
	char m_sexo;
	double m_tamanho;
	std::string m_dieta;
	std::string m_nome_batismo;

public:

	//Animal();
	Animal(int m_id, std::string m_class, std::string m_nome_cientifico, char m_sexo, double m_tamanho, std::string m_dieta, std::string m_nome_batismo);
    ~Animal();
    friend std::ostream& operator << (std::ostream &saida, const Animal& p){
    saida << "Id: " << p.m_id << " Classe: " << p.m_class<< " Nome cientifico: " << p.m_nome_cientifico << " Sexo: " << p.m_nome_cientifico << " Tamanho: " << p.m_tamanho << " Dieta: " << p.m_dieta << " Nome de batismo: " << p.m_nome_batismo;
	return saida;
	}

	void setM_id(int);
	void setM_class(string);
	void setM_nome_cientifico(string);
	void setM_sexo(char);
	void setM_tamanho(double);
	void setM_dieta(string);
	void setM_nome_batismo(string);

	int getM_id();
	string getM_class();
	string getM_nome_cientifico();
	char getM_sexo();
	double getM_tamanho();
	string getM_dieta();
	string getM_nome_batismo();

};

#endif