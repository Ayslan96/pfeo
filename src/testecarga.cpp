#include "../include/animal/animal.h"
#include "../include/animal/anfibio/anfibio.h"


int main(){

	Animal* teste = new Anfibio(12,"mamifero","nathanliss",'f',1.50,"cenoura","nathan",12,3,10,2019); 

	cout << *teste << endl;



return 0;
}