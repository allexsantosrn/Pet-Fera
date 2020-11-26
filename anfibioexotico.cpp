/** 
 * @file	anfibioexotico.cpp
 * @brief	Definicao da classe Anfibio Exotico.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#include "anfibioexotico.hpp"


namespace PetFera {


	/** @brief Construtor padrão */ 
	AnfibioExotico::AnfibioExotico() {}

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
	 * @param _qtdmudas Quantitativo total de mudas do anfibio
	 * @param _numibama Numero referente ao Ibama
	 * @param _paisorigem Pais de origem do animal
	 */	

	AnfibioExotico::AnfibioExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
									char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas, 
									std::string _numibama, std::string _paisorigem) :
									Anfibio(_id, _classe, _nome, _cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat,_qtdmudas),
									Exotico(_numibama,_paisorigem) {}

	/** @brief Destrutor padrão */ 
	AnfibioExotico::~AnfibioExotico() {}

	/** @return Método para stream de saída; */
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