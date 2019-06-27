/**
* @file menu.cpp
* @brief Métodos da Classe Menu
*/

/** @brief Inclui a biblioteca iostream */
#include <iostream>

/** @brief Inclui a biblioteca menu.h */
#include "../include/menu.h"

/** @brief Inclui a biblioteca interfaces.h */
#include "../include/interfaces.h"


using std::cin;
using std::cout;
using std::cerr;


/**
/** @brief Método chamado menuM responsável por organizar a interação com o usuário 
* @param  Não possui parâmetro
* @return Não possui retorno
*/
void Menu::menuM(){
	
	/** @brief Cria um objeto da classe Interfaces para manipular os métodos da mesma */
	Interfaces nome;

	/** @brief Chama o métodp exibeNome() da classe Interfaces */
	nome.exibeNome();

	/** @brief Define a variável do tipo inteiro chamada op para servir de parâmeotro pro Switch */
	int op;

	/** @brief Saídas do menu de interação com o usuário */
	cout<<"1. Cadastrar novo animal " << endl;
	cout<<"2. Remover animal " << endl;
	cout<<"3. Alteração de cadastro de animal " << endl;
	cout<<"4. Consultar animal " << endl;
	cout<<"5. Cadastrar novo funcionario " << endl;
	cout<<"6. Remover funcionario " << endl;
	cout<<"7. Alteração de cadastro de funcionario " << endl;
	cout<<"8. Consultar funcionario " << endl;
	cout<<"9. SAIR DO PROGRAMA " <<endl;
	cout<<"ENTRE COM A OPCAO DESEJADA: " << endl;
	cin>>op;

	/** @brief Switch que controla as funções do sistema */
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
	case 9:
		cout<< "Saindo..."<<endl;
		cout<<flush;
		return;
		break;
	default:
		cout << "Opcao " << op << " invalida. " << endl;
		return menuM();
		break;
		
	}
}

/**
/** @brief Método chamado cadastrarAnimal responsável por organizar a interação com o usuário no cadastramentos dos animais. 
* @param  Não possui parâmetro
* @return Não possui retorno
*/
void Menu::cadastrarAnimal(){

	/** @brief Define a variável do tipo inteiro chamada op para servir de parâmeotro pro Switch */
	int op = 0;

	/** @brief Cria um objeto da classe Interfaces para manipular os métodos da mesma */
	Interfaces classe;

	/** @brief Saídas do menu de cadastramento dos animais para interação com o usuário */
	cout << "" << endl;
	cout<<"1. Mamifero " << endl;
	cout<<"2. Ave " << endl;
	cout<<"3. Anfibio " << endl;
	cout<<"4. Reptil " << endl;
	cout<<"ENTRE COM A OPCAO DESEJADA: " << endl;
	cin>>op;

	/** @brief Switch que controla os animais e métodos da classe Interfaces que vão ser utilizados */
	switch(op){

	case 1:
		cout << "Estamos na opcao " << op << endl;
		cout<<"1. Mamifero Exótico" << endl;
		cout<<"2. Mamifero Nativo" << endl;
		cout<<"ENTRE COM A OPCAO DESEJADA: " << endl;
		cin>>op;
		if(op == 1){
			classe.mamiferoE();
		}
		else{
			classe.mamiferoN();
		}
	
		menuM();
		break;
	case 2:
		cout << "Estamos na opcao " << op << endl;
		cout<<"1. Ave Exótica" << endl;
		cout<<"2. Ave Nativa" << endl;
		cout<<"ENTRE COM A OPCAO DESEJADA: " << endl;
		cin>>op;
		if(op == 1){
			classe.aveE();
		}
		else{
			classe.aveN();
		}
		menuM();
		break;
	case 3:
		cout << "Estamos na opcao " << op << endl;
		cout<<"1. Anfíbio Exótico" << endl;
		cout<<"2. Anfíbio Nativo" << endl;
		cout<<"ENTRE COM A OPCAO DESEJADA: " << endl;
		cin>>op;
		if(op == 1){
			classe.anfibioE();
		}
		else{
			classe.anfibioN();
		}
		menuM();
		break;
	case 4:
		cout << "Estamos na opcao " << op << endl;
		cout<<"1. Réptil Exótico" << endl;
		cout<<"2. Réptil Nativo" << endl;
		cout<<"ENTRE COM A OPCAO DESEJADA: " << endl;
		cin>>op;
		if(op == 1){
			classe.reptilE();
		}
		else{
			classe.reptilN();
		}
		menuM();
		break;
	default: 
		cout << "Opcao " << op << " invalida. ";
		return cadastrarAnimal();
		break;
	}
}

/**
/** @brief Método chamado cadastrarFuncionario responsável por organizar a interação com o usuário no cadastramentos dos funcionários. 
* @param  Não possui parâmetro
* @return Não possui retorno
*/
void Menu::cadastrarFuncionario(){

	/** @brief Define a variável do tipo inteiro chamada op para servir de parâmeotro pro Switch */
	int op = 0;

	/** @brief Cria um objeto da classe Interfaces para manipular os métodos da mesma */
	Interfaces classe;

	/** @brief Saídas do menu de cadastramento dos funcionarios para interação com o usuário */
	cout << "" << endl;
	cout<<"1. Veterinário " << endl;
	cout<<"2. Tratador " << endl;

	cout<<"ENTRE COM A OPCAO DESEJADA: " << endl;
	cin>>op;

	/** @brief Switch que controla os funcionários e métodos da classe Interfaces que vão ser utilizados */
	switch(op){

	case 1:
		cout << "Estamos na opcao " << op << endl;
		classe.veterinario();
		break;
	case 2:
		cout << "Estamos na opcao " << op << endl;
		classe.tratador();
		break;
	default: 
		cout << "Opcao " << op << " invalida. " << endl;
		return cadastrarFuncionario();
		break;
		

	}
}


