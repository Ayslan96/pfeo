#include "../include/animal/animal.h"
#include "../include/ave/ave.h"


int main(){

	Animal* teste = new Ave(12,"mamifero","nathanliss",'f',1.50,"cenoura","nathan",1.5,2.6); 

	cout << *teste << endl;



return 0;
}