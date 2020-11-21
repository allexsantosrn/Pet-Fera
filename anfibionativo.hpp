#ifndef _ANFIBIO_NATIVO_
#define _ANFIBIO_NATIVO_

#include "anfibio.hpp"
#include "nativo.hpp"


	class AnfibioNativo : public Anfibio , public Nativo 	{

		public:

			AnfibioNativo();


			AnfibioNativo(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					       Tratador _tratador, int _qtdmudas, int _numibama, std::string _regiaoorigem);
				
			~AnfibioNativo();


			friend std::ostream& operator << (std::ostream &o,AnfibioNativo a);

			friend std::istream& operator >> (std::istream &i,AnfibioNativo &a);

	};


#endif



