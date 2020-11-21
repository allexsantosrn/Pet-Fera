#include "aveexotica.hpp"

AveExotica::AveExotica() {}

AveExotica::AveExotica(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					   Tratador _tratador, std::string _formatobico, int _numibama, std::string _paisorigem):
              		   Ave(_id,_classe,_nome,_nomecientifico,_sexo,_veterinario,_tratador, _formatobico),
              		   Exotico(_numibama,_paisorigem) {}

AveExotica::~AveExotica() {}

std::ostream&
operator << (std::ostream &o,AveExotica a){
	o << "Id: " << a.getId() << std::endl;
	o << "Classe: " << a.getClasse() << std::endl;
	o << "Nome: " << a.getNome() << std::endl;
	o << "Nome Científico: " << a.getnomeCientifico() << std::endl;
	o << "Sexo: " << a.getSexo() << std::endl;
	o << "Formato do Bico: " << a.getformatoBico() << std::endl;
	o << "Codigo Ibama: " << a.getnumIbama() << std::endl;	
	o << "País Origem: " << a.getpaisOrigem() << std::endl;
	o << "Veterinario Associado: " << a.getVeterinario() << std::endl;
	o << "Tratador Associado: " << a. getTratador();
	return o;
}





