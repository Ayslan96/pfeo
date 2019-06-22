#ifndef Mamifero_H
#define Mamifero_H
#include "animal.h"

class Mamifero : public Animal{
private:
	
	std::string m_cor_pelo;

	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<< m_dieta <<";"<< m_nome_batismo
			  <<";" << m_cor_pelo << endl;
	}

		
public:
	Mamifero(void);
	Mamifero(int, string, string, char, int, string, string, string);
	~Mamifero();
	void imprime();

};
 
#endif