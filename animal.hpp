/** 
 * @file	animal.hpp
 * @brief	Definicao da classe Animal.
 * @author	Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#ifndef _ANIMAL_
#define _ANIMAL_	

#include "tratador.hpp"
#include "veterinario.hpp"

#include <ostream>
#include <string>


namespace PetFera {

	/**
 	 * @class 	animal.hpp
  	 * @brief	Classe que representa um Animal
  	 * @details Os atributos de um animal são: id, classe,
  	 *			nome, cientifico, sexo, veterinario, tratador, 
  	 *			venenoso e habitat.
 	 */
	
	class Animal {
		
		protected:		

			int id;								
			std::string classe;						
			std::string nome;						
			std::string cientifico;					
			char sexo;							
			Veterinario veterinario;			
			Tratador tratador;					
			bool venenoso;
			std::string habitat;						

		public:

			/** @brief Construtor padrão */ 
			Animal();

			/** @brief Construtor parametrizado */
			Animal(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat);

			/** @brief Destrutor padrão */ 
			~Animal();

			/** @brief Método get que retorna o id do animal.*/ 
			int getId();

			/** @brief Método get que retorna a classe do animal.*/ 
			std::string getClasse();

			/** @brief Método get que retorna o nome do animal.*/ 
			std::string getNome();

			/** @brief Método get que retorna o nome cientifico do animal.*/ 
			std::string getCientifico();

			/** @brief Método get que retorna o sexo do animal.*/ 
			char getSexo();

			/** @brief Método get que retorna o veterinario do animal.*/ 
			Veterinario getVeterinario();

			/** @brief Método get que retorna o tratador do animal.*/ 
			Tratador getTratador();

			/** @brief Método get que retorna se o animal e venenoso.*/ 
			bool getVenenoso();

			/** @brief Método get que retorna o habitat do animal.*/ 
			std::string getHabitat();

			/** @brief Método set que informa o id do animal.*/ 
			void setId(int _id);

			/** @brief Método set que informa a classe do animal.*/
			void setClasse(std::string _classe);

			/** @brief Método set que informa o nome do animal.*/
			void setNome(std::string _nome);

			/** @brief Método set que informa o nome cientifico do animal.*/
			void setCientifico(std::string _cientifico);

			/** @brief Método set que informa o sexo do animal.*/
			void setSexo(char _sexo);

			/** @brief Método set que informa o tamanho do animal.*/
			void setTamanho(float _tamanho);

			/** @brief Método set que informa a dieta do animal.*/
			void setDieta(std::string _dieta);

			/** @brief Método set que informa o veterinario do animal.*/
			void setVeterinario(Veterinario _veterinairo);

			/** @brief Método set que informa o tratador do animal.*/
			void setTratador(Tratador _tratador);

			/** @brief Método set que informa se o animal e venenoso.*/
			void setVenenoso(bool _venenoso);

			/** @brief Método set que informa o habitat do animal.*/
			void setHabitat(std::string _habitat);

			
			friend std::ostream& operator<< (std::ostream &o, Animal &a);

			
			bool operator==(const Animal &a);
 
		private:

			/** @brief Método para imprimir os dados de um animal*/ 
			virtual std::ostream& print(std::ostream&);

	};
}

#endif