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

arquivoDeEntrada.open ("funcionarios.txt", ios::in); /*!<O Objeto arquivoDeEntrada usa o arquivo arquivo.txt como entrada*/

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
		}
}

	for (int i = 0; i< principal.size();i++){
		cout<<principal[i]<<" ";
	}
	arquivoDeEntrada.close();/*!<Fecha o arquivo.txt*/
}

