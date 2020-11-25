#ifndef _REPTILNATIVO_
#define _REPTILNATIVO_

#include "reptil.hpp"
#include "nativo.hpp"
#include "exotico.hpp"

#include <ostream> 
#include <string>

namespace PetFera {


	class ReptilNativo : public Reptil, public Nativo {

		public:
			 
			ReptilNativo();

			 
			ReptilNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, std::string _tipopele, 
			std::string _ibama, std::string _regiaoorigem);

			 
			~ReptilNativo();

		private:

			 
			std::ostream& print(std::ostream&);


	};

}

#endif