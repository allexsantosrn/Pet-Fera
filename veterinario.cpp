#include "veterinario.hpp"

namespace PetFera {

	// Construtor padrao
	Veterinario::Veterinario() {}

	Veterinario::Veterinario(int _id, std::string _nome, std::string _funcao, std::string _cpf, std::string _crmv):
	Funcionario(_id, _nome, _funcao, _cpf),
	crmv(_crmv) {}


	//	Destrutor padrao
	Veterinario::~Veterinario() {}


	std::string
	Veterinario::getCrmv () {

		return this->crmv;
	}

	void
	Veterinario::setCrmv(std::string _crmv) {

		this->crmv = _crmv;
	}	

	std::ostream&
	Veterinario::print(std::ostream &o) const {
		o << "Identificador: " << id << std::endl;
		o << "Nome: " << nome << std::endl;
		o << "CPF: " << cpf << std::endl;
		o << "Funcao: " << funcao << std::endl; 
		o << "CRMV: " << crmv; 
		return o;
	}
}