#include <iostream>
#include <string>
using namespace std;

class Animal {

private:

virtual std::ostream& print(std::ostream&) const = 0;

protected:

	int m_id;
	std::string m_classe;
	std::string m_nome_cientifico;
	char m_sexo;
	double m_tamanho;
	std::string m_dieta;
	std::string m_nome_batismo;

public:

Animal(int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo);
~Animal();
virtual void imprime()=0;

friend std::ostream& operator << (std::ostream& os, const Animal& b) {
return b.print(os);
}

};

Animal::Animal(int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo):
m_id(id), m_classe(classe), m_nome_cientifico(nome_cientifico), m_sexo(sexo), m_tamanho(tamanho), 
m_dieta(dieta), m_nome_batismo(nome_batismo) {}

Animal::~Animal(){}

//cabeçalho
class Ave: public Animal {

private:
	double m_tamanho_do_bico_cm;
	double m_envergadura_das_asas;
	std::ostream& print(std::ostream& os) const {
	return os <<"Id: "<<m_id <<", Classe: " << m_classe <<", Nome Cientifico: " <<m_nome_cientifico <<", Sexo: "<<m_sexo 
			  <<", Tamanho: " <<m_tamanho <<", Dieta: "<<m_dieta <<", Nome de Batismo: "<<m_nome_batismo
			  <<", Tamanho do Bico em cm: " <<m_tamanho_do_bico_cm << ", Envergadura das Asas: " <<m_envergadura_das_asas << endl;
}

public:
	
	void imprime();
	Ave(int,string,string,char,int,string,string,double,double);
	~Ave();

};


//cpp

Ave::Ave(int m_id, string m_classe, string m_nome_cientifico, char m_sexo, 
int m_tamanho, string m_dieta, string m_nome_batismo, double tamanho_do_bico_cm,
double envergadura_das_asas):Animal(m_id, m_classe, m_nome_cientifico, 
m_sexo, m_tamanho, m_dieta, m_nome_batismo),
m_tamanho_do_bico_cm(tamanho_do_bico_cm),m_envergadura_das_asas(envergadura_das_asas){}

Ave::~Ave(){}

void Ave::imprime(){

	cout<<m_id <<m_classe <<m_nome_cientifico <<m_sexo <<m_tamanho
	<<m_dieta <<m_nome_batismo <<m_tamanho_do_bico_cm <<m_envergadura_das_asas<<endl;

}

int main(){

	Ave teste(12,"mamifero","nathanliss",'f',1.50,"cenoura","nathan",2.68, 3.1); //erro na compilação

	std::cout << teste <<endl;


return 0;
}