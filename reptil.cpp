#include "reptil.hpp"


namespace PetFera {

	// Construtor padrao
	Reptil::Reptil() {}

			
	Reptil::Reptil(int _id, std::string _classe, std::string _nome, std::string _cientifico,
						char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, std::string _tipopele): 
						Animal(_id,_classe,_nome,_cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat) {
						settipoPele(_tipopele);
	}

	// Destrutor padrao
	Reptil::~Reptil() {}

	
	std::string Reptil::gettipoPele() {
		return this->tipopele;
	}

	void Reptil::settipoPele(std::string _tipopele) {
		this->tipopele = _tipopele;
	}

	
	std::ostream& 
	Reptil::print(std::ostream &o) {
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
		return o;
	}	
	
	
}