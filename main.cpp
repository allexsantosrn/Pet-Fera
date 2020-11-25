/** 
 * @file	main.cpp
 * @brief	Implementacao da classe que representa o meu de seleção do usuário.
 * @author	Alexandre Dantas dos Santos(allexkid@ufrn.edu.br)
 * @since	19/11/2020
 * @date 	24/11/2020
 */	

#include "petfera.hpp"
#include "menu.hpp"

#include <iostream>

int main () {

	PetFera::Menu menu;
	int selecao;

	while (true) {

		std::cout << "**********Loja Pet Fera**********" << std::endl;
		std::cout << "Escolha uma das opções abaixo:" << std::endl;
		std::cout << "(1) Cadastrar Animal" << std::endl;
		std::cout << "(2) Remover Animal" << std::endl;
		std::cout << "(3) Alterar Animal" << std::endl;
		std::cout << "(4) Consultar Animal" << std::endl;
		std::cout << "(5) Consultar Animais por Classe" << std::endl;
		std::cout << "(6) Consultar Animais por Funcionario" << std::endl;
		std::cout << "(7) Cadastrar Funcionário" << std::endl;
		std::cout << "(8) Remover Funcionário" << std::endl;
		std::cout << "(9) Alterar Funcionário" << std::endl;
		std::cout << "(10) Consultar Funcionário" << std::endl;
		std::cout << "(0) Sair" << std::endl;
		std::cout << "Selecionar Opção: ";
		std::cin >> selecao;	

		switch(selecao) {

			case 1:
				menu.cadastrarAnimal();
				break;

			case 2:

				menu.removerAnimal();				
				break;


			case 3:
				//menu.alterarAnimal();
				break;

			case 4:
				menu.consultarAnimal();
				break;

			case 5:
				menu.consultarporClasse();
				break;

			case 6:
				menu.consultarporFuncionario();
				break;

			case 7:
				menu.cadastrarFuncionario();
				break;

			case 8:
				menu.removerFuncionario();
				break;

			case 9:
				menu.alterarFuncionario();
				break;

			case 10: 
				menu.consultarFuncionario();
				break;

			case 0:
				std::cout << "Programa encerrado. Volte sempre." << std::endl;
				return 0;

			default:
				std::cout << "Opção inválida. Selecione uma opção entre 1 a 10." << std::endl;
				break;

		}

}

return 0;

}