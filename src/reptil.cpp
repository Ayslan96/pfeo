#include "../include/reptil.h"

Reptil::Reptil(void){}

Reptil::Reptil(int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, string m_nome_batismo,
		bool m_venenoso, string m_tipo_de_veneno):	Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
		m_venenoso(m_venenoso),m_tipo_de_veneno(m_tipo_de_veneno) {}

Reptil::~Reptil(){}

void Reptil::imprime(){

	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_venenoso << m_tipo_de_veneno << endl;

}