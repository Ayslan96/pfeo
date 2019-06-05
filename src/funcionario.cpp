Funcionario::Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade):
m_id(id), m_nome(nome), m_cpf(cpf), m_idade(idade), m_tipo_sanguineo(tipo_sanguineo), m_fator_rh(fator_rh), m_especialidade(especialidade){}

Funcionario::~Funcionario(){}

void

//setters
	void Funcionario::setM_id(int id){
		m_id = id;
	}
	void Funcionario::setM_class(string classe){
		m_class = classe;
	}
	void Funcionario::setM_nome_cientifico(string nome_cientifico){
		setM_nome_cientifico = nome_cientifico;
	}
	void Funcionario::setM_sexo(char sexo){
		m_sexo=sexo;
	}
	void Funcionario::setM_tamanho(double tamanho){
		m_tamanho=tamanho;
	}
	void Funcionario::setM_dieta(string dieta){
		m_dieta=dieta;
	}
	void Funcionario::setM_nome_batismo(string nome_batismo){
		m_nome_batismo=nome_batismo;
	}

//getters
	int Funcionario::getM_id(){
		return m_id;
	}
	string Funcionario::getM_class(){
		return m_class;
	}
	string Funcionario::getM_nome_cientifico(){
		return m_nome_cientifico;
	}
	char Funcionario::getM_sexo(){
		return m_sexo;
	}
	double Funcionario::getM_tamanho(){
		return m_tamanho;
	}
	string Funcionario::getM_dieta(){
		return m_dieta;
	}
	string Funcionario::getM_nome_batismo(){
		return m_nome_batismo;
	}