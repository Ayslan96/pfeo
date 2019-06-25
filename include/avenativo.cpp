#include "avenativo.h"

AveNativo::AveNativo(void){}

AveNativo::AveNativo(int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		double m_tamanho_do_bico_cm, double m_envergadura_das_asas, std::string m_autorizacao_ibama, std::string m_uf_origem, std::string m_autorizacao):
		Ave(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_tamanho_do_bico_cm, m_envergadura_das_asas),
		AnimalNativo(m_autorizacao_ibama, m_uf_origem, m_autorizacao) {}
	
AveNativo::~AveNativo(){}

void AveNativo::imprime(){

	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo <<m_tamanho_do_bico_cm <<m_envergadura_das_asas 
	<<m_autorizacao_ibama <<m_uf_origem <<m_autorizacao << endl;

}