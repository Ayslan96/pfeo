#include <iostream>
#include "../include/menu.h"
#include "../include/interfaces.h"


using std::cin;
using std::cout;
using std::cerr;

//vdc
void Menu::menuM(){
	
	Interfaces nome;

	nome.exibeNome();

	int op;

	cout<<"1. Cadastrar novo animal " << endl;
	cout<<"2. Remover animal " << endl;
	cout<<"3. Alteração de cadastro de animal " << endl;
	cout<<"4. Consultar animal " << endl;
	cout<<"5. Cadastrar novo funcionario " << endl;
	cout<<"6. Remover funcionario " << endl;
	cout<<"7. Alteração de cadastro de funcionario " << endl;
	cout<<"8. Consultar funcionario " << endl;
	cout<<"ENTRE COM A OPCAO DESEJADA: " << endl;
	cin>>op;


	switch(op){

	case 1:
		cout << "Estamos na opcao " << op;
		cadastrarAnimal();
		break;
	case 2:
		cout << "Estamos na opcao " << op;
		break;
	case 3:
		cout << "Estamos na opcao " << op;
		break;
	case 4:
		cout << "Estamos na opcao " << op;
		break;
	case 5:
		cout << "Estamos na opcao " << op;
		cadastrarFuncionario();
		break;
	case 6:
		cout << "Estamos na opcao " << op;
		break;
	case 7:
		cout << "Estamos na opcao " << op;
		break;
	case 8:
		cout << "Estamos na opcao " << op;
		break;
	default:
		cout << "Opcao " << op << " invalida. " << endl;
		return menuM();
		break;
		
	}
}


void Menu::cadastrarAnimal(){

	int op = 0;
	Interfaces classe;
	cout << "" << endl;
	cout<<"1. Mamifero " << endl;
	cout<<"2. Ave " << endl;
	cout<<"3. Anfibio " << endl;
	cout<<"4. Reptil " << endl;
	cout<<"ENTRE COM A OPCAO DESEJADA: " << endl;
	cin>>op;


	switch(op){

	case 1:
		cout << "Estamos na opcao " << op;
		classe.mamifero();
		break;
	case 2:
		cout << "Estamos na opcao " << op;
		classe.ave();
		break;
	case 3:
		cout << "Estamos na opcao " << op;
		classe.anfibio();
		break;
	case 4:
		cout << "Estamos na opcao " << op;
		classe.reptil();
		break;
	default: 
		cout << "Opcao " << op << " invalida. ";
		return cadastrarAnimal();
		break;
		

	}
}

void Menu::cadastrarFuncionario(){

	int op = 0;
	Interfaces classe;
	cout << "" << endl;
	cout<<"1. Veterinário " << endl;
	cout<<"2. Tratador " << endl;

	cout<<"ENTRE COM A OPCAO DESEJADA: " << endl;
	cin>>op;


	switch(op){

	case 1:
		cout << "Estamos na opcao " << op;
		classe.veterinario();
		break;
	case 2:
		cout << "Estamos na opcao " << op;
		//classe.tratador();
		break;
	default: 
		cout << "Opcao " << op << " invalida. ";
		return cadastrarFuncionario();
		break;
		

	}
}


