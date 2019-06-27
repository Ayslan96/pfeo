/**
* @file interfaces.cpp
* @brief Métodos da Classe Interfaces
*/

/** @brief Inclui a biblioteca interfaces.h */
#include "../include/interfaces.h"

/** @brief Inclui a biblioteca fstream */
#include <fstream>

/** @brief Inclui a biblioteca iostream */
#include <iostream>

using std::cout;
using std::endl;


int Animal::total = 0;

/**
* @brief Método de impressão do Sistema.
* @param  Não possui parâmetros.
* @return Não possui retorno.
*/
void Interfaces::exibeNome(){

	cout << " #######      ########    ################    ###########    ########    #####      ######## " << endl;
	cout << " ##     #     ########    ################    ###########    ########    #    #     #      # " << endl;
	cout << " ##      #    #                  ##           ##             #           ##    #    #      # " << endl;
    cout << " ##      #    #                  ##           ##             #           ##    #    #      # " << endl;	
	cout << " ##      #    #                  ##           ######         #           ##    #    #      # " << endl;
	cout << " ##     #     ########           ##           ######         ########    ##   #     ######## " << endl;
	cout << " #######      ########           ##           ##             ########    #####      ######## " << endl;
	cout << " ##           #                  ##           ##             #           ####       #      # " << endl;
	cout << " ##           #                  ##           ##             #           ## ##      #      # " << endl;
	cout << " ##           #                  ##           ##             #           ##  ##     #      # " << endl;
	cout << " ##           ########           ##           ##             ########    ##   ##    #      # " << endl;
	cout << " ##           ########           ##           ##             ########    ##    ##   #      # " << endl;
};

/**
* @brief Método de cadastramento de um Mamídero Exótico.
* @param  Não possui parâmetros.
* @return Não possui retorno.
*/
void Interfaces::mamiferoE(){

	/** @brief Criação das variáveis referentes aos atributos particulares do animal */
	string cor_do_pelo;

	/** @brief Saídas e entradas para receber os atributos de um Mamífero Exótico */
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

	/** @brief Instancia um objeto Mamífero Exótico */
	Animal* mamiferoE = new Mamifero(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo, cor_do_pelo);
	
	/** @brief Criação da variável ofstream para escrever o Mamífero Exótico no arquivo animais.txt*/
	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Mamífero Exótico Cadastrado!!" << std::endl;

		ArquivoTeste << *mamiferoE;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	/** @brief Fechando o arquivo através do método close */
	ArquivoTeste.close();

	/** @brief Liberando a memória */
	delete(mamiferoE);


}

/**
* @brief Método de cadastramento de um Mamídero Nativo.
* @param  Não possui parâmetros.
* @return Não possui retorno.
*/
void Interfaces::mamiferoN(){

	/** @brief Criação das variáveis referentes aos atributos particulares do animal */
	string cor_do_pelo;

	/** @brief Saídas e entradas para receber os atributos de um Mamífero Nativo*/
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

	/** @brief Instancia um objeto do tipo Mamífero Nativo */
	Animal* mamiferoN = new Mamifero(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo, cor_do_pelo);
	

	/** @brief Criação da variável ofstream para escrever o Mamífero Nativo no arquivo animais.txt*/
	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Mamífero Nativo Cadastrado!!" << std::endl;

		ArquivoTeste << *mamiferoN;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}


	/** @brief Fechando o arquivo através do método close */
	ArquivoTeste.close();

	/** @brief Liberando a memória */
	delete(mamiferoN);


}

/*
* @brief Método de cadastramento de uma Ave Exótica.
* @param  Não possui parâmetros.
* @return Não possui retorno.
*/
void Interfaces::aveE(){

	/** @brief Criação das variáveis referentes aos atributos particulares do animal */
	double tamanho_do_bico;
	double envergadura_das_asas;
	
	/** @brief Saídas e entradas para receber os atributos de uma Ave Exótica */
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


	/** @brief Instancia um objeto do tipo Ave exótica */
	Animal* aveE = new Ave(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo ,tamanho_do_bico, envergadura_das_asas);

	/** @brief Criação da variável ofstream para escrever a Ave Exótica no arquivo animais.txt*/
	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Ave Exótica Cadastrada!!" << std::endl;

		ArquivoTeste << *aveE;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	/** @brief Fechando o arquivo através do método close */	
	ArquivoTeste.close();
	
	/** @brief Liberando a memória */
	delete(aveE);

}

