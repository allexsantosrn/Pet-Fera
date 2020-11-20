#include "tratador.hpp"

Tratador::Tratador() {}

Tratador::Tratador(int _id, std::string _nome, std::string _cargo, std::string _cpf, std::string _nivelseguranca):
					Funcionario(_id,_nome,_cargo,_cpf),
					nivelseguranca(_nivelseguranca)   {}

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
operator<< (std::ostream &o, Tratador t){
	o << "Id: " << t.getId() << std::endl;
	o << "Nome: " << t.getNome() << std::endl;
	o << "CPF: " << t.getCpf() << std::endl;
	o << "Cargo: " << t.getCargo() << std::endl;
	o << "Nível de Segurança: " <<t.getnivelSeguranca();
	return o;
}

std::istream&
operator>> (std::istream &i, Tratador &t){
	i >> t.id >> t.nome >> t.cpf >> t.cargo >> t.nivelseguranca;
	return i;
}



