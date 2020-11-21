#ifndef _ANFIBIO_EXOTICO_
#define _ANFIBIO_EXOTICO_

#include "anfibio.hpp"
#include "exotico.hpp"


	class AnfibioExotico : public Anfibio , public Exotico 	{

		public:

			AnfibioExotico();


			AnfibioExotico(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					       Tratador _tratador, int _qtdmudas, int _numibama, std::string _paisorigem);
				
			~AnfibioExotico();

			friend std::ostream& operator << (std::ostream &o,AnfibioExotico a);

			friend std::istream& operator >> (std::istream &i,AnfibioExotico &a);

	};


#endif
