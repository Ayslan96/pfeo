#ifndef Reptil_H
#define Reptil_H
#include "animal.h"

class Reptil : public Animal{
private:
	
	bool m_venenoso;
	std::string m_tipo_de_veneno;

	std::ostream& print(std::ostream& os) const {
		return os << "Id: " << m_id << ", Classe: " << m_classe << ", Nome Cientifico: " << m_nome_cientifico << ", Sexo: " << m_sexo 
			  <<", Tamanho: " << m_tamanho <<", Dieta: "<< m_dieta <<", Nome de Batismo: "<< m_nome_batismo
			  <<", Venenoso: " << m_venenoso << ", Tipo de veneno: " << m_tipo_de_veneno << endl;
	}

		
public:
	Reptil(void);
	Reptil(int, string, string, char, int, string, string, bool, string);
	~Reptil();
	void imprime();

};
 
#endif