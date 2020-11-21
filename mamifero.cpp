#include "mamifero.hpp"

Mamifero::Mamifero() {}

Mamifero::Mamifero(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, Tratador _tratador, int _tampelo):
				Animal(_id,_classe,_nome,_nomecientifico,_sexo,_veterinario,_tratador),
				tampelo(_tampelo) {}
					

Mamifero::~Mamifero() {}


int
Mamifero::gettamPelo () {

		return this->tampelo;
	}

void
Mamifero::settamPelo(int _tampelo) {

		this->tampelo = _tampelo;
	}	

std::ostream& 
operator<< (std::ostream &o, Mamifero m){
	o << "Id: " << m.getId() << std::endl;
	o << "Classe: " << m.getClasse() << std::endl;
	o << "Nome: " << m.getNome() << std::endl;
	o << "Nome Científico: " << m.getnomeCientifico() << std::endl;
	o << "Sexo: " << m.getSexo() << std::endl;
	o << "Tamanho do Pelo: " << m.gettamPelo() << std::endl;
	o << "Veterinario Associado: \n" << m.getVeterinario() << std::endl;	
	o << "Tratador Associado:\n " << m.getTratador();
	return o;
	
}

std::istream&
operator>> (std::istream &i, Mamifero &m){
	i >> m.id >> m.classe >> m.nome >> m.nomecientifico >> m.sexo >> m.veterinario >> m.tratador >> m.tampelo;
	return i;
}



