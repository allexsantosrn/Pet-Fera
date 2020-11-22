#include "menu2.hpp"


void
Menu::cadastrarFuncionario() {	

	int id;
	std::string cargo, nome, cpf, crmv, nivel;

	std::shared_ptr<Veterinario> funcs1;
	std::shared_ptr<Tratador> funcs2;
	std::map<int, std::shared_ptr<Veterinario>>::iterator it1;
	std::map<int, std::shared_ptr<Tratador>>::iterator it2;


	std::cout << "Informe o número de identificação do funcionário(ID): ";
	std::cin >> id;	  

	it1 = lista_veterinarios.find(id);
	it2 = lista_tratadores.find(id);

	if (it1 != lista_veterinarios.end()) {

			std::cout << "Erro de cadastro. Já existe um veterinário com o número de identificação(ID) informado." << std::endl << std::endl;
				
		}


		else if (it2 != lista_tratadores.end() )  {


			std::cout << "Erro de cadastro. Já existe um tratador com o número de identificação(ID) informado." << std::endl << std::endl;


		}

		else {		

			std::cout << "Informe o nome do funcionário: ";
			std::cin.ignore();
			std::getline(std::cin, nome);
	
			std::cout << "Informe o cpf do funcionário: ";
			std::getline(std::cin, cpf);
		
			std::cout << "Informe o cargo do funcionário(Escolha: Veterinário ou Tratador): ";
			std::cin >> cargo;


				if (cargo == "veterinário" || cargo == "Veterinário") {

					std::cout << "Informe o CRMV do Veterinario: ";
					std::cin >> crmv; 	


					funcs1 = std::make_shared<Veterinario>(id, nome, cargo, cpf, crmv);

					lista_veterinarios[id] = funcs1;

					std::cout << "Veterinário cadastrado com sucesso!" << std::endl << std::endl;

				}

					else if  (cargo == "tratador" || cargo == "Tratador") {

						std::cout << "Informe o nível de segurança do tratador (Escolha: Verde, Azul ou Vermelho) : ";
						std::cin >> nivel;


						if (nivel == "Verde" ||  nivel == "Vermelho" || nivel == "Azul") {


							funcs2 = std::make_shared<Tratador>(id, nome, cargo, cpf, nivel);

							lista_tratadores[id] = funcs2;

							std::cout << "Tratador cadastrado com sucesso!" << std::endl << std::endl;

							}


								else {


									std::cout << "Nível de segurança inválido. Funcionário não cadastrado." << std::endl << std::endl;


								}



					 }


						else {

							std::cout << "Nível inválido. Funcionário não cadastrado." << std::endl << std::endl;


						}
		
	}						


}


void
Menu::removerFuncionario() {	

	int id;
	std::map<int, std::shared_ptr<Veterinario>>::iterator it1;
	std::map<int, std::shared_ptr<Tratador>>::iterator it2;

	std::cout << "Informe o número de identificação do funcionário(ID):  ";
	std::cin >> id;
		
	it1 = lista_veterinarios.find(id);
	it2 = lista_tratadores.find(id);
		
	if(it1 != lista_veterinarios.end()) {

		lista_veterinarios.erase(it1);

		std::cout <<"Veterinário removido com sucesso." << std::endl << std::endl;
			
	}

		else if (it2 != lista_tratadores.end()) {

			lista_tratadores.erase(it2);

			std::cout <<"Tratador removido com sucesso." << std::endl << std::endl;
		}		

			else { 

				std::cout << "Funcionário inexistente. Remoção não realizada." << std::endl << std::endl;

			}	

}

void 
Menu::alterarFuncionario() {

	int id; 
	char escolha;

	std::map<int, std::shared_ptr<Veterinario>>::iterator it1;
	std::map<int, std::shared_ptr<Tratador>>::iterator it2;

	std::cout << "Deseja alterar dados de qual tipo de funcionário? (Escolha: V para Veterinário ou T para Tratador): ";
	std::cin >> escolha;

	if (escolha == 'V' || escolha == 'v') {

		std::cout << "Informe o número de identificação do veterinário(ID): ";
		std::cin >> id;


		it1 = lista_veterinarios.find(id);	


			if (it1 != lista_veterinarios.end()) {
    
    			std::shared_ptr<Veterinario> v = it1->second;

				std::string nome, cpf, crmv;

				std::cout << "Informe o novo nome do veterinário: ";
				std::cin.ignore();
				std::getline(std::cin, nome);
	
				std::cout << "Informe o novo cpf do veterinário: ";
				std::getline(std::cin, cpf);
		
			
				std::cout << "Informe o novo crmv do veterinario: "; 
				std::cin >> crmv;

				v->setNome(nome);
				v->setCpf(cpf);
				v->setCrmv(crmv);

				std::cout << "As informações do veterinário selecionado foram atualizadas com sucesso!" << std::endl << std::endl;

			}

				else {


					std::cout << "Veterinário não localizado na base de dados." << std::endl << std::endl;


				}


	}				

		else if (escolha == 'T' || escolha == 't') {


			std::cout << "Informe o número de identificação do tratador(ID): ";
			std::cin >> id;
		
			it2 = lista_tratadores.find(id);

				if (it2 != lista_tratadores.end()) {
    
    				std::shared_ptr<Tratador> t = it2->second;

					std::string nome, cpf, nivelseguranca;

					std::cout << "Informe o novo nome do tratador: ";
					std::cin.ignore();
					std::getline(std::cin, nome);
	
					std::cout << "Informe o novo cpf do tratador: ";
					std::getline(std::cin, cpf);
		
			
					std::cout << "Informe o novo nível de segurança do tratador (Verde, Azul ou Vermelho): ";
					std::cin >> nivelseguranca;

						if (nivelseguranca == "Verde" ||  nivelseguranca == "Vermelho" || nivelseguranca == "Azul") {

						t->setNome(nome);
						t->setCpf(cpf);
						t->setnivelSeguranca(nivelseguranca);

						std::cout << "As informações do tratador selecionado foram atualizadas com sucesso!" << std::endl << std::endl;

						}

							else {

								std::cout << "Nível de segurança inválido. Tratador não foi atualizado." << std::endl << std::endl;

							}

			}

					else {

						std::cout << "Tratador não localizado na base de dados." << std::endl << std::endl;
			
					}	


		}					
}



void 
Menu::consultarFuncionario() {

	int id;
	std::map<int, std::shared_ptr<Veterinario>>::iterator it1;
	std::map<int, std::shared_ptr<Tratador>>::iterator it2;
	
	std::cout << "Informe o número de identificação do funcionário(ID): ";
	std::cin >> id;

	it1 = lista_veterinarios.find(id);
	it2 = lista_tratadores.find(id);

	if (it1 != lista_veterinarios.end()) {

		std::cout << *(it1->second) << std::endl;

	}

		else if (it2 != lista_tratadores.end()) {

			std::cout << *(it2->second) << std::endl;		

		}


			else {

				std::cout << "Funcionário inexistente na base de dados." << std::endl << std::endl;
		
			}

}









