#include "../include/mamiferoexotico.h"

MamiferoExotico::MamiferoExotico(void){}

MamiferoExotico::MamiferoExotico(int codigo, int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		std::string m_cor_pelo, std::string m_autorizacao_ibama, std::string m_pais_origem):
		Mamifero(m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_cor_pelo),
		AnimalExotico(m_autorizacao_ibama, m_pais_origem) {}
	
MamiferoExotico::~MamiferoExotico(){}

void MamiferoExotico::imprime(){

	cout << m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_cor_pelo 
	<<m_autorizacao_ibama <<m_pais_origem << endl;

}

/** @brief Setters */
	void MamiferoExotico::setM_id(int codigo){
		m_codigo = codigo;
	}
	void MamiferoExotico::setM_id(int id){
		m_id = id;
	}
	void MamiferoExotico::setM_classe(string classe){
		m_classe = classe;
	}
	void MamiferoExotico::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void MamiferoExotico::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void MamiferoExotico::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void MamiferoExotico::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void MamiferoExotico::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void MamiferoExotico::setM_cor_do_pelo(string cor_do_pelo){
		m_cor_do_pelo = cor_do_pelo;
	}
	void MamiferoExotico::setM_autorizacao_ibama(string autorizacao_ibama){
		m_autorizacao_ibama = autorizacao_ibama;
	}
	void MamiferoExotico::setM_pais_origem(string pais_origem){
		m_pais_origem = pais_origem;
	}



/** @brief Getters */
	int MamiferoExotico::getM_codigo(){
		return m_codigo;
	}
	int MamiferoExotico::getM_id(){
		return m_id;
	}
	string MamiferoExotico::getM_classe(){
		return m_classe;
	}
	string MamiferoExotico::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char MamiferoExotico::getM_sexo(){
		return m_sexo;
	}
	double MamiferoExotico::getM_tamanho(){
		return m_tamanho;
	}
	string MamiferoExotico::getM_dieta(){
		return m_dieta;
	}
	string MamiferoExotico::getM_nome_batismo(){
		return m_nome_batismo;
	}
	string MamiferoExotico::getM_cor_do_pelo(){
		return m_cor_do_pelo;
	}
	string MamiferoExotico::getM_autorizacao_ibama(){
		return m_autorizacao_ibama;
	}
	string MamiferoExotico::getM_pais_origem(){
		return m_pais_origem;
	}

