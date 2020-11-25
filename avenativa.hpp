#ifndef _AVENATIVA_
#define _AVENATIVA_

#include "ave.hpp"
#include "exotico.hpp"
#include "nativo.hpp"

#include <ostream> 
#include <string>

namespace PetFera {


	class AveNativa : public Ave, public Nativo {

		public:
			 
			AveNativa();

			 
			AveNativa(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico, 
			std::string _ibama, std::string _regiaoorigem);

			 
			~AveNativa();

		private:

			 
			std::ostream& print(std::ostream&);


	};

}

#endif	
	