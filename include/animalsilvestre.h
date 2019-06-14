#ifndef AnimalSilvestre_H
#define AnimalSilvestre_H

#include <iostream>
#include <string>

class AnimalSilvestre : public Animal : public {
private:

	virtual std::ostream& print(std::ostream&) const = 0;

protected:
	std::string m_autorizacao_ibama;
	

public:
	AnimalSilvestre(void);
	AnimalSilvestre(std::string m_autorizacao_ibama;);
	~AnimalSilvestre();

	virtual void imprime()=0;
    friend std::ostream& operator << (std::ostream& os, const Animal& b) {
		return b.print(os);
	}


};
