#include "silvestre.hpp"

Silvestre::Silvestre() {}

Silvestre::Silvestre(int _numibama):
				  	numibama(_numibama)   {}

Silvestre::~Silvestre() {}


int
Silvestre::getnumIbama() {

		return this->numibama;
	}	

void
Silvestre::setnumIbama(int _numibama) {

		this->numibama = _numibama;
	}	




