#include <iostream>
#include "interfaces.h"
#include "menu.h"

using std::cin;
using std::cout;
using std::cerr;


int main(){
	
	menu Menu;

	Menu.menu();
	~Menu.menu();
	return 0;
}