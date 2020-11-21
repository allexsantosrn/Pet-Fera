#include "avenativa.hpp"

AveNativa::AveNativa() {}

AveNativa::AveNativa(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					 Tratador _tratador, std::string _formatobico, int _numibama, std::string _regiaoorigem):
              		 Ave(_id,_classe,_nome,_nomecientifico,_sexo,_veterinario,_tratador, _formatobico),
              		 Nativo(_numibama,_regiaoorigem) {}

AveNativa::~AveNativa() {}

std::ostream&
operator << (std::ostream &o,AveNativa a){
	o << "Id: " << a.getId() << std::endl;
	o << "Classe: " << a.getClasse() << std::endl;
	o << "Nome: " << a.getNome() << std::endl;
	o << "Nome Científico: " << a.getnomeCientifico() << std::endl;
	o << "Sexo: " << a.getSexo() << std::endl;
	o << "Formato do Bico: " << a.getformatoBico() << std::endl;
	o << "Codigo Ibama: " << a.getnumIbama() << std::endl;	
	o << "Região Origem: " << a.getregiaoOrigem() << std::endl;
	o << "Veterinario Associado: " << a.getVeterinario() << std::endl;
	o << "Tratador Associado: " << a. getTratador();
	return o;
}






