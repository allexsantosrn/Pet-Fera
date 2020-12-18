/** 
 * @file	mamiferoexotico.hpp
 * @brief	Definicao da classe Mamífero Exotico.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto
 * @since	12/11/2020
 * @date 	24/11/2020
 */	

#ifndef _MAMIFEROEXOTICO_
#define _MAMIFEROEXOTICO_

#include "mamifero.hpp"
#include "exotico.hpp"


#include <ostream> 
#include <string>

namespace PetFera {

	/**
 	 * @class 	mamiferoexotico.hpp
  	 * @brief	Classe que representa um Mamifero Exotico
  	 * @details Os atributos de um Mamifero exotico são: id, classe,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat, tampelo, numero ibama e pais de origem.
 	 */


	class MamiferoExotico : public Mamifero, public Exotico {

		public:

			/** @brief Construtor padrão */  
			MamiferoExotico();

			/** @brief Construtor parametrizado */  
			MamiferoExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo,
			std::string _numibama, std::string _paisorigem);

			/** @brief Destrutor padrão */  
			~MamiferoExotico();

		private:

			/** @brief Método para imprimir os dados de um Mamídero exotico */  
			std::ostream& print(std::ostream&);


	};

}

#endif