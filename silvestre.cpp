#include "silvestre.hpp"

/** 
 * @file	nativo.cpp
 * @brief	Definicao da classe Nativo.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

namespace PetFera {

	/** @brief Construtor padrão */ 
	Silvestre::Silvestre() {}

	 
	Silvestre::Silvestre(std::string _numibama) {
		setnumIbama(_numibama);
	}

	/** @brief Destrutor padrão */ 
	Silvestre::~Silvestre() {}

	/** @return Retorna o número de registro do animal*/
	std::string Silvestre::getnumIbama() {
		return this->numibama;
	}

	/** @return Atualiza o número de registro no animal*/
	void Silvestre::setnumIbama(std::string _numibama) {
		this->numibama = _numibama;
	}
}