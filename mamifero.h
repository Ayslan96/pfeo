#ifndef Mamifero_H
#define Mamifero_H

#include <string>

class Mamifero : public Animal {
private:
	
	std::string m_cor_pelo;
	
public:

	Mamifero();

	~Mamifero();

};