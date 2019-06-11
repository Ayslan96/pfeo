#include "anfibio.h"

using std::cout;
//Anfibio::Anfibio(void){}

Anfibio::Anfibio(int m_id, string m_classe, string m_nome_cientifico, char m_sexo, double m_tamanho, string m_dieta, string m_nome_batismo,
				 int m_total_de_mudas, string m_ultima_muda): //date ultima_muda):
				 Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo), 
				 m_total_de_mudas(m_total_de_mudas),m_ultima_data(m_ultima_muda) {}
	
Anfibio::~Anfibio(){}

void Anfibio::imprime(){

	cout <<m_id <<m_classe <<m_nome_cientifico <<m_sexo <<m_tamanho
	<<m_dieta <<m_nome_batismo <<m_total_de_mudas <<m_ultima_data << endl;

}
