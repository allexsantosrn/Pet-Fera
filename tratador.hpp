#ifndef _TRATADOR_
#define _TRATADOR_

#include "funcionario.hpp"

#include <ostream>
#include <string>

namespace PetFera {
	
	
	class Tratador : public Funcionario {

		protected:

			std::string nivelseguranca;

		public:
			
			Tratador();

				
			Tratador(int _id, std::string _nome, std::string _funcao, std::string _cpf, std::string _nivelseguranca);

			
			~Tratador();

			void setnivelSeguranca(std::string _nivelseguranca);

			std::string getnivelSeguranca();

		private:
			
			
			std::ostream& print(std::ostream &o) const;
	};
}

#endif