#include "menu.hpp"

void
Menu::cadastrarFuncionario() {	

	int id;
	std::string cargo, nome, cpf, crmv, nivel;

	std::shared_ptr<Funcionario> funcs;
	std::map<int, std::shared_ptr<Funcionario>>::iterator it;


	std::cout << "Informe o número de identificação do funcionário(ID): " << std::endl;
	std::cin >> id;	  

	std::cout << "Informe o nome do funcionário: " << std::endl;
	std::cin >> nome;

	std::cout << "Informe o cpf do funcionário: " << std::endl;
	std::cin >> cpf;
	
	std::cout << "Informe o cargo do funcionário(Veterinário ou Tratador): " << std::endl;
	std::cin >> cargo;


	if (cargo == "veterinário" || cargo == "Veterinário") {

		std::cout << "Informe o CRMV do Veterinario: " << std::endl;
		std::cin >> crmv;


		funcs = std::make_shared<Veterinario>(id, nome, cargo, cpf, nivel);

		it = lista_funcionarios.find(id);


			if (it != lista_funcionarios.end()) {

				std::cout << "Erro de cadastro. Já existe um funcionário com o número de identificação(ID) informado." << std::endl;	
				
			}


			else {

			lista_funcionarios[id] = funcs;

			std::cout << "Veterinário cadastrado com sucesso!" << std::endl;

			}

		}		
		

	else if (cargo == "tratador" || cargo == "Tratador") {

		std::cout << "Informe o nível de segurança do tratador (Verde, Azul ou Vermelho) : " << std::endl;
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


void
Menu::removerFuncionario() {	

	int id;
	std::map<int, std::shared_ptr<Funcionario>>::iterator it; 

	std::cout << "Digite o número de identificação do funcionário(ID):";
	std::cin >> id;
		
	it = lista_funcionarios.find(id);
		
	if(it != lista_funcionarios.end()) {

			lista_funcionarios.erase(it);

			std::cout <<"Funcionário removido com sucesso." << std::endl;
			
		}

	else { 

		std::cout << "Funcionário Inexistente. Remoção não realizada." << std::endl;

	}

}


void 
Menu::consultarFuncionario() {

	int id;
	std::map<int, std::shared_ptr<Funcionario>>::iterator it; 
	
	std::cout << "Digite o número de identificação do funcionário(ID):";
	std::cin >> id;

	it = lista_funcionarios.find(id);

	if(it != lista_funcionarios.end()) {

			std::cout << *(it->second) << std::endl;
			
		}

	else {

		std::cout << "Funcionário Inexistente na base de dados." << std::endl;	
		
	}

}






