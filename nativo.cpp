#include "nativo.hpp"

Nativo::Nativo() {}

Nativo::Nativo(int _numibama, std::string _regiaoorigem):
               Silvestre(_numibama),
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




