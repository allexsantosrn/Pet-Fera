/** 
 * @file	mamiferonativo.cpp
 * @brief	Definicao da classe Anfibio Nativo.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#include "mamiferonativo.hpp"


namespace PetFera {
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
	 * @param _tampelo Tamanho de pelo dos mamiferos 
	 * @param _numibama Numero referente ao Ibama
	 * @param _regiaoorigem Regiao de origem do animal
	 */	
	

/** @brief Construtor padrão */ 
	MamiferoNativo::MamiferoNativo() {}

	
	MamiferoNativo::MamiferoNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico, 
									char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo, 
									std::string _numibama, std::string _regiaoorigem): 
									Mamifero(_id, _classe, _nome, _cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat,_tampelo), 
									Nativo(_numibama, _regiaoorigem) {}

	/** @brief Destrutor padrão */ 
	MamiferoNativo::~MamiferoNativo() {}

	/** @return Método para stream de saída */
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
		o << "Tamanho do Pelo: " << tampelo << std::endl;
		o << "Número do ibama: " << numibama << std::endl;
		o << "Regiao de Origem: " << regiaoorigem << std::endl;		
		return o;
	}

}