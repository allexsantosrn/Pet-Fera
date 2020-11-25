#ifndef _AVE_
#define _AVE_

#include "animal.hpp"

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

	
 
}

#endif