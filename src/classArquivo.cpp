#include "../include/classArquivo.h"

/*
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>
*/

void Arquivo_Geral::leituraArquivo_Animal(){
	arquivoAnimal.open("animais.txt");
	if(arquivoAnimal.is_open()){
		while(getline(arquivoAnimal,linha)){
			std::cout << linha << std::endl;
		}
	}else{
		std::cout << " Não foi possivel abrir o arquivo! " << std::endl;
	}
}


void Arquivo_Geral::leituraArquivo_Funcionario(){
	arquivoFuncionario.open("funcionarios.txt");
	if(arquivoFuncionario.is_open()){
		while(getline(arquivoFuncionario,linha)){
			std::cout << linha << std::endl;
		}
	}else{
		std::cout << " Não foi possivel abrir o arquivo! " << std::endl;
	}
}

void Arquivo_Geral::fecharArquivo_Funcionario(){
	arquivoFuncionario_.close();
	arquivoFuncionario.close();
} 

void Arquivo_Geral::fecharArquivo_Animal(){
	arquivoAnimal_.close();
	arquivoAnimal.close();
} 








//void memoria::preencheMemoria(){


//	ifstream arquivoDeEntrada;/*!<Instancia um objeto da classe  'ifstream'*/
//	string S, aux; /*!<Variáveis auxiliares*/

//	arquivoDeEntrada.open ("data/arquivo.txt", ios::in); /*!<O Objeto arquivoDeEntrada usa o arquivo arquivo.txt como entrada*/

//	if (!arquivoDeEntrada)
//	{	
		/*!<Caso haja algum problema na abertura de arquivo.txt a mensagem é exibida*/
//		cout << "Problemas na abertura do arquivo" << endl;
//		exit(1);
//	}

//	while(!arquivoDeEntrada.eof()){
		/*!<Enquanto o arquivo não chegar ao final as instruções do laço serão executadas*/
//		getline(arquivoDeEntrada, S); /*!<Insere o conteúdo do objeto arquivoDeEntrada na string S*/

//		std::istringstream iss(S); /*!<Instancia iss com S como entrada*/
//		std::string token; /*!<Cria string token*/

//		while (std::getline(iss, token, ',')) 
//		{
			/*!<Enquanto houverem separadores ',' as instruções do laço serão executadas*/
//			principal.push_back(stoi(token)); /*!<Pega o numero no formato de string, converte e insere na memória*/
//		}
	//}
///	arquivoDeEntrada.close();/*!<Fecha o arquivo.txt*/
//}

