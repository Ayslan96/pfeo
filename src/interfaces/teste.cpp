#include <iostream>
#include <map>

using namespace std;


class funcionario{ //classe base

private:
	string nome;
	
public:
	
	static int contador; //variavel contador de quantas vezes objetos foram instanciados.
	
	funcionario(){contador++;}
	
	void mapa(string name){
	
	map<int, string> mapa; //inicia map 
	mapa[contador] = name;
		
	// mostrando todos os elementos
	map<int, string>::iterator it;
	for(it = mapa.begin(); it != mapa.end(); ++it)
	cout << "A chave " << it->first << " => " << it->second 
		 << endl;
	}

	void setNome(string name){		
		nome = name;
		mapa(getNome());
	}

	string getNome(){return nome;}
	
};

class trabalhador : public funcionario{

};

int funcionario::contador = 0; //iniciando o contador fora da main

int main(){


	funcionario * fun = new funcionario[10];
	trabalhador * tra = new trabalhador[5];

	fun[0].setNome("ayslan");
	fun[1].setNome("camara");
	fun[2].setNome("de");
	fun[3].setNome("moura");
	fun[4].setNome("silveira");
	fun[5].setNome("ayslan");
	fun[6].setNome("camara");
	fun[7].setNome("de");
	fun[8].setNome("moura");
	fun[9].setNome("silveira");
	

	tra[0].setNome("teste");
	tra[1].setNome("teste");
	tra[2].setNome("teste");
	tra[3].setNome("teste");
	tra[4].setNome("teste");

return 0;
}