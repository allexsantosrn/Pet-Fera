#ifndef _EXOTICO_
#define _EXOTICO_

#include "silvestre.hpp"

#include <iostream>
#include <string>


	class Exotico : public Silvestre {

		protected:

			std::string paisorigem;			

		public:
			
			Exotico();
			
			Exotico(int _numibama, std::string _paisorigem);

			~Exotico();

			std::string getpaisOrigem();

			void setpaisOrigem(std::string _paisorigem);

	};

#endif
