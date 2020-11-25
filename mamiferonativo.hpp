#ifndef _MAMIFERONATIVO_
#define _MAMIFERONATIVO_

#include "mamifero.hpp"
#include "nativo.hpp"

#include <ostream> 
#include <string>

namespace PetFera {


	class MamiferoNativo : public Mamifero, public Nativo {

		public:
			 
			MamiferoNativo();

			 
			MamiferoNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo, 
			std::string _ibama, std::string _regiaoorigem);

			 
			~MamiferoNativo();

		private:

			 
			std::ostream& print(std::ostream&);


	};

}

#endif