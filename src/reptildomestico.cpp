#include "../include/reptildomestico.h"

ReptilDomestico::ReptilDomestico(void){}

ReptilDomestico::ReptilDomestico(int m_codigo, int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		bool m_venenoso, std::string m_tipo_de_veneno, std::string m_autorizacao_ibama, std::string m_uf_origem, std::string m_cidade_origem):
		Reptil(m_codigo, m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_venenoso, m_tipo_de_veneno),
		AnimalDomestico(m_autorizacao_ibama, m_uf_origem, m_cidade_origem) {}
	
ReptilDomestico::~ReptilDomestico(){}

void ReptilDomestico::imprime(){

	cout << m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_venenoso <<m_tipo_de_veneno 
	<<m_autorizacao_ibama <<m_uf_origem <<m_cidade_origem << endl;

}

/** @brief Setters */
	void ReptilDomestico::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void ReptilDomestico::setM_id(int id){
		m_id = id;
	}
	void ReptilDomestico::setM_classe(string classe){
		m_classe = classe;
	}
	void ReptilDomestico::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void ReptilDomestico::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void ReptilDomestico::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void ReptilDomestico::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void ReptilDomestico::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void ReptilDomestico::setM_autorizacao_ibama(string autorizacao_ibama){
		m_autorizacao_ibama = autorizacao_ibama;
	}
	void ReptilDomestico::setM_uf_origem(string uf_origem){
		m_uf_origem = uf_origem;
	}
	void ReptilDomestico::setM_cidade_origem(string cidade_origem){
		m_cidade_origem = cidade_origem;
	}

/** @brief Getters */
	int ReptilDomestico::getM_codigo(){
		return m_codigo;
	}
	int ReptilDomestico::getM_id(){
		return m_id;
	}
	string ReptilDomestico::getM_classe(){
		return m_classe;
	}
	string ReptilDomestico::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char ReptilDomestico::getM_sexo(){
		return m_sexo;
	}
	double ReptilDomestico::getM_tamanho(){
		return m_tamanho;
	}
	string ReptilDomestico::getM_dieta(){
		return m_dieta;
	}
	string ReptilDomestico::getM_nome_batismo(){
		return m_nome_batismo;
	}
	string ReptilDomestico::getM_autorizacao_ibama(){
		return m_autorizacao_ibama;
	}
	string ReptilDomestico::getM_uf_origem(){
		return m_uf_origem;
	}
	string ReptilDomestico::getM_cidade_origem(){
		return m_cidade_origem;
	}

