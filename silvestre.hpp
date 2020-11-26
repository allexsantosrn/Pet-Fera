/** 
 * @file	silvestre.hpp
 * @brief	Definicao da classe Silvestre.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

 #ifndef _SILVESTRE_
#define _SILVESTRE_

#include <string>


namespace PetFera {
	
	

	/**
 	 * @class 	slvestre.hpp
  	 * @brief	Classe que representa um Animal Silvestre
  	 * @details Os atributos de um animal nativo são: numero ibama.
 	 */


	class Silvestre {

		protected:

			std::string numibama;			 

		public:
			 
			/** @brief Construtor padrão */  

			Silvestre();

			/** @brief Construtor parametrizado */  
			Silvestre(std::string _numibama);

			/** @brief Destrutor padrão */   
			~Silvestre();

 			/** @brief Método get que retorna o número de registro do animal no Ibama*/
			std::string getnumIbama();
			
			/** @brief Método set que informa o número de registro do animal no Ibama*/ 
			void setnumIbama(std::string _numibama);

	};
}

#endif