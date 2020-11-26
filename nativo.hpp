/** 
 * @file	nativo.hpp
 * @brief	Definicao da classe Nativo.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */


#ifndef _NATIVO_
#define _NATIVO_

#include "silvestre.hpp"
 
#include <string>


namespace PetFera {
	

	/**
 	 * @class 	nativo.hpp
  	 * @brief	Classe que representa um Animal Nativo
  	 * @details Os atributos de um animal nativo são: numero ibama e região de origem.
 	 */

	
	class Nativo : public Silvestre {

		protected:

			std::string regiaoorigem;			/**< Região de origem de um animal*/		 
			 		 

		public:
			 
			/** @brief Construtor padrão */  
			Nativo();

			 
			/** @brief Construtor parametrizado */ 
			Nativo(std::string _numibama, std::string _regiaoorigem);

			/** @brief Destrutor padrão */ 
			~Nativo();

			 /** @brief Método get que retorna o pais de origem do animal*/
			std::string getregiaoOrigem();		 
			
			/** @brief Método set que informa o pais de origem do animal*/  
			void setregiaoOrigem(std::string _regiaoorigem);

			 
	};
}

#endif