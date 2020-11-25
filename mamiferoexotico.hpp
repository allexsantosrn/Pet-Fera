#ifndef _MAMIFEROEXOTICO_
#define _MAMIFEROEXOTICO_

#include "mamifero.hpp"
#include "exotico.hpp"


#include <ostream> 
#include <string>

namespace PetFera {


	class MamiferoExotico : public Mamifero, public Exotico {

		public:
			 
			MamiferoExotico();

			 
			MamiferoExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo,
			std::string _numibama, std::string _paisorigem);

			 
			~MamiferoExotico();

		private:

			 
			std::ostream& print(std::ostream&);


	};

}

#endif