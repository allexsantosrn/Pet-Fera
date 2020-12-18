/** 
 * @file	avenativa.hpp
 * @brief	Definicao da classe Ave Nativa.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#ifndef _AVENATIVA_
#define _AVENATIVA_

#include "ave.hpp"
#include "exotico.hpp"
#include "nativo.hpp"

#include <ostream> 
#include <string>

namespace PetFera {

	/**
 	 * @class 	avenativa.hpp
  	 * @brief	Classe que representa uma Ave Nativa
  	 * @details Os atributos de uma ave nativa são: id, classe, tipo,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat, tamanho do bico, numero ibama e regiao de origem.
 	 */

	class AveNativa : public Ave, public Nativo {

		public:
			/** @brief Construtor padrão */ 
			AveNativa();

			/** @brief Construtor parametrizado */
			AveNativa(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico, 
			std::string _ibama, std::string _regiaoorigem);

			/** @brief Destrutor padrão */ 
			virtual ~AveNativa();

		private:

			/** @brief Método para imprimir os dados de uma ave nativa*/
			std::ostream& print(std::ostream&);


	};

}

#endif	
	