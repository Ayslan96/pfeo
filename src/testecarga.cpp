#include "/home/andrehabib/Documentos/pfeo/include/animal/animal.h"
#include "/home/andrehabib/Documentos/pfeo/include/animal/anfibio/anfibio.h"
#include "/home/andrehabib/Documentos/pfeo/include/animal/ave/ave.h"
#include "/home/andrehabib/Documentos/pfeo/include/date.h"

int main(){

	

	Animal* teste = new Ave(12,"mamifero","nathanliss",'f',1.50,"cenoura","nathan",1.6,2.0); 

	cout << *teste << endl;



	return 0;
}