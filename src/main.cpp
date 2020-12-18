/** 
 * @file	main.cpp
 * @brief	Implementacao da classe que representa o menu de seleção do usuário.
 * @author	Alexandre Dantas dos Santos
 * @since	19/11/2020
 * @date 	24/11/2020
 */	

#include "petfera.hpp"
#include "menu.hpp"

#include <iostream>


int main () {

	PetFera::Menu menu;
	int selecao;

	
	std::ifstream dados_funcionarios_importar("data/dados_funcionarios.csv");
	 	if(!dados_funcionarios_importar.is_open()) {
 		std::cout << "Erro na leitura da planilha dos funcionários." << '\n';
 		return 0;
 	}	
	menu.importar_dados_funcionarios( dados_funcionarios_importar );	
    
    	
	std::ifstream dados_animais_importar("data/dados_animais.csv");
 	if(!dados_animais_importar.is_open()) {
 	std::cout << "Erro na leitura da planilha dos animais." << '\n';
 	return 0;
 	}	
	menu.importar_dados_animais( dados_animais_importar );	

	
	
	do {

		//Painel de seleção do usuário

		std::cout << std::endl << "**********Loja Pet Fera**********" << std::endl << std::endl;
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
				menu.alterarAnimal();
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

		
			default:

				if (selecao < 0 || selecao > 10) {
				std::cout << "Opção inválida. Selecione uma opção entre 1 a 10." << std::endl;
				break;

				}

		}	


	}

	while (selecao != 0);
				
				std::ofstream dados_funcionarios_exportar;
				dados_funcionarios_exportar.open ("data/dados_funcionarios.csv");
				menu.exportar_dados_funcionarios( dados_funcionarios_exportar );
				
								
				std::ofstream dados_animais_exportar;
				dados_animais_exportar.open ("data/dados_animais.csv");
				menu.exportar_dados_animais( dados_animais_exportar );
				

				std::cout << "Programa encerrado. Volte sempre." << std::endl;

				

return 0;

}