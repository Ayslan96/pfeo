#ifndef AveExotico_H
#define AveExotico_H

#include <string>

class AveExotico : public Ave , public AnimalExotico{

public:

	AveExotico(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, std::sstring nome_batismo,
		double tamanho_do_bico_cm, double envergadura_das_asas);

	AveExotico();

	~AveExotico();

};