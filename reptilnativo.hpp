/** 
 * @file	reptilnativo.hpp
 * @brief	Definicao da classe Reptil Nativo.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto.
 * @since	12/11/2020
 * @date 	24/11/2020
 */	

#ifndef _REPTILNATIVO_
#define _REPTILNATIVO_

#include "reptil.hpp"
#include "nativo.hpp"
#include "exotico.hpp"

#include <ostream> 
#include <string>

namespace PetFera {

	/**
 	 * @class 	reptilnativo.hpp
  	 * @brief	Classe que representa um Reptil
  	 * @details Os atributos de um anfibio são: id, classe,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat e tipopele.
 	 */
	


	class ReptilNativo : public Reptil, public Nativo {

		public:
			
			/** @brief Construtor padrão */  
			ReptilNativo();

			/** @brief Construtor parametrizado */ 
			ReptilNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, std::string _tipopele, 
			std::string _ibama, std::string _regiaoorigem);

			/** @brief Destrutor padrão */  
			~ReptilNativo();

		private:

			/** @brief Método para imprimir os dados de um Reptil nativo*/  
			std::ostream& print(std::ostream&);


	};

}

#endif