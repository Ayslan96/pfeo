#include "../include/anfibio.h"

Anfibio::Anfibio(void){}

Anfibio::Anfibio(int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo,
		int total_de_mudas, Date ultima_muda):
	Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
		m_total_de_mudas(total_de_mudas), m_ultima_muda(ultima_muda) {}
	


Anfibio::~Anfibio(){}

void Anfibio::imprime(){

	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_total_de_mudas << m_ultima_muda << endl;

}

//setters
	void Anfibio::setM_id(int id){
		m_id = id;
	}
	void Anfibio::setM_classe(string classe){
		m_classe = classe;
	}
	void Anfibio::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void Anfibio::setM_sexo(char sexo){
		m_sexo= sexo;
	}
	void Anfibio::setM_tamanho(double tamanho){
		m_tamanho= tamanho;
	}
	void Anfibio::setM_dieta(string dieta){
		m_dieta= dieta;
	}
	void Anfibio::setM_nome_batismo(string nome_batismo){
		m_nome_batismo= nome_batismo;
	}
	void Anfibio::setM_total_de_mudas(int total_de_mudas){
		m_total_de_mudas= total_de_mudas;
	}
	//void setM_ultima_muda(Date ultima_muda){
		//m_ultima_muda = ultima_muda;
	//}

//getters
	int Anfibio::getM_id(){
		return m_id;
	}
	string Anfibio::getM_classe(){
		return m_classe;
	}
	string Anfibio::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char Anfibio::getM_sexo(){
		return m_sexo;
	}
	double Anfibio::getM_tamanho(){
		return m_tamanho;
	}
	string Anfibio::getM_dieta(){
		return m_dieta;
	}
	string Anfibio::getM_nome_batismo(){
		return m_nome_batismo;
	}

	int Anfibio::getM_total_de_mudas(){
		return m_total_de_mudas;
	}

	//Date Anfibio::getM_ultima_muda(){
		//return m_ultima_muda;
	//}