#ifndef Ave_H
#define Ave_H
#include <string>
#include "animal.h"

class Ave : public Animal{
private:
	double m_tamanho_do_bico_cm;
	double m_envergadura_das_asas;
		
public:
	Ave(void);
	Ave(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, std::string nome_batismo, double m_tamanho_do_bico_cm, double m_envergadura_das_asas);
	~Ave();
	void print();
};
 
#endif