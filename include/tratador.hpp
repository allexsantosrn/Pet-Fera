/** 
 * @file	tratador.hpp
 * @brief	Definicao da classe tratador.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto.
 * @date 	24/11/2020
 */

#ifndef _TRATADOR_
#define _TRATADOR_

#include "funcionario.hpp"

#include <ostream>
#include <string>

namespace PetFera {
	
	/**
 	 * @class 	tratador.hpp
  	 * @brief	Classe que representa um tratador.
  	 * @details Os atributos de um tratador são: id, nome, funçao,cpf e nível de segurança.
 	 */
	
	
	class Tratador : public Funcionario {

		protected:

			std::string nivelseguranca; /**< Nível de segurança com qual o tratador pode trabalhar */	

		public:

			/** @brief Construtor padrão */ 
			Tratador();

			/** @brief Construtor parametrizado */ 		
			Tratador(int _id, std::string _nome, std::string _funcao, std::string _cpf, std::string _nivelseguranca);

			/** @brief Destrutor padrão */ 
			~Tratador();

			/** @brief Método set que informa o Nivel de segurança do tratador */
			void setnivelSeguranca(std::string _nivelseguranca);

			/** @brief Método get que retorna o Nivel de segurança do tratador */
			std::string getnivelSeguranca();

		private:
			
			/** @brief Método para imprimir os dados de um veterinario */
			std::ostream& print(std::ostream &o) const;
	};
}

#endif