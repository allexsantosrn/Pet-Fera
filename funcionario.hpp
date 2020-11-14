#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_

#include <string>
#include <ostream>
#include <istream>

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

			friend std::ostream& operator<< (std::ostream &o, Funcionario f);

			friend std::istream& operator>> (std::istream &i, Funcionario &f);
			
	};

#endif
