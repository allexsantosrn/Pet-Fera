#ifndef _EXOTICO_
#define _EXOTICO_

#include "silvestre.hpp"

#include <string>
 

namespace PetFera {
	
	
	class Exotico : public Silvestre {

		protected:

			std::string paisorigem;			 

		public:
			 
			Exotico();

			 	
			Exotico(std::string _numibama, std::string _paisorigem);

			 
			~Exotico();

			 
			std::string getpaisOrigem();

			 
			void setpaisOrigem(std::string _paisorigem);

	};
}

#endif