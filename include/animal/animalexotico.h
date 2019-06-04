#ifndef AnimalExotico_H
#define AnimalExotico_H

#include <string>

class AnimalExotico : public AnimalSilvestre{
private:
	std::string m_pais_origem;
	

public:

	AnimalExotico();

	~AnimalExotico();

};