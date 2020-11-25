#include "tratador.hpp"


namespace PetFera {

	// Construtor padrao
	Tratador::Tratador() {}

	
	Tratador::Tratador(int _id, std::string _nome, std::string _funcao, std::string _cpf, std::string _nivelseguranca):
	Funcionario(_id, _nome, _funcao, _cpf),
	nivelseguranca(_nivelseguranca)  {}

	//	Destrutor padrao
	Tratador::~Tratador() {}


	std::string
	Tratador::getnivelSeguranca () {

		return this->nivelseguranca;
	}

	void
	Tratador::setnivelSeguranca(std::string _nivelseguranca) {

		this->nivelseguranca = _nivelseguranca;
	}	

	
	std::ostream& 
	Tratador::print(std::ostream &o) const {
		o << "Identificador: " << id << std::endl;
		o << "Nome: " << nome << std::endl;
		o << "CPF: " << cpf << std::endl;
		o << "Funcao: " << funcao << std::endl; 
		o << "Nível de Segurança: " << nivelseguranca; 
		return o;
	}
}