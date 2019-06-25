/**
* @file animalexotico.cpp
* @brief Métodos da Classe AnimalExotico
*/

/** @brief Inclui a biblioteca AnimalExotico.h */
#include "../include/animalexotico.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
AnimalExotico::AnimalExotico(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo.
*/
AnimalExotico::AnimalExotico(int m_codigo,int m_id, string m_classe, string m_nome_cientifico, char m_sexo, 
	int m_tamanho, string m_dieta, string m_nome_batismo, string m_pais_origem):
Animal(m_codigo,m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, 
	m_dieta, m_nome_batismo), m_pais_origem(m_pais_origem){}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
AnimalExotico::~AnimalExotico(){}
