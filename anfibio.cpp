#include "anfibio.hpp"

Anfibio::Anfibio() {}

Anfibio::Anfibio(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, Tratador _tratador, int _qtdmudas):
				Animal(_id,_classe,_nome,_nomecientifico,_sexo,_veterinario,_tratador),
				qtdmudas(_qtdmudas) {}
					

Anfibio::~Anfibio() {}


int
Anfibio::getqtdMudas () {

		return qtdmudas;
	}

void
Anfibio::setqtdMudas(int _qtdmudas) {

		qtdmudas = _qtdmudas;
	}	

std::ostream& 
operator<< (std::ostream &o, Anfibio a){
	o << "Id: " << a.getId() << std::endl;
	o << "Classe: " << a.getClasse() << std::endl;
	o << "Nome: " << a.getNome() << std::endl;
	o << "Nome Científico: " << a.getnomeCientifico() << std::endl;
	o << "Sexo: " << a.getSexo() << std::endl;
	o << "Quantidade de Mudas: " << a.getqtdMudas() << std::endl;
	o << "Veterinario Associado: \n" << a.getVeterinario() << std::endl;	
	o << "Tratador Associado:\n " << a.getTratador(); 	
	return o;
	
}

std::istream&
operator>> (std::istream &i, Anfibio &a){
	i >> a.id >> a.classe >> a.nome >> a.nomecientifico >> a.sexo >> a.veterinario >> a.tratador >> a.qtdmudas;
	return i;
}



