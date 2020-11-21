#ifndef _NATIVO_
#define _NATIVO_

#include "silvestre.hpp"

#include <iostream>
#include <string>


	class Nativo : public Silvestre {

		protected:

			std::string regiaoorigem;			

		public:
			
			Nativo();
			
			Nativo(int _numibama, std::string _regiaoorigem);

			~Nativo();

			std::string getregiaoOrigem();

			void setregiaoOrigem(std::string _paisorigem);

	};


#endif
