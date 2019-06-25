#include "mamiferoexotico.h"

MamiferoExotico::MamiferoExotico(void){}

MamiferoExotico::MamiferoExotico(int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		std::string m_cor_pelo, std::string m_autorizacao_ibama, std::string m_pais_origem):
		Mamifero(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_cor_pelo),
		AnimalExotico(m_autorizacao_ibama, m_pais_origem) {}
	
MamiferoExotico::~MamiferoExotico(){}

void MamiferoExotico::imprime(){

	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_cor_pelo 
	<<m_autorizacao_ibama <<m_pais_origem << endl;

}