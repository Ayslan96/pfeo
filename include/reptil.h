#ifndef Reptil_H
#define Reptil_H

#include <string>

class Reptil : public Animal {
private:
	bool m_venenoso;
	std::string m_tipo_veneno;
	
public:

	Reptil(void);
	Mamifero(int id, std::string classe, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario,  Tratador tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno;
	 );
	~Reptil();
	std::ostream& print(std::ostream os) const{
    	return os << "Id: " << m_id << " Classe: " << m_class<< " Nome cientifico: " << m_nome_cientifico << " Sexo: " << m_nome_cientifico << " Tamanho: "	<< m_tamanho << " Dieta: " << m_dieta << " Nome de batismo: " << m_nome_batismo << " Venenoso: " << m_venenoso << " Tipo de veneno: " << m_tipo_veneno;

};