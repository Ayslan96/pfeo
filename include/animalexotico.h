#ifndef AnimalExotico_H
#define AnimalExotico_H

#include <string>
#include <iostream>
#include "animalsilvestre.h"

class AnimalExotico: public AnimalSilvestre {

private:

	virtual std::ostream& print(std::ostream&) const = 0;

protected:

	std::string m_pais_origem;

public:

	AnimalExotico(void);
	AnimalExotico(std::string, std::string);
	virtual ~AnimalExotico();
	virtual void imprime();

 	friend std::ostream& operator << (std::ostream& os, const AnimalExotico& b) {
		return b.print(os);
	}

};
#endif