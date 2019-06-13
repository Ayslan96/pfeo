#ifndef AnimalNativo_H
#define AnimalNativo_H

#include <string>

class AnimalNativo : public AnimalSilvestre{
private:
	std::string m_uf_origem;
	std::string m_aturorizacao;

public:

	AnimalNativo();

	~AnimalNativo();

};