#ifndef _REPTIL_
#define _REPTIL_

#include "animal.hpp"
#include "nativo.hpp"
#include "exotico.hpp"

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

	 
	class ReptilNativo : public Reptil, public Nativo {

		public:
			 
			ReptilNativo();

			 
			ReptilNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, std::string _tipopele, 
			std::string _ibama, std::string _regiaoorigem);

			 
			~ReptilNativo();

		private:

			 
			std::ostream& print(std::ostream&);


	};
 
	class ReptilExotico : public Reptil, public Exotico {

		public:
			 
			ReptilExotico();

			 
			ReptilExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, std::string _tipopele,
			std::string _numibama, std::string _paisorigem);

			 
			~ReptilExotico();

		private:

			 
			std::ostream& print(std::ostream&);


	};
}

#endif