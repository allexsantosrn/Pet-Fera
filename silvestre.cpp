#include "silvestre.hpp"

namespace PetFera {

	// Construtor padrao
	Silvestre::Silvestre() {}

	 
	Silvestre::Silvestre(std::string _numibama) {
		setnumIbama(_numibama);
	}

	// Destrutor padrao
	Silvestre::~Silvestre() {}

	 
	std::string Silvestre::getnumIbama() {
		return this->numibama;
	}

	 
	void Silvestre::setnumIbama(std::string _numibama) {
		this->numibama = _numibama;
	}
}