#ifndef _MAMIFERO_
#define _MAMIFERO_

#include "animal.hpp"
#include "nativo.hpp"
#include "exotico.hpp"

#include <ostream> 
#include <string>

namespace PetFera {
	
	
	class Mamifero : public Animal {

		protected:

			int tampelo;			 

		public:
			 
			Mamifero();

			 	
			Mamifero(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo);

			 
			~Mamifero();

			 
			int gettamPelo();

			 
			void settamPelo(int _tampelo);

		private:

			 
			std::ostream& print(std::ostream&);

	};

	 
	class MamiferoNativo : public Mamifero, public Nativo {

		public:
			 
			MamiferoNativo();

			 
			MamiferoNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo, 
			std::string _ibama, std::string _regiaoorigem);

			 
			~MamiferoNativo();

		private:

			 
			std::ostream& print(std::ostream&);


	};
 
	class MamiferoExotico : public Mamifero, public Exotico {

		public:
			 
			MamiferoExotico();

			 
			MamiferoExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo,
			std::string _numibama, std::string _paisorigem);

			 
			~MamiferoExotico();

		private:

			 
			std::ostream& print(std::ostream&);


	};
}

#endif