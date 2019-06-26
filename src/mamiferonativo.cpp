#include "../include/mamiferonativo.h"

MamiferoNativo::MamiferoNativo(void){}

MamiferoNativo::MamiferoNativo(int m_codigo, int m_id, std::string m_classe, std::string m_nome_cientifico, char m_sexo, int m_tamanho, std::string m_dieta, std::string m_nome_batismo,
		std::string m_cor_pelo, std::string m_autorizacao_ibama, std::string m_uf_origem, std::string m_cidade_origem):
		Mamifero
	(m_codigo, m_id, m_classe, m_nome_cientifico, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_cor_pelo),
		AnimalNativo(m_autorizacao_ibama, m_uf_origem, m_cidade_origem) {}
	
MamiferoNativo::~MamiferoNativo(){}
/*
void MamiferoNativo::imprime(){

	cout << m_codigo << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho
	<< m_dieta << m_nome_batismo << m_cor_pelo 
	<<m_autorizacao_ibama <<m_uf_origem <<m_cidade_origem << endl;

}*/

/** @brief Setters */
	void MamiferoNativo::setM_codigo(int codigo){
		m_codigo = codigo;
	}
	void MamiferoNativo::setM_id(int id){
		m_id = id;
	}
	void MamiferoNativo::setM_classe(string classe){
		m_classe = classe;
	}
	void MamiferoNativo::setM_nome_cientifico(string nome_cientifico){
		m_nome_cientifico = nome_cientifico;
	}
	void MamiferoNativo::setM_sexo(char sexo){
		m_sexo = sexo;
	}
	void MamiferoNativo::setM_tamanho(double tamanho){
		m_tamanho = tamanho;
	}
	void MamiferoNativo::setM_dieta(string dieta){
		m_dieta = dieta;
	}
	void MamiferoNativo::setM_nome_batismo(string nome_batismo){
		m_nome_batismo = nome_batismo;
	}
	void MamiferoNativo::setM_cor_pelo(string cor_pelo){
		m_cor_pelo = cor_pelo;
	}
	void MamiferoNativo::setM_autorizacao_ibama(string autorizacao_ibama){
		m_autorizacao_ibama = autorizacao_ibama;
	}
	void MamiferoNativo::setM_uf_origem(string uf_origem){
		m_uf_origem = uf_origem;
	}
	void MamiferoNativo::setM_cidade_origem(string cidade_origem){
		m_cidade_origem = cidade_origem;
	}



/** @brief Getters */
	int MamiferoNativo::getM_codigo(){
		return m_codigo;
	}
	int MamiferoNativo::getM_id(){
		return m_id;
	}
	string MamiferoNativo::getM_classe(){
		return m_classe;
	}
	string MamiferoNativo::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char MamiferoNativo::getM_sexo(){
		return m_sexo;
	}
	double MamiferoNativo::getM_tamanho(){
		return m_tamanho;
	}
	string MamiferoNativo::getM_dieta(){
		return m_dieta;
	}
	string MamiferoNativo::getM_nome_batismo(){
		return m_nome_batismo;
	}
	string MamiferoNativo::getM_cor_pelo(){
		return m_cor_pelo;
	}
	string MamiferoNativo::getM_autorizacao_ibama(){
		return m_autorizacao_ibama;
	}
	string MamiferoNativo::getM_uf_origem(){
		return m_uf_origem;
	}
	string MamiferoNativo::getM_cidade_origem(){
		return m_cidade_origem;
	}

