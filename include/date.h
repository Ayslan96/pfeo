#ifndef Date_h
#define Date_h
#include <iostream>
#include <istream>
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

	//friend std::istream& operator >> (std::istream& saida2, const Date& t) {
		//saida2 >> t.dia >> t.mes >> t.ano;
		//return saida2;
	//}

};





#endif