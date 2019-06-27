#include "../include/reptilexotico.h"

ReptilExotico::ReptilExotico(void){}

ReptilExotico::ReptilExotico(int m_codigo,int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		bool m_veterinario, bool m_tratador, bool m_venenoso, std::string m_tipo_de_veneno, std::string m_autorizacao_ibama, std::string m_pais_origem):
		Reptil(m_codigo, m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_veterinario, m_tratador, m_venenoso, m_tipo_de_veneno),
		AnimalExotico(m_autorizacao_ibama, m_pais_origem) {}
	
ReptilExotico::~ReptilExotico(){}

void ReptilExotico::imprime(){

	cout <<m_codigo<< m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo <<m_venenoso <<m_tipo_de_veneno
	<<m_autorizacao_ibama <<m_pais_origem << endl;

}

/** @brief Setters */
	void ReptilExotico::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void ReptilExotico::setM_id(int id){
		m_id = id;
	}
	void ReptilExotico::setM_classe(string classe){
		m_classe = classe;
	}
	void ReptilExotico::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void ReptilExotico::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void ReptilExotico::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void ReptilExotico::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void ReptilExotico::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void ReptilExotico::setM_autorizacao_ibama(string autorizacao_ibama){
		m_autorizacao_ibama = autorizacao_ibama;
	}
	void ReptilExotico::setM_pais_origem(string pais_origem){
		m_pais_origem = pais_origem;
	}	

/** @brief Getters */
	int ReptilExotico::getM_codigo(){
		return m_codigo;
	}
	int ReptilExotico::getM_id(){
		return m_id;
	}
	string ReptilExotico::getM_classe(){
		return m_classe;
	}
	string ReptilExotico::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char ReptilExotico::getM_sexo(){
		return m_sexo;
	}
	double ReptilExotico::getM_tamanho(){
		return m_tamanho;
	}
	string ReptilExotico::getM_dieta(){
		return m_dieta;
	}
	string ReptilExotico::getM_nome_batismo(){
		return m_nome_batismo;
	}
	string ReptilExotico::getM_autorizacao_ibama(){
		return m_autorizacao_ibama;
	}
	string ReptilExotico::getM_pais_origem(){
		return m_pais_origem;
	}
