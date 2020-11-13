#include "funcionario.hpp"

Funcionario::Funcionario() {}

Funcionario::Funcionario(int _id, std::string _nome, std::string _funcao, std::string _cpf) {

		setId(_id);
		setNome(_nome);
		setFuncao(_funcao);
		setCpf(_cpf);
	}

Funcionario::~Funcionario() {}


int 
Funcionario::getId() {

		return id;
	}


std::string
Funcionario::getNome() {

		return nome;
	}

std::string 
Funcionario::getFuncao() {

		return funcao;
	}

std::string 
Funcionario::getCpf() {

		return cpf;
	}

void 
Funcionario::setId(int _id) {

		id = _id;
	}

	
void 
Funcionario::setNome(std::string _nome) {
		nome = _nome;
	}

	
void 
Funcionario::setFuncao(std::string _funcao) {

		funcao = _funcao;
	}

		
void 
Funcionario::setCpf(std::string _cpf) {
		cpf = _cpf;
	}