#include "tratador.hpp"

Tratador::Tratador() {}

Tratador::Tratador(int _id, std::string _nome, std::string _funcao, std::string _cpf, std::string _nivelseguranca):
					Funcionario(_id,_nome,_funcao,_cpf),
					nivelseguranca(_nivelseguranca)   {}

Tratador::~Tratador() {}


std::string
Tratador::getNivelseguranca () {

		return nivelseguranca;
	}

void
Tratador::setNivelseguranca(std::string _nivelseguranca) {

		nivelseguranca = _nivelseguranca;
	}	

std::ostream& 
operator<< (std::ostream &o, Tratador t){
	o << "Id: " << t.getId() << std::endl;
	o << "Nome: " << t.getNome() << std::endl;
	o << "CPF: " << t.getCpf() << std::endl;
	o << "Função: " << t.getFuncao() << std::endl;
	o << "Nível de Segurança: " <<t.getNivelseguranca();
	return o;
}

std::istream&
operator>> (std::istream &i, Tratador &t){
	i >> t.id >> t.nome >> t.cpf >> t.funcao >> t.nivelseguranca;
	return i;
}



