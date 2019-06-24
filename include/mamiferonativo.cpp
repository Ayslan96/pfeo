#include "mamiferonativo.h"

MamiferoNativo::MamiferoNativo(void){}

MamiferoNativo::MamiferoNativo(int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		std::string m_cor_pelo, std::string m_autorizacao_ibama, std::string m_uf_origem, std::string m_autorizacao):
		Mamifero
	(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_cor_pelo),
		AnimalNativo(m_autorizacao_ibama, m_uf_origem, m_autorizacao) {}
	
MamiferoNativo::~MamiferoNativo(){}

void MamiferoNativo::imprime(){

	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_cor_pelo 
	<<m_autorizacao_ibama <<m_uf_origem <<m_autorizacao << endl;

}