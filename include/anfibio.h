#ifndef Anfibio_H
#define Anfibio_H

#include "animal.h"
#include <string>



class Anfibio : public Animal {
private:
	
	int m_total_de_mudas;
	std::string m_ultima_muda;
	
public:

	/Anfibio(delete);

	Ave(double tamanho_do_bico_cm, double envergadura_das_asas):Animal(int id, std::string classe, 
		std::string nome_cientifico, char sexo, double tamanho, std::string dieta, std::string nome_batismo);
	~Ave();

	friend std::ostream& operator << (std::ostream &saida, const Ave& p){
    saida << "Id: " << p.m_id << " Classe: " << p.m_class<< " Nome cientifico: " << p.m_nome_cientifico << " Sexo: " << p.m_nome_cientifico << " Tamanho: " << p.m_tamanho << " Dieta: " << p.m_dieta << " Nome de batismo: " << p.m_nome_batismo << "Tamanho de bico: " << p.m_tamanho_do_bico_cm << " Envergadura das asas: " << p.m_envergadura_das_asas;
	return saida;
	}
	
	Anfibio(std::string nome_batismo, int total_de_mudas): Animal (int id, std::string classe, std::string nome_cientifico, char sexo,
			double tamanho, std::string dieta);
	~Anfibio();

	friend std::ostream& operator << (std::ostream &saida, const Ave& p){
    saida << "Id: " << p.m_id << " Classe: " << p.m_class<< " Nome cientifico: " << p.m_nome_cientifico << " Sexo: " << p.m_nome_cientifico << " Tamanho: " << p.m_tamanho << " Dieta: " << p.m_dieta << " Nome de batismo: " << p.m_nome_batismo << "Tamanho de bico: " << p.m_tamanho_do_bico_cm << " Envergadura das asas: " << p.m_envergadura_das_asas;
	return saida;

	friend std::ostream& print(std::ostream os) const{
    	return os << "Id: " << m_id << " Classe: " << m_class<< " Nome cientifico: " << m_nome_cientifico << " Sexo: " << m_nome_cientifico << " Tamanho: "	<< m_tamanho << " Dieta: " << m_dieta << " Nome de batismo: " << m_nome_batismo << " Total de mudas: " << m_total_de_mudas << " Ultima muda: " << m_ultima_muda;
	}
};

#endif
