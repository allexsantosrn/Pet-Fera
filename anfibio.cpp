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

	
	// Contrutor padrao
	AnfibioNativo::AnfibioNativo() {}

	
	AnfibioNativo::AnfibioNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico, 
									char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas, 
									std::string _numibama, std::string _regiaoorigem): 
									Anfibio(_id, _classe, _nome, _cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat,_qtdmudas), 
									Nativo(_numibama, _regiaoorigem) {}

	// Destrutor padrao
	AnfibioNativo::~AnfibioNativo() {}

	
	std::ostream& 
	AnfibioNativo::print(std::ostream &o) {
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
		o << "Número do ibama: " << numibama << std::endl;
		o << "Regiao de Origem: " << regiaoorigem << std::endl;		
		return o;
	}

	// Construtor padrao
	AnfibioExotico::AnfibioExotico() {}

	
	AnfibioExotico::AnfibioExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
									char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas, 
									std::string _numibama, std::string _paisorigem) :
									Anfibio(_id, _classe, _nome, _cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat,_qtdmudas),
									Exotico(_numibama,_paisorigem) {}

	// Destrutor padrao
	AnfibioExotico::~AnfibioExotico() {}

	
	std::ostream& 
	AnfibioExotico::print(std::ostream &o) {
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
		o << "Número do ibama: " << numibama << std::endl;
		o << "Pais de origem: " << paisorigem << std::endl; 
		return o;
	}
}