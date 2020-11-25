#ifndef _AVEEXOTICA_
#define _AVEEXOTICA_

#include "ave.hpp"
#include "exotico.hpp"
#include "nativo.hpp"

#include <ostream> 
#include <string>

namespace PetFera {


	class AveExotica : public Ave, public Exotico {

		public:
			 
			AveExotica();

			 
			AveExotica(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico,
			std::string _numibama, std::string _paisorigem);

			 
			~AveExotica();

		private:

			 
			std::ostream& print(std::ostream&);


	};

}

#endif	