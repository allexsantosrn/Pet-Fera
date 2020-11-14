#ifndef _TRATADOR_
#define _TRATADOR_

#include "funcionario.hpp"

#include <string>
#include <ostream>
#include <istream>

	class Tratador : public Funcionario {

		private:

			std::string nivelseguranca;


		public:
			
			Tratador();

			Tratador(int _id, std::string _nome, std::string _funcao, std::string _cpf, std::string _nivelseguranca);

			~Tratador();

			void setNivelseguranca(std::string _nivelseguranca);

			std::string getNivelseguranca();
			
			friend std::ostream& operator<< (std::ostream &o, Tratador t);

			friend std::istream& operator>> (std::istream &i, Tratador &t);
			

	};


#endif