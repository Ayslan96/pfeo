#ifndef AnimalExotico_H
#define AnimalExotico_H

#include <string>
#include <iostream>

class AnimalExotico{

private:

	virtual std::ostream& print(std::ostream&) const = 0;

protected:

	std::string m_pais_origem;

public:

	AnimalExotico(void);
	AnimalExotico(string);
	virtual ~AnimalExotico();
	virtual void imprime();

 	friend std::ostream& operator << (std::ostream& os, const Animal& b) {
		return b.print(os);
	}

};