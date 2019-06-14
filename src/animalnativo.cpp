#include "../include/animalnativo.h"

AnimalNativo::AnimalNativo(void){}

AnimalNativo::AnimalNativo(string m_uf_origem,string m_autorizacao):
		std::string m_uf_origem (m_uf_origem), std::string m_autorizacao(m_autorizacao); {}

AnimalNativo::~AnimalNativo(){}