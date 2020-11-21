#ifndef _REPTIL_NATIVO_
#define _REPTIL_NATIVO_

#include "reptil.hpp"
#include "nativo.hpp"


	class ReptilNativo : public Reptil , public Nativo 	{

		public:

			ReptilNativo();


			ReptilNativo(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					     Tratador _tratador, std::string _habitat, int _numibama, std::string _regiaoorigem);
				
			~ReptilNativo();

			friend std::ostream& operator << (std::ostream &o,ReptilNativo r);

			friend std::istream& operator >> (std::istream &i,ReptilNativo &r);

	};


#endif
