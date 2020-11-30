/** 
 * @file	menu.hpp
 * @brief	Implementacao da classe que representa a assinatura dos métodos de entrada da aplicação.
 * @author	Alexandre Dantas dos Santos(allexkid@ufrn.edu.br)
 * @since	19/11/2020
 * @date 	24/11/2020
 */	

#ifndef _MENU_
#define _MENU_	

#include "petfera.hpp"

#include <memory>
using std::shared_ptr;
using std::make_shared;

#include <map>

#include <string>
using std::string;



namespace PetFera {
	
	/**
 	 * @class 	Menu menu.hpp
  	 * @brief	Classe que representa o menu.
 	 * @details Os atributos da classe são: 
 	 *			lista_funcionarios e lista_animais  
 	 */
	class Menu {

		private:
			
		
			std::map<int, std::shared_ptr<Animal>> lista_animais;			/**< Lista de animais */
			std::map<int, std::shared_ptr<Veterinario>> lista_veterinarios;   			/**< Lista de veterinários */
			std::map<int, std::shared_ptr<Tratador>> lista_tratadores;				/**< Lista de tratadores */

		public:
			/** @brief Construtor padrao */
			Menu();

			/** @brief Destrutor padrao */
			~Menu();

			/** @brief Método para cadastrar um funcionario */
			void cadastrarFuncionario();

			/** @brief Método para remover um funcionario */
			void removerFuncionario();

			/** @brief Método para alterar os dados de um funcionario */
			void alterarFuncionario();

			/** @brief Método para cadastrar um animal */
			void cadastrarAnimal();

			/** @brief Método para remover um animal */
			void removerAnimal();

			/** @brief Método para alterar os dados de um animal */
			void alterarAnimal();

			/** @brief Método para consulta de um animal */
			void consultarAnimal();

			/** @brief Método para consultar animais por classe */
			void consultarporClasse();

			/** @brief Método para consultar animais por funcionário */
			void consultarporFuncionario();

			/** @brief Método para consulta de um funcionário */
			void consultarFuncionario();
	};
}

#endif