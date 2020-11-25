#include "anfibio.hpp"


namespace PetFera {

	// Construtor padrao
	Anfibio::Anfibio() {}

			
	Anfibio::Anfibio(int _id, std::string _classe, std::string _nome, std::string _cientifico,
						char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas): 
						Animal(_id,_classe,_nome,_cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat) {
						setqtdMudas(_qtdmudas);
	}

	// Destrutor padrao
	Anfibio::~Anfibio() {}

	
	int Anfibio::getqtdMudas() {
		return this->qtdmudas;
	}

	void Anfibio::setqtdMudas(int _qtdmudas) {
		this->qtdmudas = _qtdmudas;
	}

	
	std::ostream& 
	Anfibio::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		o << "Classe: " << classe << std::endl; 
		o << "Nome: " << nome << std::endl;
		o << "Nome cientifico: " << cientifico << std::endl;
		o << "Sexo: " << sexo << std::endl;
		o << "Venenoso: " << venenoso << std::endl;
		o << "Habitat: " << habitat << std::endl;
		o << "Identificador do veterinario: " << veterinario.getId() << std::endl;
		o << "Identificador do tratador: " << tratador.getId() << std::endl;
		o << "Quantidade de Mudas: " << qtdmudas; 
		return o;
	}

	
	
}