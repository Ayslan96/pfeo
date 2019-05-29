#include "../include/animal.h"

Animal::Animal(int m_id, std::string m_class, std::string m_nome_cientifico, char m_sexo, double m_tamanho, std::string m_dieta, std::string m_nome_batismo){
	this->m_id = m_id;
	this->m_class = m_class;
	this->m_nome_cientifico = m_nome_cientifico;
	this->m_sexo = m_sexo;
	this->m_tamanho = m_tamanho;
	this->m_dieta = m_dieta;
	this->m_nome_batismo;
}