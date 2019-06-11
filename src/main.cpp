#include <iostream>
//#include "../include/menu.h"
#include "../include/mamifero.h"
#include "../include/reptil.h"
//#include "../include/classArquivo.h"
#include "../include/animal.h"

int main(){
	//Menu sistema;
	//sistema.menuM;
	Animal* teste = new Reptil(12, "reptil", "daiviss", 'f', 16, "carne", "kleber", false, "acido");
	Animal* teste1 = new Anfibio(12, "reptil", "daiviss", 'f', 16, "carne", "kleber", "rosa");

	cout << *teste;
	cout << *teste1;


	return 0;
}