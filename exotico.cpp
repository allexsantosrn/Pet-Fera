#include "exotico.hpp"

Exotico::Exotico() {}

Exotico::Exotico(int _numibama, std::string _paisorigem):
				 Silvestre(_numibama),
				 paisorigem(_paisorigem)   {}

Exotico::~Exotico() {}


std::string
Exotico::getpaisOrigem() {

		return this->paisorigem;
	}	

void
Exotico::setpaisOrigem(std::string _paisorigem) {

		this->paisorigem = _paisorigem;
	}	




