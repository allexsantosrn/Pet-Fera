#include "reptil.hpp"

Reptil::Reptil() {}

Reptil::Reptil(int _id,std::string _classe,std::string _nome, std::string _cientifico,char _sexo,Veterinario _veterinario, Tratador _tratador , char _habitat):
			   Animal(_id,_classe,_nome, _cientifico,_sexo,_veterinario,_tratador),
			   habitat(_habitat){}

Reptil:: ~Reptil(){}

char
Reptil::getHabitat() {

		return habitat;
}

void
Reptil::setHabitat (char _habitat)
{
	habitat = _habitat;
}

std::ostream&
operator << (std::ostream &o,Reptil r){
	o << "Id: " << r.getId() << std::endl;
	o << "Classe: " << r.getClasse() << std::endl;
	o << "Nome: " << r.getNome() << std::endl;
	o << "Nome Científico: " << r.getnomeCientifico() << std::endl;
	o << "Sexo: " << r.getSexo() << std::endl;
	o << "Habitat: " << r.getHabitat() << std::endl;	
	o << "Veterinario Associado: " << r.getVeterinario() << std::endl;
	o << "Tratador Associado: " << r. getTratador();
	return o;
}

std::istream& 
operator >> (std::istream &i,Reptil &r){
	i >> r.id >> r.classe >> r.nome >> r.nomecientifico >> r.sexo >> r.veterinario >> r.tratador >> r.habitat;
	return i;
}