/*
* @brief Método de cadastramento de uma Ave Nativa.
* @param  Não possui parâmetros.
* @return Não possui retorno.
*/
void Interfaces::aveN(){

	/** @brief Criação das variáveis referentes aos atributos particulares do animal */
	double tamanho_do_bico;
	double envergadura_das_asas;

	/** @brief Saídas e entradas para receber os atributos de uma Ave Nativa */
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

	/** @brief Instancia um objeto do tipo Ave Nativa */
	Animal* aveN = new Ave(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo ,tamanho_do_bico, envergadura_das_asas);

	/** @brief Criação da variável ofstream para escrever a Ave Nativa no arquivo animais.txt*/
	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Ave Nativa Cadastrada!!" << std::endl;;

		ArquivoTeste << *aveN;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	/** @brief Fechando o arquivo através do método close */	
	ArquivoTeste.close();
	
	/** @brief Liberando a memória */
	delete(aveN);

}

/*
* @brief Método de cadastramento de um Rétil Exótico.
* @param  Não possui parâmetros.
* @return Não possui retorno.
*/
void Interfaces::reptilE(){

	/** @brief Criação das variáveis referentes aos atributos particulares do animal */
	double tamanho_do_bico;
	bool venenoso;
	string tipo_veneno;
	
	/** @brief Saídas e entradas para receber os atributos de um Rétil Exótico */
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

	/** @brief Instancia um objeto do tipo Rétil Exótico */
	Animal* reptilE = new Reptil(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo, venenoso, tipo_veneno);

	/** @brief Criação da variável ofstream para escrever o Rétil Exótico no arquivo animais.txt*/
	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Réptil Exótico Cadastrado!!" << std::endl;

		ArquivoTeste << *reptilE;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}


	/** @brief Fechando o arquivo através do método close */
	ArquivoTeste.close();

	/** @brief Liberando a memória */
	delete(reptilE);
}

/*
* @brief Método de cadastramento de um Rétil Nativo.
* @param  Não possui parâmetros.
* @return Não possui retorno.
*/
void Interfaces::reptilN(){

	/** @brief Criação das variáveis referentes aos atributos particulares do animal */
	bool venenoso;
	string tipo_veneno;
	
	/** @brief Saídas e entradas para receber os atributos de um Rétil Nativo */
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

	/** @brief Instancia um objeto do tipo Rétil Nativa */
	Animal* reptilN = new Reptil(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo, venenoso, tipo_veneno);

	/** @brief Criação da variável ofstream para escrever o Rétil Nativo no arquivo animais.txt*/
	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Réptil Exótico Cadastrado!!" << std::endl;

		ArquivoTeste << *reptilN;
		ArquivoTeste << "\n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	/** @brief Fechando o arquivo através do método close */
	ArquivoTeste.close();

	/** @brief Liberando a memória */
	delete(reptilN);
}

/*
* @brief Método de cadastramento de um Anfíbio Exótico.
* @param  Não possui parâmetros.
* @return Não possui retorno.
*/
void Interfaces::anfibioE(){

	/** @brief Criação das variáveis referentes aos atributos particulares do animal */
	int total_de_muda, dia, mes, ano;

	/** @brief Saídas e entradas para receber os atributos de um Anfíbio Exótico */
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


	/** @brief Instancia um objeto do tipo Anfíbio Exótico */
	Animal* anfibioE = new Anfibio(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo , total_de_muda, ultima_muda);

	/** @brief Criação da variável ofstream para escrever o Anfíbio Exótico no arquivo animais.txt*/
	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Anfíbio Exótico Cadastrado!!" << std::endl;

		ArquivoTeste << *anfibioE;
		ArquivoTeste << " \n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	/** @brief Fechando o arquivo através do método close */
	ArquivoTeste.close();
	
	/** @brief Liberando a memória */
	delete(anfibioE);
}

