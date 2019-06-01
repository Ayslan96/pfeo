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

	void setM_id(int);
	void setM_nome(string);
	void setM_cpf(string);
	void setM_idade(int);
	void setM_tipo_sanguineo(short);
	void setM_fator_rh(char);
	void setM_especialidade(string);

	int getM_id();
	string getM_nome();
	string getM_cpf();
	int getM_idade();
	short getM_tipo_sanguineo();
	char getM_fator_rh();
	string getM_especialidade();




};