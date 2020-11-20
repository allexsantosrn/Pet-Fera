#include "veterinario.hpp"

Veterinario::Veterinario() {}

Veterinario::Veterinario(int _id, std::string _nome, std::string _cargo, std::string _cpf, std::string _crmv):
					Funcionario(_id,_nome,_cargo,_cpf),
					crmv(_crmv)   {}

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
operator<< (std::ostream &o, Veterinario v){
	o << "Id: " << v.getId() << std::endl;
	o << "Nome: " << v.getNome() << std::endl;
	o << "CPF: " << v.getCpf() << std::endl;
	o << "Cargo: " << v.getCargo() << std::endl;
	o << "CRMV: " << v.getCrmv();
	return o;
}

std::istream&
operator>> (std::istream &i, Veterinario &v){
	i >> v.id >> v.nome >> v.cpf >> v.cargo >> v.crmv;
	return i;
}



