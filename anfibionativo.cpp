#include "anfibionativo.hpp"


namespace PetFera {


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


}	