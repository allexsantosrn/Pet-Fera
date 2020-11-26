/** 
 * @file	veterinario.hpp
 * @brief	Definicao da classe veterinario.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto
 * @date 	24/11/2020
 */

#ifndef _VETERINARIO_
#define _VETERINARIO_

#include "funcionario.hpp"

#include <ostream>
using std::ostream;

#include <string>
//using std::string;

namespace PetFera {

	/**
 	 * @class 	veterinario.hpp
  	 * @brief	Classe que representa um veterinario
  	 * @details Os atributos de um veterinario são: id, nome, funçao,cpf e crmv.
 	 */
	
	
	
	class Veterinario : public Funcionario {

		protected:

			std::string crmv; /**< CRMV do veterinario*/	

		public:
			
			/** @brief Construtor padrão */ 
			Veterinario();

			/** @brief Construtor parametrizado */ 	
			Veterinario(int _id, std::string _nome, std::string _funcao, std::string _cpf, std::string _crmv);

			/** @brief Destrutor padrão */ 
			~Veterinario();

			/** @brief Método set que informa o CRMV do veterinario.*/ 
			void setCrmv(std::string _crmv);

			/** @brief Método get que retorna o CRMV do veterinario.*/ 
			std::string getCrmv();

		private:
			
			/** @brief Método para imprimir os dados de um veterinario.*/
			std::ostream& print(std::ostream &o) const;
	};
}

#endif