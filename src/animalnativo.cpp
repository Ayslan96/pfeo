/**
* @file animalnativo.cpp
* @brief Métodos da Classe AnimalNativo
*/

/** @brief Inclui a biblioteca animalnativo.h */
#include "../include/animalnativo.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
AnimalNativo::AnimalNativo(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo.
*/
AnimalNativo::AnimalNativo(int id, string classe, string nome_cientifico, char sexo, 
	int tamanho, string dieta, string nome_batismo, string uf_oriegm, string autorizacao):
Animal(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, 
	m_dieta, m_nome_batismo), m_uf_origem(m_uf_origem), m_autorizacao(m_autorizacao){}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
AnimalNativo::~AnimalNativo(){}