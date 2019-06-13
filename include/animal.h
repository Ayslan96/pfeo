#ifndef Animal_H
#define Animal_H

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

class Animal {

private:

virtual std::ostream& print(std::ostream&) const = 0;

protected:
	int m_id;
	std::string m_classe;
	std::string m_nome_cientifico;
	char m_sexo;
	double m_tamanho;
	std::string m_dieta;
	std::string m_nome_batismo;

public:
	
	Animal(int m_id, string m_classe, string m_nome_cientifico, 
		   char m_sexo, double m_tamanho, string m_dieta, 
		   string m_nome_batismo);
	~Animal();

	virtual void imprime()=0;

    friend std::ostream& operator << (std::ostream& os, const Animal& b) {
		return b.print(os);
	}

	void setM_id(int);
	void setM_classe(string);
	void setM_nome_cientifico(string);
	void setM_sexo(char);
	void setM_tamanho(double);
	void setM_dieta(string);
	void setM_nome_batismo(string);

	int getM_id();
	string getM_classe();
	string getM_nome_cientifico();
	char getM_sexo();
	double getM_tamanho();
	string getM_dieta();
	string getM_nome_batismo();

};

#endif