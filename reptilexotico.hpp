/** 
 * @file	reptilexotico.hpp
 * @brief	Definicao das classe reptil exótico.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto.
 * @since	12/11/2020
 * @date 	24/11/2020
 */	



#ifndef _REPTILEXOTICO_
#define _REPTILEXOTICO_

#include "reptil.hpp"
#include "nativo.hpp"
#include "exotico.hpp"

#include <ostream> 
#include <string>

namespace PetFera {
	
	/**
 	 * @class 	reptilexotico.hpp
  	 * @brief	Classe que representa um reptil exotico.
  	 * @details Os atributos de um reptil exotico são: id, classe,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat, tipopele, numero ibama e país de origem.
 	 */
	
	
	class ReptilExotico : public Reptil, public Exotico {

		public:
			
			/** @brief Construtor padrão */  
			ReptilExotico();

			/** @brief Construtor parametrizado */ 
			ReptilExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, std::string _tipopele,
			std::string _numibama, std::string _paisorigem);

			/** @brief Destrutor padrão */  
			~ReptilExotico();

		private:

			/** @brief Método para imprimir os dados de um Reptil exótico */  
			std::ostream& print(std::ostream&);


	};

}

#endif	