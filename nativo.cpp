#include "nativo.hpp"

namespace PetFera {

	// Construtor padrao
	Nativo::Nativo() {}

	
	Nativo::Nativo(std::string _numibama, std::string _regiaoorigem): 
				   Silvestre(_numibama) {
				   setregiaoOrigem(_regiaoorigem);
	}

	// Destrutor padrao
	Nativo::~Nativo() {}

	std::string Nativo::getregiaoOrigem() {
		return this->regiaoorigem;
	}

	void Nativo::setregiaoOrigem(std::string _regiaoorigem) {
		this->regiaoorigem = _regiaoorigem;
	}
}