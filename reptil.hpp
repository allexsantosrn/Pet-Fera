#ifndef _REPTIL_
#define _REPTIL_

#include "animal.hpp"

#include <ostream> 
#include <string>

namespace PetFera {
	
	
	class Reptil : public Animal {

		protected:

			std::string tipopele;			 

		public:
			 
			Reptil();

			 	
			Reptil(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, std::string _tipopele);

			 
			~Reptil();

			 
			std::string gettipoPele();

			 
			void settipoPele(std::string _tipopele);

		private:

			 
			std::ostream& print(std::ostream&);

	};	 
	
 
	
}

#endif