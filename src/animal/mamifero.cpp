#include "mamifero.h"

using std::cout;

Mamifero::Mamifero(int m_id, std::string m_classe, std::string m_nome_cientifico,
			char m_sexo, double m_tamanho, std::string m_dieta,
			std::string m_nome_batismo, std::string m_cor_pelo):Animal (m_id, m_classe,
			 m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
			 m_cor_pelo(m_cor_pelo){}

Mamifero::~Mamifero(){}

void Mamifero::imprime(){

	cout <<m_id <<m_classe <<m_nome_cientifico <<m_sexo <<m_tamanho
	<<m_dieta <<m_nome_batismo <<m_cor_pelo <<endl;

}
