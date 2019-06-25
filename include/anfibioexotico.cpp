#include "anfibioexotico.h"

AnfibioExotico::AnfibioExotico(void){}

AnfibioExotico::AnfibioExotico(int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		int m_total_de_mudas, Date m_ultima_muda, std::string m_autorizacao_ibama, std::string m_pais_origem):
		Anfibio(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_total_de_mudas, m_ultima_muda),
		AnimalExotico(m_autorizacao_ibama, m_pais_origem) {}
	
AnfibioExotico::~AnfibioExotico(){}

void AnfibioExotico::imprime(){

	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_total_de_mudas << m_ultima_muda 
	<<m_autorizacao_ibama <<m_pais_origem << endl;

}