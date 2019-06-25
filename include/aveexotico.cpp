#include "aveexotico.h"

AveExotico::AveExotico(void){}

AveExotico::AveExotico(int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		double m_tamanho_do_bico_cm, double m_envergadura_das_asas, std::string m_autorizacao_ibama, std::string m_pais_origem):
		Ave(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_tamanho_do_bico_cm, m_envergadura_das_asas),
		AnimalExotico(m_autorizacao_ibama, m_pais_origem) {}
	
AveExotico::~AveExotico(){}

void AveExotico::imprime(){

	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo <<m_tamanho_do_bico_cm <<m_envergadura_das_asas 
	<<m_autorizacao_ibama <<m_pais_origem << endl;

}