/*
* @brief Método de cadastramento de um Anfíbio Nativo.
* @param  Não possui parâmetros.
* @return Não possui retorno.
*/
void Interfaces::anfibioN(){

	/** @brief Criação das variáveis referentes aos atributos particulares do animal */
	int total_de_muda, dia, mes, ano;

	/** @brief Saídas e entradas para receber os atributos de um Anfíbio Nativo */
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

	/** @brief Instancia um objeto do tipo Anfíbio Nativo */
	Animal* anfibioN = new Anfibio(codigo, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo , total_de_muda, ultima_muda);

	/** @brief Criação da variável ofstream para escrever o Anfíbio Nativo no arquivo animais.txt*/
	ofstream ArquivoTeste;
	ArquivoTeste.open("animais.txt",ios::app);
	if(ArquivoTeste.is_open()){
		std::cout << "Anfíbio Nativo Cadastrado!!" << std::endl;

		ArquivoTeste << *anfibioN;
		ArquivoTeste << " \n";

	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}

	/** @brief Fechando o arquivo através do método close */
	ArquivoTeste.close();
	
	/** @brief Liberando a memória */
	delete(anfibioN);
}

/*
* @brief Método de cadastramento de um Veterinário.
* @param  Não possui parâmetros.
* @return Não possui retorno.
*/
void Interfaces::veterinario(){
	
	/** @brief Criação das variáveis referentes aos atributos particulares do funcionário */
	std::string cnmv;
	
	/** @brief Saídas e entradas para receber os atributos de um Veterinário */
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

	/** @brief Instancia um objeto do tipo Veterinário */
	Funcionario* v = new Veterinario(codigo,id, m_nome, m_cpf, m_idade,m_tipo_sanguineo, m_fator_rh, m_especialidade, cnmv);

	/** @brief Criação da variável ofstream para escrever o Veterinário no arquivo animais.txt*/
	ofstream ArquivoTeste1;
	ArquivoTeste1.open("funcionarios.txt",ios::app);
	if(ArquivoTeste1.is_open()){

		std::cout << "Veterinário cadastrado!!" << std::endl;

		ArquivoTeste1 << *v;
		ArquivoTeste1 << " \n";

	}else{

		std::cout << " Não foi possivel cadastrar o funcionario! " << std::endl;

	}

	/** @brief Fechando o arquivo através do método close */
	ArquivoTeste1.close();
	
	/** @brief Liberando a memória */
	delete(v);

}

/*
* @brief Método de cadastramento de um Tratador.
* @param  Não possui parâmetros.
* @return Não possui retorno.
*/
void Interfaces::tratador(){
	
	/** @brief Criação das variáveis referentes aos atributos particulares do funcionário */
	std::string cnmv;
	
	/** @brief Saídas e entradas para receber os atributos de um Tratador */
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

	/** @brief Instancia um objeto do tipo Tratador */
	Funcionario* t = new Tratador(codigo, id, m_nome, m_cpf, m_idade,m_tipo_sanguineo, m_fator_rh, m_especialidade, nivel_de_seguranca);

	/** @brief Criação da variável ofstream para escrever o tratador no arquivo animais.txt*/
	ofstream ArquivoTeste1;
	ArquivoTeste1.open("funcionarios.txt",ios::app);
	if(ArquivoTeste1.is_open()){

		std::cout << "Tratador cadastrado!!" << std::endl;;

		ArquivoTeste1 << *t;
		ArquivoTeste1 << " \n";

	}else{

		std::cout << " Não foi possivel cadastrar o funcionario! " << std::endl;

	}

	/** @brief Fechando o arquivo através do método close */
	ArquivoTeste1.close();
	
	/** @brief Liberando a memória */	
	delete(t);

}
