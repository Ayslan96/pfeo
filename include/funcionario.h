#ifndef Funcionario_H
#define Funcionario_H

#include <string>

using std::string;

class Funcionario {
protected:
	int m_id;
	std::string m_nome;
	std::string m_cpf;
	short m_idade;
	short m_tipo_sanguineo;
	char m_fator_rh;
	std::string m_especialidade;

public:

	Funcionario(int m_id, string m_nome, string m_cpf, 
				short m_idade, short m_tipo_sanguineo, char m_fator_rh,
				string m_especialidade);
	~Funcionario();
};