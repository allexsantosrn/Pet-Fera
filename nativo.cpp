#include "nativo.hpp"

Nativo::Nativo() {}

Nativo::Nativo(std::string _regiaoorigem):
				 regiaoorigem(_regiaoorigem)   {}

Nativo::~Nativo() {}


std::string
Nativo::getregiaoOrigem() {

		return this->regiaoorigem;
	}	

void
Nativo::setregiaoOrigem(std::string _regiaoorigem) {

		this->regiaoorigem = _regiaoorigem;
	}	




