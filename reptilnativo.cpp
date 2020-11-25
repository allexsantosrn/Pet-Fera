#include "reptilnativo.hpp"


namespace PetFera {

// Contrutor padrao
	ReptilNativo::ReptilNativo() {}

	
	ReptilNativo::ReptilNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico, 
									char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, std::string _tipopele, 
									std::string _numibama, std::string _regiaoorigem): 
									Reptil(_id, _classe, _nome, _cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat,_tipopele), 
									Nativo(_numibama, _regiaoorigem) {}

	// Destrutor padrao
	ReptilNativo::~ReptilNativo() {}

	
	std::ostream& 
	ReptilNativo::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		o << "Classe: " << classe << std::endl; 
		o << "Nome: " << nome << std::endl;
		o << "Nome cientifico: " << cientifico << std::endl;
		o << "Sexo: " << sexo << std::endl;
		o << "Venenoso: " << venenoso << std::endl;
		o << "Habitat: " << habitat << std::endl;
		o << "Identificador do veterinario: " << veterinario.getId() << std::endl;
		o << "Identificador do tratador: " << tratador.getId() << std::endl;
		o << "Tipo de Pele: " << tipopele; 
		o << "Número do ibama: " << numibama << std::endl;
		o << "Regiao de Origem: " << regiaoorigem << std::endl;		
		return o;
	}


}