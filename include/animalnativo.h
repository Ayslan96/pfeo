#ifndef AnimalNativo_H
#define AnimalNativo_H

#include <string>

class AnimalNativo{

private:

	virtual std::ostream& print(std::ostream&) const = 0;

protected:
	std::string m_uf_origem;
	std::string m_autorizacao;
	

public:

	AnimalNativo(void);
	AnimalNativo(string, string);
	virtual ~AnimalNativo();
	virtual void imprime();

	friend std::ostream& operator << (std::ostream& os, const Animal& b) {
		return b.print(os);
	}

};

#endif