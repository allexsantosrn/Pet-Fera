#ifndef _NATIVO_
#define _NATIVO_

#include "silvestre.hpp"
 
#include <string>


namespace PetFera {
	
	
	class Nativo : public Silvestre {

		protected:

			std::string regiaoorigem;			 
			 		 

		public:
			 
			Nativo();

			 
			Nativo(std::string _numibama, std::string _regiaoorigem);

			 
			~Nativo();

			 
			std::string getregiaoOrigem();		 
			
			 
			void setregiaoOrigem(std::string _regiaoorigem);

			 
	};
}

#endif