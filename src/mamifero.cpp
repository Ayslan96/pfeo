#include "../include/mamifero.h"

Mamifero::Mamifero(void){}

Mamifero::Mamifero(int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo,
		string cor_pelo):
	Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
		m_cor_pelo(cor_pelo) {}	

Mamifero::~Mamifero(){}

void Mamifero::imprime(){

	cout <<m_id <<m_classe <<m_nome_cientifico <<m_sexo <<m_tamanho
	<<m_dieta <<m_nome_batismo <<m_cor_pelo << endl;

}