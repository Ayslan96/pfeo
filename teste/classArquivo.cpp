#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){
	
//parte dos animais
vector<string> animais;

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
			animais.push_back(token); /*!<Pega o numero no formato de string, converte e insere na memória*/
			if(token=="|"){	

				switch (stoi(animais[0])){

				case 11:
					AveNativo(11,stoi (animais[1]), animais[2], animais[3], animais[4], stoi(animais[5]), animais[6], 
					animais[7], stod(animais[8]), stod(animais[9]),animais[10], animais[11], animais[12] );
					animais.clear();
					break;
					
				case 12:
					AveExotico(12, animais[1], animais[2], animais[3], stoi(animais[4]), animais[5], 
					animais[6], stod (animais[7]), stod(animais[8]), animais[9],animais[10],animais[11] );
					animais.clear();
					break;
					
				case 21: 
					AnfibioNativo(21, animais[1], animais[2], animais[3], stoi(animais[4]), animais[5], animais[6],
					stoi(animais[7]), animais[8], animais[9], animais[10], animais[11], animais[12]);
					animais.clear();
					break;
					
				case 22:
					AnfibioExotico(22, animais[1], animais[2], animais[3],stoi(animais[4]), animais[5],animais[6],
					stoi(animais[7]), animais[8], animais[9], animais[10],animais[11]);
					animais.clear();
					break;
				case 31:
					MamiferoNativo(31, animais[1], animais[2], animais[3], stoi(animais[4]), animais[5], animais[6],
					animais[7], animais[8], animais[9], animais[10], animais[11]);
					animais.clear();
					break;
					
				case 32:
					MamiferoExotico(31, animais[1], animais[2], animais[3], stoi(animais[4]), animais[5], animais[6],
					animais[7], animais[8], animais[9], animais[10]);
					animais.clear();
					break;
					
				case 41:		
					ReptilNativo(41, animais[1], animais[2], animais[3], stoi(animais[4]), animais[5], animais[6],
					bool (m_venenoso(animais[7])), animais[8], animais[9], animais[10], animais[11], animais[12]);
					animais.clear();
					break;
					
				case 42:
					ReptilExotico(41, animais[1], animais[2], animais[3], stoi(animais[4]), animais[5], animais[6],
					bool (m_venenoso(animais[7])), animais[8], animais[9], animais[10], animais[11]);
					animais.clear();
					break;
				}}
			
			
		}
}

	/*for (int i = 0; i< animais.size();i++){
		cout<<animais[i]<<" ";
	}*/
	arquivoDeEntrada.close();/*!<Fecha o arquivo.txt*/
	
	
	//parte do tratador
	
vector<string> funcionarios;

ifstream arquivoDeEntrada2;/*!<Instancia um objeto da classe  'ifstream'*/
string S2, aux2; /*!<Variáveis auxiliares*/

arquivoDeEntrada2.open ("funcionarios.txt", ios::in); /*!<O Objeto arquivoDeEntrada usa o arquivo arquivo.txt como entrada*/

if (!arquivoDeEntrada2)
{	
	/*!<Caso haja algum problema na abertura de arquivo.txt a mensagem é exibida*/
		cout << "Problemas na abertura do arquivo" << endl;
		exit(1);
	}

	while(!arquivoDeEntrada2.eof()){
		/*!<Enquanto o arquivo não chegar ao final as instruções do laço serão executadas*/
		getline(arquivoDeEntrada2, S2); /*!<Insere o conteúdo do objeto arquivoDeEntrada na string S*/

		std::istringstream iss(S2); /*!<Instancia iss com S como entrada*/
		std::string token; /*!<Cria string token*/
		while (std::getline(iss, token, ';')) 
		{
			/*!<Enquanto houverem separadores ',' as instruções do laço serão executadas*/
			funcionarios.push_back(token); /*!<Pega o numero no formato de string, converte e insere na memória*/
			if(token=="|"){	

				switch (stoi(funcionarios[0])){

				case 11:
					Tratador(11,stoi(funcionarios[1]), funcionarios[2], funcionarios[3], stoi(funcionarios[4]), funcionarios[5], funcionarios[6], 
					funcionarios[7], stoi(funcionarios[8]));
					funcionarios.clear();
					break;
					
				case 12:
					Veterinario(12, stoi(funcionarios[1]), funcionarios[2], funcionarios[3], stoi(funcionarios[4]), funcionarios[5], funcionarios[6], 
					funcionarios[7], funcionarios[8]);
					funcionarios.clear();
					break;
				}
			}
		}
	}	
	arquivoDeEntrada2.close();/*!<Fecha o arquivo.txt*/
}

