#include "../include/ave.h"

Ave::	Ave(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, std::sstring nome_batismo, double tamanho_do_bico_cm, double envergadura_das_asas){

	this->m_id = m_id;
	this->m_class = m_class;
	this->m_nome_cientifico = m_nome_cientifico;
	this->m_sexo = m_sexo;
	this->m_tamanho = m_tamanho;
	this->m_dieta = m_dieta;
	this->m_nome_batismo = m_nome_batismo;
	this->m_tamanho_do_bico_cm = m_tamanho_do_bico_cm;
	this->m_envergadura_das_asas = m_envergadura_das_asas; 
}

Ave::~Ave(){}