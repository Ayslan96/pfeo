#ifndef Anfibio_H
#define Anfibio_H

#include <string>

class Anfibio : public Animal {
private:
	
	int m_total_de_mudas;
	date m_ultima_muda;
	
public:

	Anfibio();

	~Anfibio();

};