/** 
 * @file	anfibio.hpp
 * @brief	Definicao das classe Anfíbio.
 * @author	Alexandre Dantas dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */	

#ifndef _ANFIBIO_
#define _ANFIBIO_

#include "animal.hpp"


#include <ostream> 
#include <string>

namespace PetFera {

	/**
 	 * @class 	anfibio.hpp
  	 * @brief	Classe que representa um Anfibio
  	 * @details Os atributos de um anfibio são: id, classe, tipo,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso, habitat e qtdmudas.
 	 */
	
	
	class Anfibio : public Animal {

		protected:

			int qtdmudas;	/**< Quantitativo total de mudas de um anfíbio. */

		public:
			 
			/** @brief Construtor padrão */ 
			Anfibio();

			/** @brief Construtor parametrizado */ 	
			Anfibio(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas);

			/** @brief Destrutor padrão */ 
			virtual ~Anfibio();

			/** @brief Método get que retorna o total de mudas de um anfíbio.*/ 
			int getqtdMudas();

			/** @brief Método set que informa o total de mudas de um anfíbio.*/ 	 
			void setqtdMudas(int _qtdmudas);

		private:

			/** @brief Método para imprimir os dados de um anfíbio */ 
			std::ostream& print(std::ostream&);

	};

 
}

#endif