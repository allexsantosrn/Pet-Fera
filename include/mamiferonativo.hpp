/** 
 * @file	mamiferonativo.hpp
 * @brief	Definicao da classe Mamifero Nativo.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto.
 * @since	12/11/2020
 * @date 	24/11/2020
 */	


#ifndef _MAMIFERONATIVO_
#define _MAMIFERONATIVO_

#include "mamifero.hpp"
#include "nativo.hpp"

#include <ostream> 
#include <string>

namespace PetFera {

	/**
 	 * @class 	mamiferonativo.hpp
  	 * @brief	Classe que representa um Mamífero Nativo
  	 * @details Os atributos de um Mamífero nativo são: id, classe, tipo,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat, tampelo, numero ibama e regiao de origem.
 	 */


	class MamiferoNativo : public Mamifero, public Nativo {

		public:

			/** @brief Construtor padrão */ 
			MamiferoNativo();

			/** @brief Construtor parametrizado */ 
			MamiferoNativo(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tampelo, 
			std::string _ibama, std::string _regiaoorigem);

			/** @brief Destrutor padrão */  
			virtual ~MamiferoNativo();

		private:

			/** @brief Método para imprimir os dados de um mamífero nativo */  
			std::ostream& print(std::ostream&);


	};

}

#endif