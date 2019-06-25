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

switch principal[0]:

case 
AnfibioNativo::AnfibioNativo(int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, string m_nome_batismo,
		int m_total_de_mudas, Date m_ultima_muda, string m_uf_origem, string m_autorizacao) 12


AnfibioExotico::AnfibioExotico(int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, string m_nome_batismo,
		int m_total_de_mudas, Date m_ultima_muda, string m_pais_origem): 11
	
AveNativo::AveNativo(int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, 
	string m_nome_batismo, double m_tamanho_do_bico_cm, double m_envergadura_das_asas, string m_pais_origem ):11

AveExotico::AveExotico(int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, 
	string m_nome_batismo, double m_tamanho_do_bico_cm, double m_envergadura_das_asas, string m_pais_origem ):10
	
	
MamiferoNativo::MamiferoNativo(int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		std::string m_cor_pelo, std::string m_autorizacao_ibama, std::string m_uf_origem, std::string m_autorizacao):11
		
MamiferoExotico::MamiferoExotico(int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		std::string m_cor_pelo, std::string m_autorizacao_ibama, std::string m_pais_origem):10
		
ReptilNativo::ReptilNativo(int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		bool m_venenoso, std::string m_tipo_de_veneno, std::string m_autorizacao_ibama, std::string m_uf_origem, std::string m_autorizacao):12

ReptilExotico::ReptilExotico(int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		bool m_venenoso, std::string m_tipo_de_veneno, std::string m_autorizacao_ibama, std::string m_pais_origem):11
