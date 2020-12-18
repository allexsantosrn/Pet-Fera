/** 
 * @file	ave.cpp
 * @brief	Definicao da classe Ave.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#ifndef _AVE_
#define _AVE_

#include "animal.hpp"

#include <ostream> 

#include <string>

namespace PetFera {
	
	/**
 	 * @class 	ave.hpp
  	 * @brief	Classe que representa uma Ave
  	 * @details Os atributos de uma ave são: id, classe,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat e tamanho do bico.
 	 */
	
	class Ave : public Animal {

		protected:

			int tambico; /**< Tamanho do bico de uma ave*/		 

		public:
			/** @brief Construtor padrão */ 
			Ave();

			/** @brief Construtor parametrizado */
			Ave(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico);

			/** @brief Destrutor padrão */ 
			~Ave();

			/** @brief Método get que retorna o tamanho do bico da ave.*/ 
			int gettamBico();

			/** @brief Método set que informa o tamanho do bico do animal.*/
			void settamBico(int _tambico);

		private:

			/** @brief Método para imprimir os dados de uma ave*/ 
			std::ostream& print(std::ostream&);

	};

	
 
}

#endif