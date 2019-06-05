#ifndef Veterinario_H
#define Veterinario_H

#include <string>

class Veterinario : public Funcionario {
private:
	
	std::string m_crmv;
	
	std::ostream& print(std::ostream& os) const {
	return os <<"Id: "<<m_id <<", Nome: "<<m_nome <<", CPF: " << m_cpf <<", Idade: " <<m_idade <<", Tipo Sanguineo: "<<m_tipo_sanguineo 
			  <<", Fator RH: " <<m_fator_rh <<", Especialidade: "<<m_especialidade <<", CRMV: "<<m_crmv
			  << endl;

public:

	Veterinario(int, string, string, short, short, char, string, string);

	~Veterinario();

	void imprime();

};