/** 
 * @file	reptil.hpp
 * @brief	Definicao das classe Reptil.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto.
 * @since	12/11/2020
 * @date 	24/11/2020
 */	


#ifndef _REPTIL_
#define _REPTIL_

#include "animal.hpp"

#include <ostream> 
#include <string>

namespace PetFera {

	/**
 	 * @class 	reptil.hpp
  	 * @brief	Classe que representa um Reptil
  	 * @details Os atributos de um reptil são: id, classe,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat e tipopele.
 	 */
	
	
	
	class Reptil : public Animal {

		protected:

			std::string tipopele;	/**< Tipo de pele de um Reptil. */		 

		public:
			/** @brief Construtor padrão */  
			Reptil();

			/** @brief Construtor parametrizado */ 	 	
			Reptil(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, std::string _tipopele);

			/** @brief Destrutor padrão */  
			~Reptil();

			/** @brief Método get que retorna o tipo de pele do Reptil */  
			std::string gettipoPele();

			/** @brief Método set que informa o tipo de pele de um Reptil */
			void settipoPele(std::string _tipopele);

		private:

			/** @brief Método para imprimir os dados de um Reptil */ 
			std::ostream& print(std::ostream&);

	};	 
	
 
	
}

#endif