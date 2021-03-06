/** 
 * @file	menu.hpp
 * @brief	Implementacao da classe que representa a assinatura dos métodos de entrada da aplicação.
 * @author	Alexandre Dantas dos Santos
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
using std::to_string;

#include <iostream>
#include <fstream>
#include <sstream>



namespace PetFera {
	
	/**
 	 * @class 	Menu menu.hpp
  	 * @brief	Classe que representa o menu da loja Pet Fera.
 	 * @details Os atributos da classe são: 
 	 *			lista_funcionarios e lista_animais  
 	 */
	class Menu {

		private:
			
		
			std::map<int, std::shared_ptr<Animal>> lista_animais;			/**< Lista de animais */
			std::map<int, std::shared_ptr<Funcionario>> lista_funcionarios;	     /**Lista de funcionários */

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

			/** @brief Método para consulta de um funcionário */
			void consultarFuncionario();

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

			/** @brief Método para exportar dados dos funcionários */
			void exportar_dados_funcionarios( std::ofstream& dados_funcionarios_exportar );

			/** @brief Método para importar dados dos funcionários */
			void importar_dados_funcionarios( std::ifstream& dados_funcionarios_importar );

			/** @brief Método para exportar dados dos animais */
			void exportar_dados_animais( std::ofstream& dados_animais_exportar );

			/** @brief Método para importar dados dos animais */
			void importar_dados_animais( std::ifstream& dados_animais_importar );

			
			
	};
}

#endif