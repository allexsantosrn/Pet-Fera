#include "mamiferoexotico.hpp"

MamiferoExotico::MamiferoExotico() {}

MamiferoExotico::MamiferoExotico(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					   Tratador _tratador, int _tampelo, int _numibama, std::string _paisorigem):
              		   Mamifero(_id,_classe,_nome,_nomecientifico,_sexo,_veterinario,_tratador, _tampelo),
              		   Exotico(_numibama,_paisorigem) {}

MamiferoExotico::~MamiferoExotico() {}


std::ostream&
operator << (std::ostream &o,MamiferoExotico m){
	o << "Id: " << m.getId() << std::endl;
	o << "Classe: " << m.getClasse() << std::endl;
	o << "Nome: " << m.getNome() << std::endl;
	o << "Nome Científico: " << m.getnomeCientifico() << std::endl;
	o << "Sexo: " << m.getSexo() << std::endl;
	o << "Tamanho do Pelo: " << m.gettamPelo() << std::endl;
	o << "Codigo Ibama: " << m.getnumIbama() << std::endl;	
	o << "País Origem: " << m.getpaisOrigem() << std::endl;
	o << "Veterinario Associado: " << m.getVeterinario() << std::endl;
	o << "Tratador Associado: " << m. getTratador();
	return o;
}





