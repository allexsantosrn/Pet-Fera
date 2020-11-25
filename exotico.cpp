#include "exotico.hpp"

namespace PetFera {

	// Construtor padrao
	Exotico::Exotico() {}

	
	Exotico::Exotico(std::string _numibama, std::string _paisorigem): Silvestre(_numibama) {
					setpaisOrigem(_paisorigem);
	}

	// Destrutor padrao
	Exotico::~Exotico() {}

	std::string Exotico::getpaisOrigem() {
		return this->paisorigem;
	}

	void Exotico::setpaisOrigem(std::string _paisorigem) {
		this->paisorigem = _paisorigem;
	}
}