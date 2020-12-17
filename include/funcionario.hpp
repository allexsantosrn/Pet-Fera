/** 
 * @file	funcionario.hpp
 * @brief	Definicao da classe Funcionario.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_	

#include <ostream>
#include <string>

namespace PetFera {

	/**
 	 * @class 	funcionario.hpp
  	 * @brief	Classe que representa um Funcionario.
  	 * @details Os atributos de um funcionario são: id, nome, funçao e cpf.
 	 */
	
	class Funcionario {
		
		protected:		
			int id;	 /**< Identificador do funcionario */				 
			std::string nome;  /**< Nome do funcionario */	 
			std::string funcao;  /**< Funçao do funcionario */		 
			std::string cpf;  /**< CPF do funcinario */			 
			
		public:

			/** @brief Construtor padrão */ 
			Funcionario();
 			/** @brief Construtor parametrizado */ 
			Funcionario(int _id, std::string _nome, std::string _funcao, std::string _cpf);

			/** @brief Destrutor padrão */ 
			virtual ~Funcionario();

 			/** @brief Método get que retorna o id do funcionario */ 
			int getId();
			/** @brief Método get que retorna o nome do funcionario */ 
			std::string getNome();

			/** @brief Método get que retorna a funçao do funcionario */ 
			std::string getFuncao();

			/** @brief Método get que retorna o CPF do funcionario */ 
			std::string getCpf();

			/** @brief Método set que informa o id do funcionario */ 
			void setId(int _id);

			/** @brief Método set que informa o nome do funcionario */ 
			void setNome(std::string _nome);

			/** @brief Método set que informa a funçao do funcionario */ 
			void setFuncao(std::string _funcao);

			/** @brief Método set que informa o CPF do funcionario */ 
			void setCpf(std::string _cpf);
			
			/** @brief Sobrecarga do operador de insercao*/	 
			friend std::ostream& operator<< (std::ostream &o, Funcionario const &f);

			/** @brief Sobrecarga do operador de comparacao */
			bool operator==(const Funcionario &f);
 
		private:

			/** @brief Método para imprimir os dados de um funcinario */
			virtual std::ostream& print(std::ostream&) const = 0;
	};
}

#endif