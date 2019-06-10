s#ifndef Reptil_H
#define Reptil_H

#include "animal.h"

class Reptil : public Animal {
private:
	bool m_venenoso;
	std::string m_tipo_veneno;

	std::ostream& print(std::ostream& os) const {
		return os << "Id: " << m_id << ", Classe: " << m_classe << ", Nome Cientifico: " << m_nome_cientifico << ", Sexo: " << m_sexo 
			  <<", Tamanho: " << m_tamanho <<", Dieta: "<< m_dieta <<", Nome de Batismo: "<< m_nome_batismo
			  <<", Venenoso: " << m_venenoso << ", Tipo de veneno:" << m_tipo_veneno << endl;
	}
	
public:

	Reptil(void);

	Reptil(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, string nome_batismo, bool venenoso, string tipo_veneno);

	~Reptil();
	
	void imprime();

};

#endif