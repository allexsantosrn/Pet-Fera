#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_	

#include <ostream>
#include <string>

namespace PetFera {
	
	class Funcionario {
		
		protected:		
			int id;					 
			std::string nome;			 
			std::string funcao;			 
			std::string cpf;				 
			
		public:

			 
			Funcionario();
 
			Funcionario(int _id, std::string _nome, std::string _funcao, std::string _cpf);

			 
			~Funcionario();
 
			int getId();

			 
			std::string getNome();

			 
			std::string getFuncao();

			 
			std::string getCpf();

			 
			void setId(int _id);

			 
			void setNome(std::string _nome);

			 
			void setFuncao(std::string _funcao);

			 
			void setCpf(std::string _cpf);

			 
			friend std::ostream& operator<< (std::ostream &o, Funcionario const &f);

			 
			bool operator==(const Funcionario &f);
 
		private:

			 
			virtual std::ostream& print(std::ostream&) const = 0;
	};
}

#endif