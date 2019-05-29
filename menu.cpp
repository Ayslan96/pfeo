#include <iostream>
#include "menu.h"
#include "interfaces.h"


using std::cin;
using std::cout;
using std::cerr;



void menu::menuM(){
	
	Interfaces nome;

	nome.exibeNome();

	char op;

	cout<<"1. Cadastrar novo animal\n";
	cout<<"2. Remover animal\n";
	cout<<"3. Alteração de cadastro de animal\n";
	cout<<"4. Consultar animal\n";
	cout<<"5. Cadastrar novo funcionario\n";
	cout<<"6. Remover funcionario\n";
	cout<<"7. Alteração de cadastro de funcionario\n";
	cout<<"8. Consultar funcionario\n\n";
	cout<<"ENTRE COM A OPCAO DESEJADA: ";
	cin>>op;


	switch(op){

	case '1':
		cout<<"estamos na opcao "<<op;
		break;
	case '2':
		cout<<"estamos na opcao "<<op;
		break;
	case '3':
		cout<<"estamos na opcao "<<op;
		break;
	case '4':
		cout<<"estamos na opcao "<<op;
		break;
	case '5':
		cout<<"estamos na opcao "<<op;
		break;
	case '6':
		cout<<"estamos na opcao "<<op;
		break;
	case '7':
		cout<<"estamos na opcao "<<op;
		break;
	case '8':
		cout<<"estamos na opcao "<<op;
		break;
	default:cout<<"Opcao "<<op<<" invalida. ";
		break;
		}
}