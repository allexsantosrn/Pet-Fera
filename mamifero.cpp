
#include "mamifero.hpp"


namespace PetFera {

	// Construtor padrao
	Mamifero::Mamifero() {}

			
	Mamifero::Mamifero(int _id, std::string _classe, std::string _nome, std::string _cientifico,
						char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo): 
						Animal(_id,_classe,_nome,_cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat) {
						settamPelo(_tampelo);
	}

	// Destrutor padrao
	Mamifero::~Mamifero() {}

	
	int Mamifero::gettamPelo() {
		return this->tampelo;
	}

	void Mamifero::settamPelo(int _tampelo) {
		this->tampelo = _tampelo;
	}

	
	std::ostream& 
	Mamifero::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		o << "Classe: " << classe << std::endl; 
		o << "Nome: " << nome << std::endl;
		o << "Nome cientifico: " << cientifico << std::endl;
		o << "Sexo: " << sexo << std::endl;
		o << "Venenoso: " << venenoso << std::endl;
		o << "Habitat: " << habitat << std::endl;
		o << "Identificador do veterinario: " << veterinario.getId() << std::endl;
		o << "Identificador do tratador: " << tratador.getId() << std::endl;
		o << "Tamanho do Pelo: " << tampelo; 
		return o;
	}

	
	// Contrutor padrao
	MamiferoNativo::MamiferoNativo() {}

	
	MamiferoNativo::MamiferoNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico, 
									char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo, 
									std::string _numibama, std::string _regiaoorigem): 
									Mamifero(_id, _classe, _nome, _cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat,_tampelo), 
									Nativo(_numibama, _regiaoorigem) {}

	// Destrutor padrao
	MamiferoNativo::~MamiferoNativo() {}

	
	std::ostream& 
	MamiferoNativo::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		o << "Classe: " << classe << std::endl; 
		o << "Nome: " << nome << std::endl;
		o << "Nome cientifico: " << cientifico << std::endl;
		o << "Sexo: " << sexo << std::endl;
		o << "Venenoso: " << venenoso << std::endl;
		o << "Habitat: " << habitat << std::endl;
		o << "Identificador do veterinario: " << veterinario.getId() << std::endl;
		o << "Identificador do tratador: " << tratador.getId() << std::endl;
		o << "Tamanho do Pelo: " << tampelo; 
		o << "Número do ibama: " << numibama << std::endl;
		o << "Regiao de Origem: " << regiaoorigem << std::endl;		
		return o;
	}

	// Construtor padrao
	MamiferoExotico::MamiferoExotico() {}

	
	MamiferoExotico::MamiferoExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
									char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo, 
									std::string _numibama, std::string _paisorigem) :
									Mamifero(_id, _classe, _nome, _cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat,_tampelo),
									Exotico(_numibama,_paisorigem) {}

	// Destrutor padrao
	MamiferoExotico::~MamiferoExotico() {}

	
	std::ostream& 
	MamiferoExotico::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		o << "Classe: " << classe << std::endl; 
		o << "Nome: " << nome << std::endl;
		o << "Nome cientifico: " << cientifico << std::endl;
		o << "Sexo: " << sexo << std::endl;
		o << "Venenoso: " << venenoso << std::endl;
		o << "Habitat: " << habitat << std::endl;
		o << "Identificador do veterinario: " << veterinario.getId() << std::endl;
		o << "Identificador do tratador: " << tratador.getId() << std::endl;
		o << "Tamanho do Pelo> " << tampelo; 
		o << "Número do ibama: " << numibama << std::endl;
		o << "Pais de origem: " << paisorigem << std::endl; 
		return o;
	}
}