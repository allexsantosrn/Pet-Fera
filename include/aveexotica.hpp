/** 
 * @file	aveexotica.hpp
 * @brief	Definicao da classe Ave Exotica.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#ifndef _AVEEXOTICA_
#define _AVEEXOTICA_

#include "ave.hpp"
#include "exotico.hpp"
#include "nativo.hpp"

#include <ostream> 
#include <string>

namespace PetFera {

	/**
 	 * @class 	aveexotica.hpp
  	 * @brief	Classe que representa uma Ave Exotica
  	 * @details Os atributos de uma ave exotica são: id, classe,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat, tamanho do bico, numero ibama e pais de origem.
 	 */

	class AveExotica : public Ave, public Exotico {

		public:
			/** @brief Construtor padrão */ 
			AveExotica();

			/** @brief Construtor parametrizado */
			AveExotica(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico,
			std::string _numibama, std::string _paisorigem);

			/** @brief Destrutor padrão */ 
			~AveExotica();

		private:

			/** @brief Método para imprimir os dados de uma ave exotica*/
			std::ostream& print(std::ostream&);


	};

}

#endif	