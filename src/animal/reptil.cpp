#include "reptil.h"
using std::cout;


Reptil::Reptil(int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, double m_tamanho, 
			   std::string m_dieta, std::string m_nome_batismo, bool m_venenoso, std::string m_tipo_veneno):
			   Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
		       m_venenoso(m_venenoso),m_tipo_veneno(m_tipo_veneno) {}

Reptil::~Reptil(){}

void Reptil::imprime(){

	std::cout <<m_id <<m_classe <<m_nome_cientifico <<m_sexo <<m_tamanho
	<<m_dieta <<m_nome_batismo <<m_venenoso <<m_tipo_veneno << std::endl;

}
