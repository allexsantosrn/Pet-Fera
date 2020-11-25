
#include "funcionario.hpp"


namespace PetFera {

	// Construtor padrao
	Funcionario::Funcionario() {}

	Funcionario::Funcionario(int _id, std::string _nome, std::string _funcao, std::string _cpf) {

		setId(_id);
		setNome(_nome);
		setFuncao(_funcao);
		setCpf(_cpf);
		
	}

	//	Destrutor padrao
	Funcionario::~Funcionario() {}

	 
	int Funcionario::getId() {
		return this->id;
	}

	 
	std::string Funcionario::getNome() {
		return this->nome;
	}

	 
	std::string Funcionario::getFuncao() {
		return this->funcao;
	}

	 
	std::string Funcionario::getCpf() {
		return this->cpf;
	}

	 
	void Funcionario::setId(int _id) {
		this->id = _id;
	}

	 
	void Funcionario::setNome(std::string _nome) {
		this->nome = _nome;
	}

	 
	void Funcionario::setFuncao(std::string _funcao) {
		this->funcao = _funcao;
	}

	 
	void Funcionario::setCpf(std::string _cpf) {
		this->cpf = _cpf;
	}

	 
	std::ostream& operator<< (std::ostream &o, Funcionario const &f) {
		return f.print(o);
	}

	 
	bool Funcionario::operator==(const Funcionario &f) {

		if(id == f.id) {
			return true;
		}
		else {
			return false;
		}
	}
}