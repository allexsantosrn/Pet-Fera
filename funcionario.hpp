#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_

#include <string>
#include <ostream>
#include <istream>
#include <iostream>

	class Funcionario {
		
		protected:		

			int id;					 
			std::string nome;			
			std::string cargo;			
			std::string cpf;
						
			 
		public:

			Funcionario();
				
			Funcionario(int _id, std::string _nome, std::string _cargo, std::string _cpf);

			~Funcionario();

			int getId();

			std::string getNome();

			std::string getCargo();

			std::string getCpf();

			void setId(int _id);

			void setNome(std::string _nome);

			void setCargo(std::string _cargo);

			void setCpf(std::string _cpf);

			friend std::ostream& operator<< (std::ostream &o, Funcionario const f);

			friend std::istream& operator>> (std::istream &i, Funcionario &f);

			//bool operator==(const Funcionario &f);

		//private:

			//virtual std::ostream& print(std::ostream&) const = 0;
			
	};

#endif
