#ifndef _MAMIFERO_NATIVO_
#define _MAMIFERO_NATIVO_

#include "mamifero.hpp"
#include "nativo.hpp"


	class MamiferoNativo : public Mamifero , public Nativo 	{

		public:

			MamiferoNativo();


			MamiferoNativo(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					       Tratador _tratador, int _tampelo, int _numibama, std::string _regiaoorigem);
				
			~MamiferoNativo();

			friend std::ostream& operator << (std::ostream &o,MamiferoNativo m);

			friend std::istream& operator >> (std::istream &i,MamiferoNativo &m);

	};


#endif
