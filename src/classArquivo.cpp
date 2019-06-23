#include "../include/classArquivo.h"

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

void Arquivo_Geral::cadastrar_Mamifero(Animal &m) {
	arquivoAnimal_.open("animais.txt",ios::app);
	if(arquivoAnimal_.is_open()){

		arquivoAnimal_ << "\n";
	}else{
		std::cout << " Não foi possivel cadastrar o animal! " << std::endl;
	}
	
	fecharArquivo_Animal();
}

void Arquivo_Geral::cadastrar_Tratador(Tratador &t) {

	arquivoFuncionario_.open("funcionarios.txt",ios::app);
	if(arquivoFuncionario_.is_open()){
		arquivoFuncionario_ << t;
		arquivoFuncionario_ << "\n";
	}else{
		std::cout << " Não foi possivel cadastrar o funcionário! " << std::endl;
	}
	
	fecharArquivo_Funcionario();
}


void Arquivo_Geral::fecharArquivo_Funcionario(){
	arquivoFuncionario_.close();
	arquivoFuncionario.close();
} 

void Arquivo_Geral::fecharArquivo_Animal(){
	arquivoAnimal_.close();
	arquivoAnimal.close();
} 

