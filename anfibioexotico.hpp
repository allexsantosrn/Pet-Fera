/** 
 * @file	anfibio.hpp
 * @brief	Definicao da classe Anfibio Exotico.
 * @author	Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */	

#ifndef _ANFIBIOEXOTICO_
#define _ANFIBIOEXOTICO_

#include "anfibio.hpp"
#include "exotico.hpp"

#include <ostream> 
#include <string>

namespace PetFera {
	/**
 	 * @class 	anfibioexotico.hpp
  	 * @brief	Classe que representa um Anfibio Exotico
  	 * @details Os atributos de um anfibio exotico são: id, classe,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat, qtdmudas, numero ibama e pais de origem.
 	 */
	
	class AnfibioExotico : public Anfibio, public Exotico {

		public:

			/** @brief Construtor padrão */ 
			AnfibioExotico();

			/** @brief Construtor parametrizado */ 	
			AnfibioExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas,
			std::string _numibama, std::string _paisorigem);

			/** @brief Destrutor padrão */ 
			~AnfibioExotico();

		private:

			/** @brief Método para imprimir os dados de um anfibio exotico*/ 
			std::ostream& print(std::ostream&);


	};

}

#endif	