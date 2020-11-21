#ifndef _MAMIFERO_EXOTICO_
#define _MAMIFERO_EXOTICO_

#include "mamifero.hpp"
#include "exotico.hpp"


	class MamiferoExotico : public Mamifero , public Exotico 	{

		public:

			MamiferoExotico();


			MamiferoExotico(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					       Tratador _tratador, int _tampelo, int _numibama, std::string _paisorigem);
				
			~MamiferoExotico();

	};


#endif
