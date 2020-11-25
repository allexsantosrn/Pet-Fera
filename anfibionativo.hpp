#ifndef _ANFIBIONATIVO_
#define _ANFIBIONATIVO_

#include "anfibio.hpp"
#include "nativo.hpp"

#include <ostream> 
#include <string>

namespace PetFera {
	
	
	class AnfibioNativo : public Anfibio, public Nativo {

		public:
			 
			AnfibioNativo();

			 
			AnfibioNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas, 
			std::string _ibama, std::string _regiaoorigem);

			 
			~AnfibioNativo();

		private:

			 
			std::ostream& print(std::ostream&);


	};

}

#endif	