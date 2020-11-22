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

		return this->id;
	}


std::string
Funcionario::getNome() {

		return this->nome;
	}

std::string 
Funcionario::getCargo() {

		return this->cargo;
	}

std::string 
Funcionario::getCpf() {

		return this->cpf;
	}

void 
Funcionario::setId(int _id) {

		this->id = _id;
	}

	
void 
Funcionario::setNome(std::string _nome) {

		this->nome = _nome;
	}

	
void 
Funcionario::setCargo(std::string _cargo) {

		this->cargo = _cargo;
	}

		
void 
Funcionario::setCpf(std::string _cpf) {
	
		this->cpf = _cpf;
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

/*std::ostream& operator<< (std::ostream &o, Funcionario const &f) {
		return f.print(o);
	}*/


