#ifndef Anfibio_H
#define Anfibio_H

#include "animal.h"
//#include "date.h"
#include <iostream>
#include <string>


using std::string;
using std::endl;

class Anfibio : public Animal {
private:
	
	int m_total_de_mudas;
	//date m_ultima_muda;
	string m_ultima_data;

	std::ostream& print(std::ostream& os) const {
		return os << "Id: " << m_id << ", Classe: " << m_classe << ", Nome Cientifico: " << m_nome_cientifico << ", Sexo: " << m_sexo 
			  <<", Tamanho: " <<m_tamanho <<", Dieta: "<<m_dieta <<", Nome de Batismo: "<<m_nome_batismo
			  <<", Total de mudas: " <<m_total_de_mudas << ", Ultima muda: " << m_ultima_data << endl;
	}
	
public:

	//Anfibio(void);
	Anfibio(int,string,string,char,double,string,string,int,string); //date m_ultima_muda);
	~Anfibio();

	void imprime();
	
};

#endif
