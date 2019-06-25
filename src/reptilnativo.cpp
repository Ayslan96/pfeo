#include "../include/reptilnativo.h"

ReptilNativo::ReptilNativo(void){}

ReptilNativo::ReptilNativo(int m_codigo, int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		bool m_venenoso, std::string m_tipo_de_veneno, std::string m_autorizacao_ibama, std::string m_uf_origem, std::string m_autorizacao):
		Reptil(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_venenoso, m_tipo_de_veneno),
		AnimalNativo(m_autorizacao_ibama, m_uf_origem, m_autorizacao) {}
	
ReptilNativo::~ReptilNativo(){}

void ReptilNativo::imprime(){

	cout << m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_venenoso <<m_tipo_de_veneno 
	<<m_autorizacao_ibama <<m_uf_origem <<m_autorizacao << endl;

}