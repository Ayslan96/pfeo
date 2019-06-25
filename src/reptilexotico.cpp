#include "../include/reptilexotico.h"

ReptilExotico::ReptilExotico(void){}

ReptilExotico::ReptilExotico(int m_codigo,int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		bool m_venenoso, std::string m_tipo_de_veneno, std::string m_autorizacao_ibama, std::string m_pais_origem):
		Reptil(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_venenoso, m_tipo_de_veneno),
		AnimalExotico(m_autorizacao_ibama, m_pais_origem) {}
	
ReptilExotico::~ReptilExotico(){}

void ReptilExotico::imprime(){

	cout <<m_codigo<< m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo <<m_venenoso <<m_tipo_de_veneno
	<<m_autorizacao_ibama <<m_pais_origem << endl;

}