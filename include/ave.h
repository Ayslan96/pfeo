#ifndef Ave_H
#define Ave_H

#include <string>

class Ave : public Animal{
private:
	double m_tamanho_do_bico_cm;
	double m_envergadura_das_asas;
		
public:
	//Ave();
	Ave(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, std::sstring nome_batismo, double tamanho_do_bico_cm, double envergadura_das_asas);
	~Ave();
	friend std::ostream& operator << (std::ostream &saida, const Animal& p){
    saida << "Id: " << p.m_id << " Classe: " << p.m_class<< " Nome cientifico: " << p.m_nome_cientifico << " Sexo: " << p.m_nome_cientifico << " Tamanho: " << p.m_tamanho << " Dieta: " << p.m_dieta << " Nome de batismo: " << p.m_nome_batismo << "Tamanho de bico: " << p.m_tamanho_do_bico_cm << " Envergadura das asas: " << p.m_envergadura_das_asas;
	return saida;
	}

};
 
#endif