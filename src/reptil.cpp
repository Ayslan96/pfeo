#include "../include/reptil.h"


Reptil::Reptil(int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo,
		bool venoso, string m_tipo_veneno):
	Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
		m_venoso(venoso),m_tipo_veneno(tipo_veneno) {}

Reptil::~Reptil(){}

void Reptil::imprime(){

	cout <<m_id <<m_classe <<m_nome_cientifico <<m_sexo <<m_tamanho
	<<m_dieta <<m_nome_batismo <<m_venoso <<m_tipo_veneno << endl;

}
