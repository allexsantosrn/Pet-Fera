#include "funcionario.hpp"

Funcionario::Funcionario() {}

Funcionario::Funcionario(int _id, std::string _nome, std::string _cargo, std::string _cpf) {


	setId(_id);
	setNome(_nome);
	setCargo(_cargo);
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
Funcionario::getCargo() {

		return cargo;
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
Funcionario::setCargo(std::string _cargo) {

		cargo = _cargo;
	}

		
void 
Funcionario::setCpf(std::string _cpf) {
	
		cpf = _cpf;
	}

std::ostream& 
operator<< (std::ostream &o, Funcionario f){
	o << "Id: " << f.getId() << std::endl;
	o << "Nome: " << f.getNome() << std::endl;
	o << "CPF: " << f.getCpf() << std::endl;
	o << "Cargo: " << f.getCargo();
	return o;
}

std::istream&
operator>> (std::istream &i, Funcionario &f){
	i >> f.id >> f.nome >> f.cpf >> f.cargo;
	return i;
} 

