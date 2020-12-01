/** 
 * @file	mamiferoexotico.cpp
 * @brief	Definicao das classe mamífero exotico.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto.
 * @since	12/11/2020
 * @date 	24/11/2020
 */	
#include "mamiferoexotico.hpp"


namespace PetFera {

	
	/** @brief Construtor padrão */ 
	MamiferoExotico::MamiferoExotico() {}

	/**
	 * @param _id Identificador do animal
	 * @param _classe Classe do animal
	 * @param _nome Nome do animal
	 * @param _cientifico Nome cientifico do animal
	 * @param _sexo Sexo do animal
	 * @param _veterinario Veterinario do animal
	 * @param _tratador Tratador do animal
	 * @param _venenoso Indica se o animal é venenoso
	 * @param _habitat Indica o habitat do animal
	 * @param _tampelo tamanho do pelo do mamifero
	 * @param _numibama Numero referente ao Ibama
	 * @param _paisorigem Pais de origem do animal
	 */	
	
	MamiferoExotico::MamiferoExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
									char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo, 
									std::string _numibama, std::string _paisorigem) :
									Mamifero(_id, _classe, _nome, _cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat,_tampelo),
									Exotico(_numibama,_paisorigem) {}

	/** @brief Destrutor padrão */ 
	MamiferoExotico::~MamiferoExotico() {}

	/** @return Método para stream de saída */
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
		o << "Tamanho do Pelo> " << tampelo << std::endl; 
		o << "Número do ibama: " << numibama << std::endl;
		o << "Pais de origem: " << paisorigem << std::endl; 
		return o;
	}

}