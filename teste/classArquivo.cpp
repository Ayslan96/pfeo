#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){
vector<string> principal;

ifstream arquivoDeEntrada;/*!<Instancia um objeto da classe  'ifstream'*/
string S, aux; /*!<Variáveis auxiliares*/

arquivoDeEntrada.open ("animais.txt", ios::in); /*!<O Objeto arquivoDeEntrada usa o arquivo arquivo.txt como entrada*/

if (!arquivoDeEntrada)
{	
	/*!<Caso haja algum problema na abertura de arquivo.txt a mensagem é exibida*/
		cout << "Problemas na abertura do arquivo" << endl;
		exit(1);
	}

	while(!arquivoDeEntrada.eof()){
		/*!<Enquanto o arquivo não chegar ao final as instruções do laço serão executadas*/
		getline(arquivoDeEntrada, S); /*!<Insere o conteúdo do objeto arquivoDeEntrada na string S*/

		std::istringstream iss(S); /*!<Instancia iss com S como entrada*/
		std::string token; /*!<Cria string token*/
		while (std::getline(iss, token, ';')) 
		{
			/*!<Enquanto houverem separadores ',' as instruções do laço serão executadas*/
			principal.push_back(token); /*!<Pega o numero no formato de string, converte e insere na memória*/
			if(token=="/"){
							

				switch (stoi(principal[0])){

				case 11:
					cout<<principal.size()<<std::endl;

					std::cout << "11 "/*cod*/ << (stoi(principal[1]))/*id*/ <<" " <<principal[2] /*classe*/ <<" "<<principal[3] /*nome cientifico*/ <<" "<<principal[4] /*sexo*/<<" "<<stoi((principal[5])) /*tamanho*/<<" " <<principal[6]/*dieta*/ <<" "
					<<principal[7]/*nome batismo*/<<" " <<(stod(principal[8])) /*tam bico*/<<" " <<(stod(principal[9])) /*env. asas*/<<" "<<principal[10]/*aut. ibama*/ <<" "<<principal[11]/*uf origem*/<<" "<<principal[12]/*cidade origem*/ <<std::endl;
					
					/*AveNativo(11,stoi (principal[1]), principal[2], principal[3], principal[4], stoi(principal[5]), principal[6], 
					principal[7], stod(principal[8]), stod(principal[9]),principal[10], principal[11], principal[12] );*/
					
					principal.clear();
					break;
					
				case 12:
					cout<<principal.size()<<std::endl;
				
					std::cout << "11 "/*cod*/ << (stoi(principal[1]))/*id*/ <<" " <<principal[2] /*classe*/ <<" "<<principal[3] /*nome cientifico*/ <<" "<<principal[4] /*sexo*/<<" "<<stoi((principal[5])) /*tamanho*/<<" " <<principal[6]/*dieta*/ <<" "
					<<principal[7]/*nome batismo*/<<" " <<(stod(principal[8])) /*tam bico*/<<" " <<(stod(principal[9])) /*env. asas*/<<" "<<principal[10]/*aut. ibama*/ <<" "<<principal[11]/*país origem*/ <<std::endl;
					 /*
					AveExotico(12, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], 
					principal[6], stod (principal[7]), stod(principal[8]), principal[9],principal[10],principal[11] );
					principal.clear();*/
					
					principal.clear();
					break;
					
				case 21: 
					cout<<principal.size()<<std::endl;

					std::cout << "21 "/*cod*/ << (stoi(principal[1]))/*id*/ <<" " <<principal[2] /*classe*/ <<" "<<principal[3] /*nome cientifico*/ <<" "<<principal[4] /*sexo*/<<" "<<stoi((principal[5])) /*tamanho*/<<" " <<principal[6]/*dieta*/ <<" "
					<<principal[7]/*nome batismo*/<<" " <<(stoi(principal[8])) /*total mudas*/<<" " <<principal[9] /*date ult. muda*/<<" "<<principal[10]/*aut. ibama*/ <<" "<<principal[11]/*uf origem*/<<" "<<principal[12]/*cidade origem*/ <<std::endl;
					
					/*
					AnfibioNativo(21, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], principal[6],
					stoi(principal[7]), principal[8], principal[9], principal[10], principal[11], principal[12]);
					principal.clear();*/
					principal.clear();
					break;
					
				case 22:
					cout<<principal.size()<<std::endl;
					
					std::cout << "22 "/*cod*/ << (stoi(principal[1]))/*id*/ <<" " <<principal[2] /*classe*/ <<" "<<principal[3] /*nome cientifico*/ <<" "<<principal[4] /*sexo*/<<" "<<stoi((principal[5])) /*tamanho*/<<" " <<principal[6]/*dieta*/ <<" "
					<<principal[7]/*nome batismo*/<<" " <<(stoi(principal[8])) /*total mudas*/<<" " <<principal[9] /*date ult. muda*/<<" "<<principal[10]/*aut. ibama*/ <<" "<<principal[11]/*pais origem*/<<std::endl;
										
					/*
					AnfibioExotico(22, principal[1], principal[2], principal[3],stoi(principal[4]), principal[5],principal[6],
					stoi(principal[7]), principal[8], principal[9], principal[10],principal[11]);
					principal.clear();*/
					principal.clear();
					break;
				case 31:
					cout<<principal.size()<<std::endl;
					
					std::cout << "31 "/*cod*/ << (stoi(principal[1]))/*id*/ <<" " <<principal[2] /*classe*/ <<" "<<principal[3] /*nome cientifico*/ <<" "<<principal[4] /*sexo*/<<" "<<stoi((principal[5])) /*tamanho*/<<" " <<principal[6]/*dieta*/ <<" "
					<<principal[7]/*nome batismo*/<<" " <<principal[8]/*cor pelo*/ <<" "<<principal[9]/*aut. ibama*/ <<" "<<principal[10]/*uf origem*/<<" "<<principal[11]/*cidade origem*/ <<std::endl;
					
					/*MamiferoNativo(31, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], principal[6],
					principal[7], principal[8], principal[9], principal[10], principal[11]);*/
					principal.clear();
					break;
					
				case 32:
					cout<<principal.size()<<std::endl;
					
					std::cout << "32 "/*cod*/ << (stoi(principal[1]))/*id*/ <<" " <<principal[2] /*classe*/ <<" "<<principal[3] /*nome cientifico*/ <<" "<<principal[4] /*sexo*/<<" "<<stoi((principal[5])) /*tamanho*/<<" " <<principal[6]/*dieta*/ <<" "
					<<principal[7]/*nome batismo*/<<" " <<principal[8]/*cor pelo*/ <<" "<<principal[9]/*aut. ibama*/ <<" "<<principal[10]/*país origem*/<<std::endl;
										
					/*MamiferoExotico(31, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], principal[6],
					principal[7], principal[8], principal[9], principal[10]);*/
					principal.clear();
					break;
					
				case 41:		
					cout<<principal.size()<<std::endl;
					
					std::cout << "41 "/*cod*/ << (stoi(principal[1]))/*id*/ <<" " <<principal[2] /*classe*/ <<" "<<principal[3] /*nome cientifico*/ <<" "<<principal[4] /*sexo*/<<" "<<stoi((principal[5])) /*tamanho*/<<" " <<principal[6]/*dieta*/ <<" "
					<<principal[7]/*nome batismo*/<<" " <<principal[8]/*venenoso?*/<<" " <<principal[9]/*tipo veneno*/ <<" "<<principal[10]/*aut. ibama*/ <<" "<<principal[11]/*uf origem*/<<" "<<principal[12]/*cidade origem*/ <<std::endl;
										
					/*ReptilNativo(41, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], principal[6],
					bool m_venenoso(principal[7]), principal[8], principal[9], principal[10], principal[11], principal[12]);
					principal.clear();*/
					principal.clear();
					break;
					
				case 42:
					cout<<principal.size()<<std::endl;
					std::cout << "42 "/*cod*/ << (stoi(principal[1]))/*id*/ <<" " <<principal[2] /*classe*/ <<" "<<principal[3] /*nome cientifico*/ <<" "<<principal[4] /*sexo*/<<" "<<stoi((principal[5])) /*tamanho*/<<" " <<principal[6]/*dieta*/ <<" "
					<<principal[7]/*nome batismo*/<<" " <<principal[8]/*venenoso?*/<<" " <<principal[9]/*tipo veneno*/ <<" "<<principal[10]/*aut. ibama*/ <<" "<<principal[11]/*país origem*/<<" " <<std::endl;						
					/*
					ReptilExotico(41, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], principal[6],
					bool m_venenoso(principal[7]), principal[8], principal[9], principal[10], principal[11]);
					principal.clear();*/
					principal.clear();
					break;
				}}
			
			
		}
}

	/*for (int i = 0; i< principal.size();i++){
		cout<<principal[i]<<" ";
	}*/
	arquivoDeEntrada.close();/*!<Fecha o arquivo.txt*/
}

