#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_

#include <string>

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

	};

#endif
