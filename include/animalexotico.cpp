#include "animalexotico.h"

AnimalExotico::AnimalExotico(void){}

AnimalExotico::AnimalExotico(std::string m_autorizacao_ibama, std::string m_pais_origem):AnimalSilvestre(m_autorizacao_ibama),
							m_pais_origem(m_pais_origem) {}

AnimalExotico::~AnimalExotico(){}