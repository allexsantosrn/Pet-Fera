#include "nativo.hpp"
/** 
 * @file	nativo.cpp
 * @brief	Definicao da classe Nativo.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */


namespace PetFera {

	/** @brief Construtor padrão */ 
	Nativo::Nativo() {}

	/**
	 * @param _numibama Numero referente ao Ibama
	 * @param _regiaoorigem Região de origem do animal
	 */	
	Nativo::Nativo(std::string _numibama, std::string _regiaoorigem): 
				   Silvestre(_numibama) {
				   setregiaoOrigem(_regiaoorigem);
	}

	/** @brief Destrutor padrão */ 
	Nativo::~Nativo() {}

	/** @return Retorna a região de origem do animal*/
	std::string Nativo::getregiaoOrigem() {
		return this->regiaoorigem;
	}

	/** @return Atualiza a região de origem do animal*/
	void Nativo::setregiaoOrigem(std::string _regiaoorigem) {
		this->regiaoorigem = _regiaoorigem;
	}
}