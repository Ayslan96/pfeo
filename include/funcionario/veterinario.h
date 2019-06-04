#ifndef Veterinario_H
#define Veterinario_H

#include <string>

class Veterinario : public Funcionario {
private:
	
	std::string m_crmv;
	
public:

	Veterinario();

	~Veterinario();

};