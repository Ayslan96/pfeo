#include "/home/andrehabib/Documentos/pfeo/include/animal/animal.h"
#include "/home/andrehabib/Documentos/pfeo/include/animal/anfibio/anfibio.h"
#include "/home/andrehabib/Documentos/pfeo/include/animal/ave/ave.h"
#include "/home/andrehabib/Documentos/pfeo/include/date.h"

int main(){

	//Date teste1(2,12,2019);

	Animal* teste = new Ave(12,"mamifero","nathanliss",'f',1.50,"cenoura","nathan",1.6,2.0); 

	teste->imprime();
	//cout << *teste << endl;



	return 0;
}