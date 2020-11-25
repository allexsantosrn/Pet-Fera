#ifndef _ANFIBIO_
#define _ANFIBIO_

#include "animal.hpp"
#include "nativo.hpp"
#include "exotico.hpp"

#include <ostream> 

#include <string>

namespace PetFera {
	
	
	class Anfibio : public Animal {

		protected:

			int qtdmudas;			 

		public:
			 
			Anfibio();

			 	
			Anfibio(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas);

			 
			~Anfibio();

			 
			int getqtdMudas();

			 
			void setqtdMudas(int _qtdmudas);

		private:

			 
			std::ostream& print(std::ostream&);

	};

	 
	class AnfibioNativo : public Anfibio, public Nativo {

		public:
			 
			AnfibioNativo();

			 
			AnfibioNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas, 
			std::string _ibama, std::string _regiaoorigem);

			 
			~AnfibioNativo();

		private:

			 
			std::ostream& print(std::ostream&);


	};
 
	class AnfibioExotico : public Anfibio, public Exotico {

		public:
			 
			AnfibioExotico();

			 
			AnfibioExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas,
			std::string _numibama, std::string _paisorigem);

			 
			~AnfibioExotico();

		private:

			 
			std::ostream& print(std::ostream&);


	};
}

#endif