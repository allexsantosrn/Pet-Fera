#include "menu.hpp"

void
Menu::cadastrarFuncionario() {	

	int id;
	std::string cargo, nome, cpf, crmv, nivel;

	std::shared_ptr<Funcionario> func;
	std::map<int, std::shared_ptr<Funcionario>>::iterator it;


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

		//Veterinario Veterinario(id, nome, cargo, cpf, crmv); 

		std::cout << "Veterinário cadastrado com sucesso!!!!" << std::endl;

	}

	else if (cargo == "t" || cargo == "T") {

		std::cout << "Informe o nível de segurança do tratador): " << std::endl;
		std::cin >> nivel;	

		//Tratador Tratador(id, nome, cargo, cpf, nivel); 

		func = std::make_shared<Tratador>(id, nome, cargo, cpf, nivel);
			it = lista_funcionarios.find(id);
			if(it != lista_funcionarios.end()) {
				std::cout << "Erro no cadastramento." << std::endl;
				std::cout << "O Funcionario ja foi cadastrado." << std::endl;
				return;
			}

			lista_funcionarios[id] = func;
			std::cout << "Tratador cadastrado com sucesso!!!!" << std::endl;
			
			return;

	}

	else {

		std::cout << "Cargo inválido. \n";

	}




}