#ifndef _AVE_
#define _AVE_

#include "animal.hpp"
#include "nativo.hpp"
#include "exotico.hpp"

#include <ostream> 

#include <string>

namespace PetFera {
	
	
	class Ave : public Animal {

		protected:

			int tambico;			 

		public:
			 
			Ave();

			 	
			Ave(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico);

			 
			~Ave();

			 
			int gettamBico();

			 
			void settamBico(int _tambico);

		private:

			 
			std::ostream& print(std::ostream&);

	};

	 
	class AveNativa : public Ave, public Nativo {

		public:
			 
			AveNativa();

			 
			AveNativa(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico, 
			std::string _ibama, std::string _regiaoorigem);

			 
			~AveNativa();

		private:

			 
			std::ostream& print(std::ostream&);


	};
 
	class AveExotica : public Ave, public Exotico {

		public:
			 
			AveExotica();

			 
			AveExotica(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico,
			std::string _numibama, std::string _paisorigem);

			 
			~AveExotica();

		private:

			 
			std::ostream& print(std::ostream&);


	};
}

#endif