#include "ave.hpp"


namespace PetFera {

	// Construtor padrao
	Ave::Ave() {}

			
	Ave::Ave(int _id, std::string _classe, std::string _nome, std::string _cientifico,
						char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico): 
						Animal(_id,_classe,_nome,_cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat) {
						settamBico(_tambico);
	}

	// Destrutor padrao
	Ave::~Ave() {}

	
	int Ave::gettamBico() {
		return this->tambico;
	}

	void Ave::settamBico(int _tambico) {
		this->tambico = _tambico;
	}

	
	std::ostream& 
	Ave::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		o << "Classe: " << classe << std::endl; 
		o << "Nome: " << nome << std::endl;
		o << "Nome cientifico: " << cientifico << std::endl;
		o << "Sexo: " << sexo << std::endl;
		o << "Venenoso: " << venenoso << std::endl;
		o << "Habitat: " << habitat << std::endl;
		o << "Identificador do veterinario: " << veterinario.getId() << std::endl;
		o << "Identificador do tratador: " << tratador.getId() << std::endl;
		o << "Tamanho do Bico: " << tambico; 
		return o;
	}
	
	
}