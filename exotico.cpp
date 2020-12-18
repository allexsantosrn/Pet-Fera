/** 
 * @file	exotico.cpp
 * @brief	Definicao da classe Exótico.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#include "exotico.hpp"

namespace PetFera {

	/** @brief Construtor padrão */ 
	Exotico::Exotico() {}

	/**
	 * @param _numibama Numero referente ao Ibama
	 * @param _paisorigem Pais de origem do animal
	 */	
	
	Exotico::Exotico(std::string _numibama, std::string _paisorigem): Silvestre(_numibama) {
					setpaisOrigem(_paisorigem);
	}

	/** @brief Destrutor padrão */ 
	Exotico::~Exotico() {}

	/** @return Retorna o pais de origem do animal*/
	std::string Exotico::getpaisOrigem() {
		return this->paisorigem;
	}
	/** @return Atualiza o pais de origem do animal*/
	void Exotico::setpaisOrigem(std::string _paisorigem) {
		this->paisorigem = _paisorigem;
	}
}