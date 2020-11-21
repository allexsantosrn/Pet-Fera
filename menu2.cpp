#include "menu.hpp"


void
Menu::cadastrarFuncionario() {	

	int id;
	std::string cargo, nome, cpf, crmv, nivel;

	std::shared_ptr<Veterinario> funcs;
	std::shared_ptr<Veterinario> funcs2;
	std::map<int, std::shared_ptr<Veterinario>>::iterator it1;
	std::map<int, std::shared_ptr<Veterinario>>::iterator it2;


	std::cout << "Informe o número de identificação do funcionário(ID): ";
	std::cin >> id;	  

	std::cout << "Informe o nome do funcionário: ";
	std::cin.ignore();
	std::getline(std::cin, nome);
	
	std::cout << "Informe o cpf do funcionário: ";
	std::getline(std::cin, cpf);
		
	std::cout << "Informe o cargo do funcionário(Veterinário ou Tratador): ";
	std::cin >> cargo;


	if (cargo == "veterinário" || cargo == "Veterinário") {

		std::cout << "Informe o CRMV do Veterinario: ";
		std::cin >> crmv;
	

		it1 = lista_veterinarios.find(id);
		it2 = lista_tratadores.find(id);

			if (it != lista_veterinarios.end()) {

				std::cout << "Erro de cadastro. Já existe um veterinário com o número de identificação(ID) informado.";	
				
			}

			else if (it2 = lista_tratadores.find(id)) {

				std::cout << "Erro de cadastro. Já existe um tratador com o número de identificação(ID) informado.";	

			}


			else {

			funcs = std::make_shared<Veterinario>(id, nome, cargo, cpf, nivel);

			lista_funcionarios[id] = funcs;

			std::cout << "Veterinário cadastrado com sucesso!" << std::endl;

			}

		}		
		

	else if (cargo == "tratador" || cargo == "Tratador") {

		std::cout << "Informe o nível de segurança do tratador (Verde, Azul ou Vermelho) : ";
		std::cin.ignore();
		getline(std::cin, nivel);


		if (nivel == "Verde" ||  nivel == "Vermelho" || nivel == "Azul") {

			
			it = lista_funcionarios.find(id);


			if (it != lista_funcionarios.end()) {

				std::cout << "Erro de cadastro. Já existe um funcionário com o número de identificação(ID) informado." << std::endl;
				
			}


			else {

				funcs = std::make_shared<Tratador>(id, nome, cargo, cpf, nivel);

				lista_funcionarios[id] = funcs;

				std::cout << "Tratador cadastrado com sucesso!" << std::endl;

			}	

			
		}


		else {

			std::cout << "Tratador não cadastrado. Nível de segurança inválido." << std::endl;
			
		}	
	}						

	
	else {

		std::cout << "Cargo inválido. Cadastro não realizado." << std::endl;
	}

}

	else {

		std::cout << "Funcionário inexistente na base de dados." << std::endl;
		
	}








