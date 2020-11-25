#include "anfibioexotico.hpp"


namespace PetFera {


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