#ifndef _ANFIBIOEXOTICO_
#define _ANFIBIOEXOTICO_

#include "anfibio.hpp"
#include "exotico.hpp"

#include <ostream> 
#include <string>

namespace PetFera {
	
	
	class AnfibioExotico : public Anfibio, public Exotico {

		public:
			 
			AnfibioExotico();

			 
			AnfibioExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas,
			std::string _numibama, std::string _paisorigem);

			 
			~AnfibioExotico();

		private:

			 
			std::ostream& print(std::ostream&);


	};

}

#endif	