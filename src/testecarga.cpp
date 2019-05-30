#include "../include/animal.h"
#include "../include/ave.h"

int main() {
	
	Animal* teste1 = new Ave(12,"mamifero","nathanliss",'f',1.50,"cenoura","nathan",0.5,2.0);

	std::cout << teste1 << std::endl;

	return 0;
} 