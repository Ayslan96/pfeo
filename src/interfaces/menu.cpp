#include <iostream>
#include "../include/menu.h"
#include "../include/interfaces.h"
#include "animal.h"
#include "ave.h"
#include "anfibio.h"
#include "mamifero.h"
#include "reptil.h"
#include "funcionario.h"
#include "veterinario.h"
#include "tratador.h"



using std::cin;
using std::cout;
using std::cerr;



void menu::cadastrarAnimal(){

}
void menu::removerAnimal(){

}
void menu::alterarCadastroAnimal(){

}
void menu::consultarAnimal(){

}
void menu::cadastrarNovofuncionario(){

}
void menu::removerFuncionario(){

}
void menu::alteraçãoCadastroFuncionario(){

}
void menu::consultarFuncionario(){

}



//vdc
void menu::menuM(){
	
	bool a;
	Interfaces nome;

	while(a==true){

	nome.exibeNome();

	char op;

	cout<<"1. Cadastrar novo animal\n";
	cout<<"2. Remover animal\n";
	cout<<"3. Alteração de cadastro de animal\n";
	cout<<"4. Consultar animal\n";
	cout<<"5. Cadastrar novo funcionario\n";
	cout<<"6. Remover funcionario\n";
	cout<<"7. Alteração de cadastro de funcionario\n";
	cout<<"8. Consultar funcionario\n";
	cout<<"9. SAIR\n\n"
	cout<<"ENTRE COM A OPCAO DESEJADA: ";
	cin>>op;

	switch(op){

	case '1':
		cadastrarAnimal();	
	case '2':
		removerAnimal();
	case '3':
		alterarCadastroAnimal();
	case '4':
		consultarAnimal();
	case '5':
		cadastrarNovofuncionario();
	case '6':
		removerFuncionario();
	case '7':
		alteraçãoCadastroFuncionario();
	case '8':
		consultarFuncionario();
	case '9':
		a=false;
	default:cout<<"Opcao "<<op<<" invalida. ";
		break;
		}


	}
}
