#include "exotico.hpp"

Exotico::Exotico() {}

Exotico::Exotico(std::string _paisorigem):
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




