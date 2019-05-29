#ifndef Ave_H
#define Ave_H

#include <string>

class Ave : public Animal {
private:
	double m_tamanho_do_bico_cm;
	double m_envergadura_das_asas;
		
public:
	Ave(delete);
	Ave(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario,  Tratador tratador, std::sstring nome_batismo, double tamanho_do_bico_cm, double envergadura_das_asas);
	~Ave();

};