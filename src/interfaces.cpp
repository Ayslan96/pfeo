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


void Interfaces::mamiferoE(){
	string cor_do_pelo;

	cout << " Digite o Codigo do animal: " << endl;
	cin>> codigo;
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
	cout<< " Digite o pais de origem: " << endl;
	cin >> pais_de_origem;

	classe = "mamifero";
	Animal* mamiferoE = new Mamifero(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo, cor_do_pelo);
	
	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Mamífero Exótico Cadastrado!!" << std::endl;

		ArquivoTeste << *mamiferoE;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	ArquivoTeste.close();

	delete(mamiferoE);


}

void Interfaces::mamiferoN(){
	string cor_do_pelo;

	cout << " Digite o Codigo do animal: " << endl;
	cin>> codigo;
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
	cout<< " Digite a UF de origem: " << endl;
	cin >> uf_origem;
	cout<< " Digite a autorização: " << endl;
	cin >> autorizacao;

	classe = "mamifero";
	Animal* mamiferoN = new Mamifero(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo, cor_do_pelo);
	
	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Mamífero Nativo Cadastrado!!" << std::endl;

		ArquivoTeste << *mamiferoN;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	ArquivoTeste.close();

	delete(mamiferoN);


}

void Interfaces::aveE(){
	double tamanho_do_bico;
	double envergadura_das_asas;
	
	cout << " Digite o Codigo do animal " << endl;
	cin>> codigo;
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
	cout<< " Digite o pais de origem: " << endl;
	cin >> pais_de_origem;

	classe = "ave";
	Animal* aveE = new Ave(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo ,tamanho_do_bico, envergadura_das_asas);

	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Ave Exótica Cadastrada!!" << std::endl;

		ArquivoTeste << *aveE;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}
	ArquivoTeste.close();
	
	delete(aveE);

}

void Interfaces::aveN(){
	double tamanho_do_bico;
	double envergadura_das_asas;

	cout << " Digite o Codigo do animal: " << endl;
	cin>> codigo;
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
	cout<< " Digite a UF de origem: " << endl;
	cin >> uf_origem;
	cout<< " Digite a autorização: " << endl;
	cin >> autorizacao;

	classe = "ave";
	Animal* aveN = new Ave(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo ,tamanho_do_bico, envergadura_das_asas);

	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Ave Nativa Cadastrada!!" << std::endl;;

		ArquivoTeste << *aveN;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}
	ArquivoTeste.close();
	
	delete(aveN);

}

void Interfaces::reptilE(){
	bool venenoso;
	string tipo_veneno;
	
	cout << " Digite o Codigo do animal: " << endl;
	cin>> codigo;
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
	cout<< " Digite o pais de origem: " << endl;
	cin >> pais_de_origem;

	classe = "reptil";
	Animal* reptilE = new Reptil(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo, venenoso, tipo_veneno);

	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Réptil Exótico Cadastrado!!" << std::endl;

		ArquivoTeste << *reptilE;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	ArquivoTeste.close();

	delete(reptilE);
}

void Interfaces::reptilN(){
	bool venenoso;
	string tipo_veneno;
	
	cout << " Digite o Codigo do animal: " << endl;
	cin>> codigo;
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
	cout<< " Digite a UF de origem: " << endl;
	cin >> uf_origem;
	cout<< " Digite a autorização: " << endl;
	cin >> autorizacao;

	classe = "reptil";
	Animal* reptilN = new Reptil(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo, venenoso, tipo_veneno);

	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Réptil Exótico Cadastrado!!" << std::endl;

		ArquivoTeste << *reptilN;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	ArquivoTeste.close();

	delete(reptilN);
}
void Interfaces::anfibioE(){
	int total_de_muda, dia, mes, ano;

	cout << " Digite o Codigo do animal: " << endl;
	cin>> codigo;
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
	cout<< " Digite o pais de origem: " << endl;
	cin >> pais_de_origem;

	Date ultima_muda(dia,mes,ano);

	classe = "anfibio";
	Animal* anfibioE = new Anfibio(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo , total_de_muda, ultima_muda);

	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Anfíbio Exótico Cadastrado!!" << std::endl;

		ArquivoTeste << *anfibioE;
		ArquivoTeste << " \n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	ArquivoTeste.close();
	
	delete(anfibioE);
}

void Interfaces::anfibioN(){
	int total_de_muda, dia, mes, ano;

	
	cout << " Digite o Codigo do animal: " << endl;
	cin>> codigo;
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
	cout<< " Digite a UF de origem: " << endl;
	cin >> uf_origem;
	cout<< " Digite a autorização: " << endl;
	cin >> autorizacao;

	Date ultima_muda(dia,mes,ano);

	classe = "anfibio";
	Animal* anfibioN = new Anfibio(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo , total_de_muda, ultima_muda);

	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Anfíbio Nativo Cadastrado!!" << std::endl;

		ArquivoTeste << *anfibioN;
		ArquivoTeste << " \n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	ArquivoTeste.close();
	
	delete(anfibioN);
}


void Interfaces::veterinario(){
	
	std::string cnmv;
	
	cout << " Digite o Codigo do Veternario: " << endl;
	cin>> codigo;
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

	Funcionario* v = new Veterinario(codigo,id, m_nome, m_cpf, m_idade,m_tipo_sanguineo, m_fator_rh, m_especialidade, cnmv);

	ofstream ArquivoTeste1;
	ArquivoTeste1.open("funcionarios.txt",ios::app);
	if(ArquivoTeste1.is_open()){

		std::cout << "Veterinário cadastrado!!" << std::endl;

		ArquivoTeste1 << *v;
		ArquivoTeste1 << " \n";

	}else{

		std::cout << " Não foi possivel cadastrar o funcionario! " << std::endl;

	}

	ArquivoTeste1.close();
	
	delete(v);

}

void Interfaces::tratador(){
	
	std::string cnmv;
	
	cout << " Digite o Codigo do tratador: " << endl;
	cin>> codigo;
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
	cout<< " Digite o nivel de segurança: " << endl;
	cin >> nivel_de_seguranca;

	Funcionario* t = new Tratador(codigo, id, m_nome, m_cpf, m_idade,m_tipo_sanguineo, m_fator_rh, m_especialidade, nivel_de_seguranca);

	ofstream ArquivoTeste1;
	ArquivoTeste1.open("funcionarios.txt",ios::app);
	if(ArquivoTeste1.is_open()){

		std::cout << "Tratador cadastrado!!" << std::endl;;

		ArquivoTeste1 << *t;
		ArquivoTeste1 << " \n";

	}else{

		std::cout << " Não foi possivel cadastrar o funcionario! " << std::endl;

	}

	ArquivoTeste1.close();
	
	delete(t);

}
