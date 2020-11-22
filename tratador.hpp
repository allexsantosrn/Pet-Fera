#ifndef _TRATADOR_
#define _TRATADOR_

#include "funcionario.hpp"

#include <string>
#include <ostream>
#include <istream>

	class Tratador : public Funcionario {

		protected:

			std::string nivelseguranca;


		public:
			
			Tratador();

			Tratador(int _id, std::string _nome, std::string _cargo, std::string _cpf, std::string _nivelseguranca);

			~Tratador();

			void setnivelSeguranca(std::string _nivelseguranca);

			std::string getnivelSeguranca();
			
			friend std::ostream& operator<< (std::ostream &o, Tratador t);

			friend std::istream& operator>> (std::istream &i, Tratador &t);

		//private:

			//std::ostream& print(std::ostream &o) const;
			

	};


#endif