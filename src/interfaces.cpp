#include <iostream>
#include "../include/interfaces.h"
#include <fstream>

using std::cout;
using std::endl;

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
		ArquivoTeste << *mamifero;
		ArquivoTeste << "\n";
	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}
	ArquivoTeste.close();
	

}

void Interfaces::ave(){
	double tamanho_do_bico;
	double envergadura_das_asas;

	cout<< " Digite o nome do animal: " << endl;
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
	

}


void Interfaces::reptil(){
	bool venenoso;
	string tipo_veneno;

	cout<< " Digite o nome do animal: " << endl;
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
	cout<< " Digite false caso não seja venenoso e true caso seja venenoso: " << endl;
	cin >> venenoso;
	cout<< " Digite o tipo do veneno " << endl;
	cin >> tipo_veneno;

	classe = "reptil";
	Animal* reptil = new Reptil(id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo, venenoso, tipo_veneno);

	
}

void Interfaces::anfibio(){
	int total_de_muda, dia, mes, ano;


	cout<< " Digite o nome do animal: " << endl;
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
	

}