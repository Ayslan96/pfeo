#ifndef Anfibio_H
#define Anfibio_H


#include <string>

class Anfibio : public Animal {
private:
	
	int m_total_de_mudas;
	date m_ultima_muda;
	
public:

	Anfibio(delete);
	Anfibio(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, std::string nome_batismo, int total_de_mudas);
	~Anfibio();
	std::ostream& print(std::ostream os) const{
    	return os << "Id: " << m_id << " Classe: " << m_class<< " Nome cientifico: " << m_nome_cientifico << " Sexo: " << m_nome_cientifico << " Tamanho: "	<< m_tamanho << " Dieta: " << m_dieta << " Nome de batismo: " << m_nome_batismo << " Total de mudas: " << m_total_de_mudas << " Ultima muda: " << m_ultima_muda;
	}
};

#endif
