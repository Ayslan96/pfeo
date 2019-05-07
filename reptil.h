#ifndef Reptil_H
#define Reptil_H

#include <string>

class Reptil : public Animal {
private:
	bool m_venenoso;
	std::string m_tipo_veneno;
	
public:

	Reptil();

	~Reptil();

};