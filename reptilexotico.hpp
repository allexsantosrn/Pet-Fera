#ifndef _REPTILEXOTICO_
#define _REPTILEXOTICO_

#include "reptil.hpp"
#include "nativo.hpp"
#include "exotico.hpp"

#include <ostream> 
#include <string>

namespace PetFera {
	
	class ReptilExotico : public Reptil, public Exotico {

		public:
			 
			ReptilExotico();

			 
			ReptilExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, std::string _tipopele,
			std::string _numibama, std::string _paisorigem);

			 
			~ReptilExotico();

		private:

			 
			std::ostream& print(std::ostream&);


	};

}

#endif	