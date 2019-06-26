/**
* @file animalnativo.cpp
* @brief Métodos da Classe AnimalNativo
*/

/** @brief Inclui a biblioteca animalnativo.h */
#include "../include/animalnativo.h"
#include "../include/animalsilvestre.h"
/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
AnimalNativo::AnimalNativo(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo.
*/
AnimalNativo::AnimalNativo(string m_autorizacao_ibama, string m_uf_origem, string m_cidade_origem):
						  AnimalSilvestre(m_autorizacao_ibama),m_uf_origem(m_uf_origem), m_cidade_origem(m_cidade_origem){}


/**
* @brief Método destrutor.
* @return Não possui retorno
*/
AnimalNativo::~AnimalNativo(){}
