#include "menu.hpp"

void
Menu::cadastrarFuncionario() {	

	int id;
	std::string cargo;
	std::string nome;
	std::string cpf;
	std::string crmv;
	std::string nivel;


	std::cout << "Informe o número de identificação do funcionário(ID): " << std::endl;
	std::cin >> id;	  

	std::cout << "Informe o nome do funcionário: " << std::endl;
	std::cin >> nome;

	std::cout << "Informe o cpf do funcionário: " << std::endl;
	std::cin >> cpf;

	std::cout << "Informe o cargo do funcionário(v para veterinário ou t para tratador): " << std::endl;
	std::cin >> cargo;



	if (cargo == "v" || cargo == "V") {

		std::cout << "Informe o CRMV do Veterinario): " << std::endl;
		std::cin >> crmv;	  

		Veterinario Veterinario(id, nome, cargo, cpf, crmv); 

		std::cout << "Veterinário cadastrado com sucesso!!!!" << std::endl;

	}

	else if (cargo == "t" || cargo == "T") {

		std::cout << "Informe o nível de segurança do tratador): " << std::endl;
		std::cin >> nivel;	

		Tratador Tratador(id, nome, cargo, cpf, nivel); 

		std::cout << "Tratador cadastrado com sucesso!!!!" << std::endl;

	}

	else {

		std::cout << "Cargo inválido.";

	}




}