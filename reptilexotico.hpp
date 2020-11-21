#ifndef _REPTIL_EXOTICO_
#define _REPTIL_EXOTICO_

#include "reptil.hpp"
#include "exotico.hpp"


	class ReptilExotico : public Reptil , public Exotico 	{

		public:

			ReptilExotico();


			ReptilExotico(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					       Tratador _tratador, std::string _habitat, int _numibama, std::string _paisorigem);
				
			~ReptilExotico();


			friend std::ostream& operator << (std::ostream &o,ReptilExotico r);

			friend std::istream& operator >> (std::istream &i,ReptilExotico &r);

	};


#endif
