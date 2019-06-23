#ifndef Ave_H
#define Ave_H
#include "animal.h"

class Ave : public Animal{
private:
	
	double m_tamanho_do_bico_cm;
	double m_envergadura_das_asas;

	std::ostream& print(std::ostream& os) const {
		return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			  <<";" << m_tamanho <<";"<<m_dieta <<";"<<m_nome_batismo
			  <<";" <<m_tamanho_do_bico_cm << ";" <<m_envergadura_das_asas << endl;
	}

		
public:
	Ave(void);
	Ave(int, string, string, char, int, string, string, double, double);
	~Ave();
	void imprime();

};
 
#endif