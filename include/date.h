#ifndef Date_h
#define Date_h

class date{
private:
	int dia;
	int mes;
	int ano;

public:
	Date(void);
	Date(const int& dia_, const int& mes_, const int& ano_);
	int validardia(int d);
	int validarm(int m);
	int 
	~Date();
};





#endif