#ifndef _VETERINARIO_
#define _VETERINARIO_

#include "funcionario.hpp"

#include <ostream>
using std::ostream;

#include <string>
//using std::string;

namespace PetFera {
	
	
	class Veterinario : public Funcionario {

		protected:

			std::string crmv;

		public:
			
			
			Veterinario();

				
			Veterinario(int _id, std::string _nome, std::string _funcao, std::string _cpf, std::string _crmv);

			
			~Veterinario();

			void setCrmv(std::string _crmv);

			std::string getCrmv();

		private:
			
		
			std::ostream& print(std::ostream &o) const;
	};
}

#endif