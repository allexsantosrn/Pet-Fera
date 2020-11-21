#ifndef _AVE_EXOTICA_
#define _AVE_EXOTICA_

#include "ave.hpp"
#include "exotico.hpp"


	class AveExotica : public Ave , public Exotico 	{

		public:

			AveExotica();

			AveExotica(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					   Tratador _tratador, std::string _formatobico, int _numibama, std::string _paisorigem);
			
			~AveExotica();
		
	};


#endif
