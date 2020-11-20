#include "ave.hpp"

Ave::Ave() {}

Ave::Ave(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, Tratador _tratador, std::string _formatobico):
				Animal(_id,_classe,_nome,_nomecientifico,_sexo,_veterinario,_tratador),
				formatobico(_formatobico) {}
					

Ave::~Ave() {}


std::string
Ave::getformatoBico () {

		return this->formatobico;
	}

void
Ave::setformatoBico(std::string _formatobico) {

		this->formatobico = _formatobico;
	}	

std::ostream& 
operator<< (std::ostream &o, Ave a){
	o << "Id: " << a.getId() << std::endl;
	o << "Classe: " << a.getClasse() << std::endl;
	o << "Nome: " << a.getNome() << std::endl;
	o << "Nome Científico: " << a.getnomeCientifico() << std::endl;
	o << "Sexo: " << a.getSexo() << std::endl;
	o << "Formato do Bico: " << a.getformatoBico() << std::endl;
	o << "Veterinario Associado: \n" << a.getVeterinario() << std::endl;	
	o << "Tratador Associado:\n " << a.getTratador();
	return o;
	
}

std::istream&
operator>> (std::istream &i, Ave &a){
	i >> a.id >> a.classe >> a.nome >> a.nomecientifico >> a.sexo >> a.veterinario >> a.tratador >> a.formatobico;
	return i;
}



