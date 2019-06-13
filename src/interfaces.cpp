#include <iostream>
#include "../include/interfaces.h"
#include <fstream>

using std::cout;
using std::endl;


int Animal::total = 0;

void Interfaces::exibeNome(){

	cout << " #######      ########    ################    ###########    ########    #####      ######## " << endl;
	cout << " ##     #     ########    ################    ###########    ########    #    #     #      # " << endl;
	cout << " ##      #    #                  ##           ##             #           ##    #    #      # "<< endl;
    cout << " ##      #    #                  ##           ##             #           ##    #    #      # " << endl;	
	cout << " ##      #    #                  ##           ######         #           ##    #    #      # "<< endl;
	cout << " ##     #     ########           ##           ######         ########    ##   #     ######## "<< endl;
	cout << " #######      ########           ##           ##             ########    #####      ######## "<< endl;
	cout << " ##           #                  ##           ##             #           ####       #      # " << endl;
	cout << " ##           #                  ##           ##             #           ## ##      #      # " << endl;
	cout << " ##           #                  ##           ##             #           ##  ##     #      # " << endl;
	cout << " ##           ########           ##           ##             ########    ##   ##    #      # " << endl;
	cout << " ##           ########           ##           ##             ########    ##    ##   #      # " << endl;
};

void Interfaces::mamifero(){
	string cor_do_pelo;

	cout << " Digite o id do animal " << endl;
	cin>> id;
	cout<< " Digite o nome do animal do batismo: " << endl;
	cin >> nome_batismo;
	cout<< " Digite o nome cientifico: " << endl;
	cin >> nome_cientifico;
	cout<< " Digite o sexo: " << endl;
	cin >> sexo;
	cout<< " Digite o tamanho: " << endl;
	cin >> tamanho;
	cout<< " Digite a dieta: " << endl;
	cin >> dieta;
	cout<< " Digite a cor do pelo: " << endl;
	cin >> cor_do_pelo;

	classe = "mamifero";
	Animal* mamifero = new Mamifero(id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo, cor_do_pelo);
	
	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Animal cadastrado!!" << std::endl;
		ArquivoTeste << *mamifero;
		ArquivoTeste << "\n";
	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	ArquivoTeste.close();

	delete(mamifero);


	

}

void Interfaces::ave(){
	double tamanho_do_bico;
	double envergadura_das_asas;

	cout<< " Digite o id do animal: " << endl;
	cin >> id;

	cout<< " Digite o nome cientifico: " << endl;
	cin >> nome_cientifico;
	cout<< " Digite o sexo: " << endl;
	cin >> sexo;
	cout<< " Digite o tamanho: " << endl;
	cin >> tamanho;
	cout<< " Digite a dieta: " << endl;
	cin >> dieta;
	cout<< " Digite o nome do batismo " << endl;
	cin >> nome_batismo;
	cout<< " Digite o tamanho do bico: " << endl;
	cin >> tamanho_do_bico;
	cout<< " Digite a envergadura das asas: " << endl;
	cin >> envergadura_das_asas;

	classe = "ave";
	Animal* ave = new Ave(id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo ,tamanho_do_bico, envergadura_das_asas);

	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Animal cadastrado!!" << std::endl;
		ArquivoTeste << *ave;
		ArquivoTeste << "\n";
	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}
	ArquivoTeste.close();
	
	delete ave;

}


void Interfaces::reptil(){
	bool venenoso;
	string tipo_veneno;

	cout<< " Digite o id do animal: " << endl;
	cin >> id;
	cout<< " Digite o nome cientifico: " << endl;
	cin >> nome_cientifico;
	cout<< " Digite o sexo: " << endl;
	cin >> sexo;
	cout<< " Digite o tamanho: " << endl;
	cin >> tamanho;
	cout<< " Digite a dieta: " << endl;
	cin >> dieta;
	cout<< " Digite o nome do batismo " << endl;
	cin >> nome_batismo;
	cout<< " Digite 0 caso não seja venenoso e 1 caso seja venenoso: " << endl;
	cin >> venenoso;
	cout<< " Digite o tipo do veneno " << endl;
	cin >> tipo_veneno;

	classe = "reptil";
	Animal* reptil = new Reptil(id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo, venenoso, tipo_veneno);

	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Animal cadastrado!!" << std::endl;
		ArquivoTeste << *reptil;
		ArquivoTeste << "\n";
	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	ArquivoTeste.close();

	delete(reptil);
}

void Interfaces::anfibio(){
	int total_de_muda, dia, mes, ano;


	cout<< " Digite o id do animal: " << endl;
	cin >> id;
	cout<< " Digite o nome cientifico: " << endl;
	cin >> nome_cientifico;
	cout<< " Digite o sexo: " << endl;
	cin >> sexo;
	cout<< " Digite o tamanho: " << endl;
	cin >> tamanho;
	cout<< " Digite a dieta: " << endl;
	cin >> dieta;
	cout<< " Digite o nome do batismo " << endl;
	cin >> nome_batismo;
	cout<< " Digite o total de mudas: " << endl;
	cin >> total_de_muda;
	cout<< " Digite o dia da ultima muda: " << endl;
	cin >> dia;
	cout<< " Digite o mes da ultima muda: " << endl;
	cin >> mes;
	cout<< " Digite o ano da ultima muda: " << endl;
	cin >> ano;

	Date ultima_muda(dia,mes,ano);

	classe = "anfibio";
	Animal* anfibio = new Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo , total_de_muda, ultima_muda);

	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Animal cadastrado!!" << std::endl;
		ArquivoTeste << *anfibio;
		ArquivoTeste << " \n";
	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	ArquivoTeste.close();
	
	delete(anfibio);
}


void Interfaces::veterinario(){
	
	std::string cnmv;

	cout<< " Digite o id do veterinário: " << endl;
	cin >> id;
	cout<< " Digite o nome do veterinário: " << endl;
	cin >> m_nome;
	cout<< " Digite o cpf: " << endl;
	cin >> m_cpf;
	cout<< " Digite a idade do veterinário: " << endl;
	cin >> m_idade;
	cout<< " Digite o tipo sanguineo do veterinário: " << endl;
	cin >> m_tipo_sanguineo;
	cout<< " Digite o fator do rh do veterinário: " << endl;
	cin >> m_fator_rh;
	cout<< " Digite a especialidade: " << endl;
	cin >> m_especialidade;
	cout<< " Digite o código do CRMV: " << endl;
	cin >> cnmv;

	Funcionario* v = new Veterinario(id, m_nome, m_cpf, m_idade,m_tipo_sanguineo, m_fator_rh, m_especialidade, cnmv);

	ofstream ArquivoTeste1;
	ArquivoTeste1.open("funcionarios.txt",ios::app);
	if(ArquivoTeste1.is_open()){

		std::cout << "Funcionario cadastrado!!" << std::endl;
		ArquivoTeste1 << *v;
		ArquivoTeste1 << " \n";

	}else{

		std::cout << " Não foi possivel cadastrar o funcionario! " << std::endl;

	}

	ArquivoTeste1.close();
	
	delete(v);

}