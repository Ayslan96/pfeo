/**
* @file animalDomestico.cpp
* @brief Métodos da Classe AnimalDomestico
*/

/** @brief Inclui a biblioteca animalDomestico.h */
#include "../include/animaldomestico.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
AnimalDomestico::AnimalDomestico(void){}

/**
* @brief Método construtor padronizado.
* @param  m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta,  m_nome_batismo.
*/
AnimalDomestico::AnimalDomestico(string m_uf_origem, string m_cidade_origem):m_uf_origem(m_uf_origem), m_cidade_origem(m_cidade_origem){}


/**
* @brief Método destrutor.
* @return Não possui retorno
*/
AnimalDomestico::~AnimalDomestico(){}

