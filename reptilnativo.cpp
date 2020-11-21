#include "reptilnativo.hpp"

ReptilNativo::ReptilNativo() {}

ReptilNativo::ReptilNativo(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					   		   Tratador _tratador, std::string _habitat, int _numibama, std::string _regiaoorigem):
              		           Reptil(_id,_classe,_nome,_nomecientifico,_sexo,_veterinario,_tratador,_habitat),
              		           Nativo(_numibama,_regiaoorigem) {}

ReptilNativo::~ReptilNativo() {}

std::ostream&
operator << (std::ostream &o,ReptilNativo r){
	o << "Id: " << r.getId() << std::endl;
	o << "Classe: " << r.getClasse() << std::endl;
	o << "Nome: " << r.getNome() << std::endl;
	o << "Nome Científico: " << r.getnomeCientifico() << std::endl;
	o << "Sexo: " << r.getSexo() << std::endl;
	o << "Habitat: " << r.getHabitat() << std::endl;
	o << "Codigo Ibama: " << r.getnumIbama() << std::endl;	
	o << "Região Origem: " << r.getregiaoOrigem() << std::endl;
	o << "Veterinario Associado: " << r.getVeterinario() << std::endl;
	o << "Tratador Associado: " << r. getTratador();
	return o;
}




