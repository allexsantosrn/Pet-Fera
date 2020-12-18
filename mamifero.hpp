/** 
 * @file	mamifero.hpp
 * @brief	Definicao das classe Anfíbio.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto.
 * @since	12/11/2020
 * @date 	24/11/2020
 */	


#ifndef _MAMIFERO_
#define _MAMIFERO_

#include "animal.hpp"

#include <ostream> 
#include <string>

namespace PetFera {

	/**
 	 * @class 	mamifero.hpp
  	 * @brief	Classe que representa um mamifero
  	 * @details Os atributos de um mamifero são: id, classe,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat e tamanho do pelo.
 	 */
	
	
	class Mamifero : public Animal {

		protected:

			int tampelo;	/**< Tamanho do pelo do animal. */		 

		public:

			/** @brief Construtor padrão */  
			Mamifero();

			/** @brief Construtor parametrizado */ 	
			Mamifero(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo);

			/** @brief Destrutor padrão */  
			~Mamifero();

			/** @brief Método get que retorna o tamanho de pelo do animal.*/  
			int gettamPelo();

			/** @brief Método set que retorna o tamanho de pelo do animal.*/  
			void settamPelo(int _tampelo);

		private:

			 
			/** @brief Método para imprimir os dados de um mamífero */ 
			std::ostream& print(std::ostream&);

	};
	 
	
	
}

#endif