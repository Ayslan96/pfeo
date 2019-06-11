#ifndef Ave_H
#define Ave_H
#include "animal.h"

class Ave : public Animal{
private:
	
	double m_tamanho_do_bico_cm;
	double m_envergadura_das_asas;

	std::ostream& print(std::ostream& os) const {
		return os << "Id: " << m_id << ", Classe: " << m_classe << ", Nome Cientifico: " << m_nome_cientifico << ", Sexo: " << m_sexo 
			  <<", Tamanho: " << m_tamanho <<", Dieta: "<<m_dieta <<", Nome de Batismo: "<<m_nome_batismo
			  <<", Tamanho do Bico em cm: " <<m_tamanho_do_bico_cm << ", Envergadura das Asas: " <<m_envergadura_das_asas << endl;
	}

		
public:
	Ave(void);
	Ave(
		int id, string classe, string nome_cientifico, 
		char sexo, int tamanho, string dieta, string nome_batismo, double tamanho_do_bico_cm, double envergadura_das_asas);
	~Ave();
	void imprime();

};
 
#endif