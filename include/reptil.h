#ifndef Reptil_H
#define Reptil_H
#include "animal.h"

class Reptil : public Animal{
private:
	
	bool m_venenoso;
	std::string m_tipo_de_veneno;

	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho << ";" << m_dieta << ";" << m_nome_batismo
			  << ";" << m_venenoso << ";" << m_tipo_de_veneno << endl;
	}

		
public:
	Reptil(void);
	Reptil(int, string, string, char, int, string, string, bool, string);
	~Reptil();
	void imprime();

};
 
#endif