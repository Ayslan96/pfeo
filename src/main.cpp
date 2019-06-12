#include <iostream>
#include "../include/menu.h"
#include "../include/mamifero.h"
#include "../include/reptil.h"
//#include "../include/classArquivo.h"
#include "../include/animal.h"
#include "../include/date.h"

int main(){
	//Menu sistema;
	//sistema.menuM;
	Date data(3,10,2019);
	Animal* teste = new Mamifero(12, "reptil", "daiviss", 'f', 16, "carne", "kleber", "rosa");
	Animal* teste1 = new Reptil(12, "reptil", "daiviss", 'f', 16, "carne", "kleber", false, "acido");

	cout << *teste;
	cout << *teste1;


	return 0;
}