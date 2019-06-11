#ifndef Reptil_H
#define Reptil_H

#include "animal.h"
#include <iostream>
#include <string>

using std::string;
using std::endl;

class Reptil : public Animal {
private:
	bool m_venenoso;
	string m_tipo_veneno;

	std::ostream& print(std::ostream& os) const {
		return os << "Id: " << m_id << ", Classe: " << m_classe << ", Nome Cientifico: " << m_nome_cientifico << ", Sexo: " << m_sexo 
			  <<", Tamanho: " <<m_tamanho <<", Dieta: "<<m_dieta <<", Nome de Batismo: "<<m_nome_batismo
			  <<", Venoso: " <<m_venenoso << ", Tipo do Veneno: " <<m_tipo_veneno << endl;
	}
	
public:

	Reptil(int,string, string,char,double,string,string,bool,string);

	~Reptil();
	
	void imprime();

};

#endif