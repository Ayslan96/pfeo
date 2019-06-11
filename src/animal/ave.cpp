#include "ave.h"

Ave::Ave(int m_id, string m_classe, string m_nome_cientifico, char m_sexo,
		 double m_tamanho, string m_dieta, string m_nome_batismo,
		double m_tamanho_do_bico_cm, double m_envergadura_das_asas):Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, 
		m_dieta, m_nome_batismo),m_tamanho_do_bico_cm(m_tamanho_do_bico_cm),
		m_envergadura_das_asas(m_envergadura_das_asas) {}

Ave::~Ave(){}

void Ave::imprime(){

	std::cout <<m_id <<m_classe <<m_nome_cientifico <<m_sexo <<m_tamanho
	<<m_dieta <<m_nome_batismo <<m_tamanho_do_bico_cm <<m_envergadura_das_asas << endl;

}