#ifndef Date_h
#define Date_h
#include <iostream>
using namespace std;

class Date{
private:
	int dia;
	int mes;
	int ano;

public:
	Date(void);
	Date(const int& dia_, const int& mes_, const int& ano_);
	void validardia(int d);
	void validarmes(int m);
	void validarano(int a);
	~Date();

	friend std::ostream& operator << (std::ostream& saida, const Date& p) {
		saida << p.dia << "/" << p.mes << "/" << p.ano << endl;
		
		return saida;
	}
};





#endif