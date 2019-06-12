#include "../include/mamifero.h"

Mamifero::Mamifero(void){}

Mamifero::Mamifero(int m_id, string m_classe, string m_nome_cientifico, char m_sexo, int m_tamanho, string m_dieta, string m_nome_batismo,
		string m_cor_pelo):Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
		m_cor_pelo(m_cor_pelo) {}

Mamifero::~Mamifero(){}

void Mamifero::imprime(){

	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_cor_pelo << endl;

}