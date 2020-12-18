/** 
 * @file	aveexotica.cpp
 * @brief	Definicao da classe Ave Exotica.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#include "aveexotica.hpp"


namespace PetFera {


	/** @brief Construtor padrão */
	AveExotica::AveExotica() {}

	/**
	 * @param _id Identificador do animal
	 * @param _classe Classe do animal
	 * @param _tipo Tipo do animal
	 * @param _nome Nome do animal
	 * @param _cientifico Nome cientifico do animal
	 * @param _sexo Sexo do animal
	 * @param _veterinario Veterinario do animal
	 * @param _tratador Tratador do animal
	 * @param _venenoso Indica se o animal é venenoso
	 * @param _habitat Indica o habitat do animal
	 * @param _tambico Tamanho do bico
	 * @param _numibama Numero do animal referente ao Ibama
	 * @param _paisorigem Pais de origem do animal
	 */	

	AveExotica::AveExotica(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico,
									char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico, 
									std::string _numibama, std::string _paisorigem) :
									Ave(_id, _classe, _tipo, _nome, _cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat,_tambico),
									Exotico(_numibama,_paisorigem) {}

	/** @brief Destrutor padrão */ 
	AveExotica::~AveExotica() {}

	/** @return Método para stream de saida */
	std::ostream& 
	AveExotica::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		o << "Classe: " << classe << std::endl; 
		o << "Tipo: " << tipo << std::endl; 		
		o << "Nome: " << nome << std::endl;
		o << "Nome cientifico: " << cientifico << std::endl;
		o << "Sexo: " << sexo << std::endl;
		o << "Venenoso: " << venenoso << std::endl;
		o << "Habitat: " << habitat << std::endl;
		o << "Identificador do veterinario: " << veterinario.getId() << std::endl;
		o << "Identificador do tratador: " << tratador.getId() << std::endl;
		o << "Tamanho do Bico: " << tambico << std::endl;
		o << "Número do ibama: " << numibama << std::endl;
		o << "Pais de origem: " << paisorigem << std::endl; 
		return o;
	}

}	