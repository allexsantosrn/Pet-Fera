#include <iostream>

#include "menu.hpp"

int main () {

	Menu menu;

	int selecao;

	while (true) {

		std::cout << "---------Loja Pet Fera---------" << std::endl;
		std::cout << "Escolha uma das opções abaixo:" << std::endl;
		std::cout << "(1) Cadastrar Animal" << std::endl;
		std::cout << "(2) Remover Animal" << std::endl;
		std::cout << "(3) Alterar Animal" << std::endl;
		std::cout << "(4) Consultar Animal" << std::endl;
		std::cout << "(5) Consultar Classe de Animais" << std::endl;
		std::cout << "(6) Consultar Animais de Funcionario" << std::endl;
		std::cout << "(7) Cadastrar Funcionário" << std::endl;
		std::cout << "(8) Remover Funcionário" << std::endl;
		std::cout << "(9) Alterar Funcionário" << std::endl;
		std::cout << "(10) Consultar Funcionário" << std::endl;
		std::cout << "(0) Sair" << std::endl;
		std::cout << "Selecionar Opção: ";
		std::cin >> selecao;	

		switch(selecao) {

			case 1:
				std::cout << "teste1" << std::endl;
				break;

			case 2:
				menu.removerAnimal();
				break;


			case 3:
				std::cout << "teste3" << std::endl;
				break;

			case 4:
				menu.consultarAnimal();
				break;

			case 5:
				std::cout << "teste5" << std::endl;
				break;

			case 6:
				std::cout << "teste6" << std::endl;
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


	


	
	
