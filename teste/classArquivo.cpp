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
				cout<<principal.size();
					std::cout << "11 " << (stoi(principal[1])) <<" " <<principal[2] <<" "<<principal[3] <<" "<<principal[4] <<" "<<stoi((principal[5])) <<" " <<principal[6] <<" "
					<<principal[7]<<" " <<(stod(principal[8]))<<" " <<(stod(principal[9])) <<" "<<principal[10] <<" "<<principal[11]<<" "<<" "<<principal[12]<<std::endl;
					/*AveNativo(11,stoi (principal[1]), principal[2], principal[3], principal[4], stoi(principal[5]), principal[6], 
					principal[7], stod(principal[8]), stod(principal[9]),principal[10], principal[11] );*/
					principal.clear();
					
				/*case "12":
					AveExotico(12, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], 
					principal[6], stod (principal[7]), stod(principal[8]), principal[9],principal[10] );
					principal.clear();

				case "21": 

					AnfibioNativo(21, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], principal[6],
					stoi(principal[7]), principal[8], principal[9], principal[10], principal[11]);
					principal.clear();
					
				case '22':
				
					AnfibioExotico(22, principal[1], principal[2], principal[3],stoi(principal[4]), principal[5],principal[6],
					stoi(principal[7]), principal[8], principal[9], principal[10]);
					principal.clear();
				*/
				case 31:
					cout<<principal.size();
					std::cout << "31 " << stoi(principal[1]) <<" " <<principal[2] <<" "<<principal[3] <<" "<<principal[4] <<" "<<stoi(principal[5])<<" " <<principal[6] <<" "
					<<principal[7]<<" " <<principal[8]<<" " <<stod(principal[9]) <<" "<<principal[10] <<" "<<" "<<principal[11] <<std::endl;
					/*MamiferoNativo(31, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], principal[6],
					principal[7], principal[8], principal[9], principal[10]);*/
					principal.clear();
					
				case 32:
					cout<<principal.size();
					std::cout << "32 " << stoi(principal[1]) <<" " <<principal[2] <<" "<<principal[3] <<" "<<principal[4] <<" "<<stoi(principal[5])<<" " <<principal[6] <<" "
					<<principal[7]<<" " <<principal[8]<<" " <<stod(principal[9]) <<" "<<principal[10] <<" " <<std::endl;
					
					/*MamiferoExotico(31, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], principal[6],
					principal[7], principal[8], principal[9]);*/
					principal.clear();/*
					
				case "41":
					ReptilNativo(41, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], principal[6],
					bool m_venenoso(principal[7]), principal[8], principal[9], principal[10], principal[11]);
					principal.clear();
					
				case "42":
					ReptilExotico(41, principal[1], principal[2], principal[3], stoi(principal[4]), principal[5], principal[6],
					bool m_venenoso(principal[7]), principal[8], principal[9], principal[10]);
					principal.clear();*/
				}}
			
			
		}
}

	/*for (int i = 0; i< principal.size();i++){
		cout<<principal[i]<<" ";
	}*/
	arquivoDeEntrada.close();/*!<Fecha o arquivo.txt*/
}

