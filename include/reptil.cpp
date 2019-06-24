#include "../include/reptil.h"

Reptil::Reptil(void){}

Reptil::Reptil(int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo,
		bool venenoso, string tipo_de_veneno):
	Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
		m_venenoso(venenoso),m_tipo_de_veneno(tipo_de_veneno) {}

Reptil::~Reptil(){}

void Reptil::imprime(){

	cout <<m_id <<m_classe <<m_nome_cientifico <<m_sexo <<m_tamanho
	<<m_dieta <<m_nome_batismo <<m_venenoso <<m_tipo_de_veneno << endl;

}
