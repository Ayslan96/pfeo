#ifndef Mamifero_H
#define Mamifero_H
#include "animal.h"

class Mamifero : public Animal{
private:
	
	std::string m_cor_pelo;

	std::ostream& print(std::ostream& os) const {
		return os << "Id: " << m_id << ", Classe: " << m_classe << ", Nome Cientifico: " << m_nome_cientifico << ", Sexo: " << m_sexo 
			  <<", Tamanho: " << m_tamanho <<", Dieta: "<< m_dieta <<", Nome de Batismo: "<< m_nome_batismo
			  <<", Cor do pelo: " << m_cor_pelo << endl;
	}

		
public:
	Mamifero(void);
	Mamifero(int, string, string, char, int, string, string, string);
	~Mamifero();
	void imprime();

};
 
#endif