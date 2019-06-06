#include <iostream>
#include "tratador.h"
#include "veterinario.h"

int main(){

	Tratador teste(12,"richard"	,"089.123.577-99",39,'o','-',"mexer com bichos",5000); 
	Veterinario teste1(12,"richard"	,"089.123.577-99",39,'o','-',"mexer com bichos","16458"); 



	std::cout << teste <<std::endl<<std::endl;
	std::cout << teste1 <<std::endl<<std::endl;


return 0;
}