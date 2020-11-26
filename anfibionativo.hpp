/** 
 * @file	anfibionativo.hpp
 * @brief	Definicao da classe Anfibio Nativo.
 * @author	Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */	

#ifndef _ANFIBIONATIVO_
#define _ANFIBIONATIVO_

#include "anfibio.hpp"
#include "nativo.hpp"

#include <ostream> 
#include <string>

namespace PetFera {
	
	/**
 	 * @class 	anfibionativo.hpp
  	 * @brief	Classe que representa um Anfibio Nativo
  	 * @details Os atributos de um anfibio exotico são: id, classe,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat, qtdmudas, numero ibama e regiao de origem.
 	 */
	
	class AnfibioNativo : public Anfibio, public Nativo {

		public:
			
			/** @brief Construtor padrão */ 
			AnfibioNativo();

			/** @brief Construtor parametrizado */
			AnfibioNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas, 
			std::string _ibama, std::string _regiaoorigem);

			/** @brief Destrutor padrão */ 
			~AnfibioNativo();

		private:

			/** @brief Método para imprimir os dados de um anfibio nativo*/ 
			std::ostream& print(std::ostream&);


	};

}

#endif	