#include <iostream>

#include "ave.h"
#include "anfibio.h"
#include "mamifero.h"
#include "reptil.h"

using std::cout;
using std::endl;

int main(){
 
 	Animal * teste0 = new Ave(12,"ave","nathanliss",'f',1.50,"cenoura","nathan",1.5, 2.6);
 	Animal * teste1 = new Anfibio(13,"anfibio","anfibios",'m',0.9,"peixes","nathan",15,"11/09/2001");
 	Animal * teste2 = new Mamifero(14,"mamifero","mamipherus",'m',3.75,"carne","nathan","vermelho");
 	Animal * teste3 = new Reptil(15,"Reptil","reptilis",'f',5.93,"gente","nathan",1,"venenoso");
	
	cout << *teste0 << endl; 
	cout << *teste1 << endl; 
	cout << *teste2 << endl; 
	cout << *teste3 << endl; 

return 0;
}