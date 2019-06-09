#include "/home/andrehabib/Documentos/pfeo/include/date.h"

Date::Date(void){}

Date::Date(const int& dia_, const int& mes_, const int& ano_){
	if(dia_>31 || dia_< 1){
		validardia(dia_);
	}
	else{
		dia = dia_;
	}

	if(mes_>12 || mes_ < 1){
		validarmes(mes_);
	}
	else{
		mes = mes_;
	}
	if(ano_> 2022|| ano_ < 2019){
		validarano(ano);
	}
	else{
		ano = ano_;
	}

}

void Date::validardia(int d){
	cout << " -Digite o dia correto, é necessario ser menor ou igual a 31 e não pode ser menor que 1 !" << endl;
	cin >> d;
	if(d <= 31 && d >= 1){
		dia = d;
	}
	else{
		validardia(d);
	}

}

void Date::validarmes(int m){
	cout << " -Digite o mês correto, é necessario ser menor ou igual a 12 e não pode ser menor que 1 !" << endl;
	cin >> m;
	if(m <= 12 && m >=1){
		mes = m;
	}
	else{
		validarmes(m);
	}
}


void Date::validarano(int a){
	cout << " -Digite o ano correto, é necessario ter 4 digitos e ser no minimo 2019 até 2022 !" << endl;
	cin >> a;
	if(a >= 2019 && a<=2022){
		ano = a;
	}
	else{
		validarano(a);
	}
}

Date::~Date(){}