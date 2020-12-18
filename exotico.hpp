/** 
 * @file	exotico.hpp
 * @brief	Definicao da classe Exotico.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#ifndef _EXOTICO_
#define _EXOTICO_

#include "silvestre.hpp"

#include <string>
 

namespace PetFera {
	
	/**
 	 * @class 	exotico.hpp
  	 * @brief	Classe que representa um Animal Exotico
  	 * @details Os atributos de um animal exotico são: numero ibama e pais de origem.
 	 */

	class Exotico : public Silvestre {

		protected:

			std::string paisorigem;	/**< Pais de origem de um animal*/		 

		public:
			/** @brief Construtor padrão */ 
			Exotico();

			/** @brief Construtor parametrizado */ 
			Exotico(std::string _numibama, std::string _paisorigem);

			
			/** @brief Destrutor padrão */ 
			~Exotico();

			/** @brief Método get que retorna o pais de origem do animal*/ 
			std::string getpaisOrigem();

			/** @brief Método set que informa o pais de origem do animal*/ 
			void setpaisOrigem(std::string _paisorigem);

	};
}

#endif