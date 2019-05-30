#ifndef Ave_H
#define Ave_H
#include <string>
#include "animal.h"

class Ave : public Animal{
private:
	double m_tamanho_do_bico_cm;
	double m_envergadura_das_asas;
	
		
public:
	Ave(void);
	Ave(int m_id, std::string m_class, std::string m_nome_cientifico, char m_sexo, double m_tamanho, std::string m_dieta, std::string m_nome_batismo, double m_tamanho_do_bico_cm, double m_envergadura_das_asas);
	~Ave();	
	std::ostream& print(std::ostream os) const{
    	return os << "Id: " << m_id << " Classe: " << m_class<< " Nome cientifico: " << m_nome_cientifico << " Sexo: " << m_nome_cientifico << " Tamanho: "	<< m_tamanho << " Dieta: " << m_dieta << " Nome de batismo: " << m_nome_batismo << " Tamnho do bico: " << m_tamanho_do_bico_cm << " Envergadura das asas: " << m_envergadura_das_asas;
	}
};
 
#endif


//"Id: " << p.m_id << " Classe: " << p.m_class << " Nome cientifico: " << p.m_nome_cientifico << " Sexo: " << p.m_sexo << " Tamanho: " << p.m_tamanho << " Dieta: " << p.m_dieta << " Nome de batismo: " << p.m_nome_batismo <<