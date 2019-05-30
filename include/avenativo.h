#ifndef AveNativo_H
#define AveNativo_H

#include <string>

class AveNativo : public Ave public AnimalNativo{

public:

	AveNativo(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, std::sstring nome_batismo,
		double tamanho_do_bico_cm, double envergadura_das_asas);

	AveNativo();

	~AveNativo();

};