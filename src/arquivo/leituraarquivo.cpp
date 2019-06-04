#include <iostream>


int main( int argc, char *argv[],  char *envp[]) {

	ifstream arquivo1(argv[1]);

	while( !arquivo1.eof() ) {

		arquivo1.getline(str, 80);

	}



}