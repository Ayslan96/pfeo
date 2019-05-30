#include "../include/anfibio.h"

Anfibio::Anfibio(int id, std::string classe, std::string nome_cientifico, 
		 char sexo, double tamanho, std::string dieta,
		 std::string nome_batismo, int total_de_mudas,date ultima_muda){

	this->m_id = m_id;
	this->m_class = m_class;
	this->m_nome_cientifico = m_nome_cientifico;
	this->m_sexo = m_sexo;
	this->m_tamanho = m_tamanho;
	this->m_dieta = m_dieta;
	this->m_nome_batismo = m_nome_batismo;
	this->m_total_de_mudas = m_total_de_mudas;
	
}

Anfibio::~Anfibio(){}
