#ifndef AnimalNativo_H
#define AnimalNativo_H

#include <string>
#include <iostream>
#include "animalsilvestre.h"

class AnimalNativo : public AnimalSilvestre {

private:

	virtual std::ostream& print(std::ostream&) const = 0;

protected:
	std::string m_uf_origem;
	std::string m_autorizacao;
	
public:

	AnimalNativo(void);
	AnimalNativo(std::string, std::string, std::string);
	virtual ~AnimalNativo();
	virtual void imprime();

	friend std::ostream& operator << (std::ostream& os, const AnimalNativo& b) {
		return b.print(os);
	}

};

#endif