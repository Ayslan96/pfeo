#include "../include/ave.h"

Ave::Ave(void){}

Ave::Ave(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, std::string nome_batismo,double tamanho_do_bico_cm, double envergadura_das_asas){
	this->m_tamanho_do_bico_cm = tamanho_do_bico_cm;
	this->m_envergadura_das_asas = envergadura_das_asas;
}

Ave::~Ave(){}



//g++ -o programa -Wall -O0 -std=c++11 testecarga.cpp animal.cpp ave.cpp -I./include
