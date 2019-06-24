#include "animalnativo.h"

AnimalNativo::AnimalNativo(void){}
AnimalNativo::AnimalNativo(std::string m_autorizacao_ibama, std::string m_uf_origem, std::string m_autorizacao):AnimalSilvestre(m_autorizacao_ibama),
m_uf_origem (m_uf_origem),m_autorizacao(m_autorizacao) {}

AnimalNativo::~AnimalNativo(){}