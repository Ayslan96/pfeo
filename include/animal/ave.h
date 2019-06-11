#ifndef Ave_H
#define Ave_H

#include "animal.h"
#include <iostream>
#include <string>

using std::string;
using std::endl;

class Ave : public Animal{
private:

	double m_tamanho_do_bico_cm;
	double m_envergadura_das_asas;

	std::ostream& print(std::ostream& os) const {
		return os << "Id: " << m_id << ", Classe: " << m_classe << ", Nome Cientifico: " << m_nome_cientifico << ", Sexo: " << m_sexo 
			  <<", Tamanho: " <<m_tamanho <<", Dieta: "<<m_dieta <<", Nome de Batismo: "<<m_nome_batismo
			  <<", Tamanho do Bico em cm: " <<m_tamanho_do_bico_cm << ", Envergadura das Asas: " <<m_envergadura_das_asas << endl;
	}	
public:

	void imprime();

	Ave(int,string,string,char,double,string,string,double,double);
	~Ave();
	

};
 
#endif