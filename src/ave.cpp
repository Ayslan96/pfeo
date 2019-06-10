#include "../include/ave.h"

Ave::Ave(void){}

Ave::Ave(int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo,
		double tamanho_do_bico_cm, double envergadura_das_asas):
	Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo),
		m_tamanho_do_bico_cm(tamanho_do_bico_cm),m_envergadura_das_asas(envergadura_das_asas) {}

Ave::~Ave(){}

void Ave::imprime(){

	cout <<m_id <<m_classe <<m_nome_cientifico <<m_sexo <<m_tamanho
	<<m_dieta <<m_nome_batismo <<m_tamanho_do_bico_cm <<m_envergadura_das_asas << endl;

}