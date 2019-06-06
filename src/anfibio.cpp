#include "../include/anfibio.h"

Anfibio::Anfibio(void){}

Anfibio::Anfibio(int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo,
		ìnt total_de_mudas, date ultima_muda):
	Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
		m_total_de_mudas(total_de_mudas),m_ultima_muda(ultima_muda) {}
	


Anfibio::~Anfibio(){}

void Ave::imprime(){

	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_total_de_mudas << m_ultima_muda << endl;

}
