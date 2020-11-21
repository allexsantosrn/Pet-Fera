#include "anfibioexotico.hpp"

AnfibioExotico::AnfibioExotico() {}

AnfibioExotico::AnfibioExotico(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					 		   Tratador _tratador, int _qtdmudas, int _numibama, std::string _paisorigem):
              				   Anfibio(_id,_classe,_nome,_nomecientifico,_sexo,_veterinario,_tratador, _qtdmudas),
              				   Exotico(_numibama,_paisorigem) {}

AnfibioExotico::~AnfibioExotico() {}

std::ostream&
operator << (std::ostream &o,AnfibioExotico a){
	o << "Id: " << a.getId() << std::endl;
	o << "Classe: " << a.getClasse() << std::endl;
	o << "Nome: " << a.getNome() << std::endl;
	o << "Nome Científico: " << a.getnomeCientifico() << std::endl;
	o << "Sexo: " << a.getSexo() << std::endl;
	o << "Habitat: " << a.getqtdMudas() << std::endl;
	o << "Codigo Ibama: " << a.getnumIbama() << std::endl;	
	o << "País Origem: " << a.getpaisOrigem() << std::endl;
	o << "Veterinario Associado: " << a.getVeterinario() << std::endl;
	o << "Tratador Associado: " << a. getTratador();
	return o;
}

/*
std::istream& 
operator >> (std::istream &i,AnfibioExotico &a){
	i >> a.id >> a.classe >> a.nome >> a.nomecientifico >> a.sexo >> a.veterinario >> a.tratador >> a.habitat;
	return i;
} */





