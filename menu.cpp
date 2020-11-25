/** 
 * @file	menu.cpp
 * @brief	Implementacao da classe que identifica os métodos utilizados pelas funcionalidades do sistema.
 * @author	Alexandre Dantas dos Santos (allexkid@ufrn.br)
 * @since	14/11/2020
 * @date 	24/11/2020
 */	


#include "menu.hpp"

#include <iostream>
#include <memory>
#include <string>
#include <typeinfo>
#include <map>


namespace PetFera {
	
	// Construtor padrao 
	Menu::Menu() {}

	// Destrutor padrao
	Menu::~Menu() {}


	// Método para cadastrar um novo funcionário (Tratador ou Veterinário)

	void 
	Menu::cadastrarFuncionario() {
		
		int id;
		std::string funcao, nome, cpf, crmv, nivelseguranca;

		std::shared_ptr<Funcionario> funcs;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it;


		std::cout << "Informe o número de identificação do funcionário(ID): ";
		std::cin >> id;	  

		it = lista_funcionarios.find(id);

			if (it != lista_funcionarios.end()) {

				std::cout << "Erro de cadastro. Já existe um funcionário registrado com o número de identificação(ID) informado." << std::endl;
				
			}

			else {		

				std::cout << "Informe o nome do funcionário: ";
				std::cin.ignore();
				std::getline(std::cin, nome);
	
				std::cout << "Informe o cpf do funcionário: ";
				std::getline(std::cin, cpf);
		
				std::cout << "Informe o funcao do funcionário(Veterinario ou Tratador): ";
				std::cin >> funcao;


					if (funcao == "veterinario" || funcao == "Veterinario") {

						std::cout << "Informe o CRMV do Veterinario: ";
						std::cin >> crmv; 	


						funcs = std::make_shared<Veterinario>(id, nome, funcao, cpf, crmv);

						lista_funcionarios[id] = funcs;

					
						std::cout << "Veterinário cadastrado com sucesso!" << std::endl;

					}

					else if  (funcao == "tratador" || funcao == "Tratador") {

						std::cout << "Informe o nível de segurança do tratador (Verde, Azul ou Vermelho) : ";
						std::cin >> nivelseguranca;


							if (nivelseguranca == "Verde" ||  nivelseguranca == "Vermelho" || nivelseguranca == "Azul") {


								funcs = std::make_shared<Tratador>(id, nome, funcao, cpf, nivelseguranca);

							 	lista_funcionarios[id] = funcs;

							 	std::cout << "Tratador cadastrado com sucesso!" << std::endl; 

							}


							else {

								std::cout << "Nível de segurança inválido. Funcionário não cadastrado." <<std::endl;


							}

					}


					else {

						std::cout << "Função inválida. Funcionário não cadastrado." << std::endl;


					}				

		
				}					
	}

	// Método para remoção de um funconário
	
	void
	Menu::removerFuncionario() {	

		int id;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it; 

		std::cout << "Informe o número de identificação do funcionário(ID):  ";
		std::cin >> id;
		
		it = lista_funcionarios.find(id);
		
	
			if (it != lista_funcionarios.end()) {

				lista_funcionarios.erase(it);

				std::cout <<"Funcionário removido com sucesso." << std::endl;
			
			}


			else { 

					std::cout << "Funcionário inexistente. Remoção não realizada." << std::endl;

			}

	}

	void 
	Menu::alterarFuncionario() {
		
		int id; 
		char escolha;

		std::map<int, std::shared_ptr<Funcionario>>::iterator it;


		std::cout << "Deseja alterar dados de qual tipo de funcionário? (Escolha: V para Veterinário ou T para Tratador): ";
		std::cin >> escolha;


			if (escolha == 'V' || escolha == 'v') {

				std::cout << "Informe o número de identificação do veterinário(ID): ";
				std::cin >> id;


				it = lista_funcionarios.find(id);	


					if (it != lista_funcionarios.end() && (it->second)->getFuncao() == "Veterinario") {
    
    					std::shared_ptr<Funcionario> funcionario = it->second;

						std::string nome, cpf, crmv;

						std::cout << "Informe o novo nome do veterinário: ";
						std::cin.ignore();
						std::getline(std::cin, nome);
	
						std::cout << "Informe o novo cpf do veterinário: ";
						std::getline(std::cin, cpf);
		
			
						std::cout << "Informe o novo crmv do veterinario: "; 
						std::cin >> crmv;

						std::shared_ptr<Veterinario> v = std::dynamic_pointer_cast<Veterinario>(funcionario);

						v->setNome(nome);
						v->setCpf(cpf);
						v->setCrmv(crmv);

						std::cout << "As informações do veterinário selecionado foram atualizadas com sucesso!" << std::endl << std::endl;

					}

					else {


						std::cout << "Veterinário não foi localizado na base de dados." << std::endl << std::endl;


					}


			}				

			else if (escolha == 'T' || escolha == 't') {


			std::cout << "Informe o número de identificação do tratador(ID): ";
			std::cin >> id;
		
			it = lista_funcionarios.find(id);

				if (it != lista_funcionarios.end() && (it->second)->getFuncao() == "Tratador") {
    
    				std::shared_ptr<Funcionario> funcionario = it->second;

					std::string nome, cpf, nivelseguranca;

					std::cout << "Informe o novo nome do tratador: ";
					std::cin.ignore();
					std::getline(std::cin, nome);
	
					std::cout << "Informe o novo cpf do tratador: ";
					std::getline(std::cin, cpf);
		
			
					std::cout << "Informe o novo nível de segurança do tratador (Verde, Azul ou Vermelho): ";
					std::cin >> nivelseguranca;

						if (nivelseguranca == "Verde" ||  nivelseguranca == "Vermelho" || nivelseguranca == "Azul") {

							std::shared_ptr<Tratador> t = std::dynamic_pointer_cast<Tratador>(funcionario);
							
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

					std::cout << "Tratador não foi localizado na base de dados." << std::endl << std::endl;
			
				}	


			}

			else {

				std::cout << "Opção inválida. Alteração não realizada." << std::endl << std::endl;					
	
			}




	}



	void Menu::cadastrarAnimal() {

		int id, idvet, idtrat;
		std::string classe, nome, cientifico, tipo, habitat;		
		char sexo;
		bool venenoso;


		std::shared_ptr<Animal> animal;
		std::shared_ptr<Tratador> trat = std::make_shared<Tratador>();
		std::shared_ptr<Veterinario> vet = std::make_shared<Veterinario>();

		std::map<int, std::shared_ptr<Animal>>::iterator it1;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it2;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it3; 


		std::cout << "Digite o identificador: ";
		std::cin >> id;


		it1 = lista_animais.find(id);


		if(it1 != lista_animais.end()) {

			std::cout << std::endl << "Erro no cadastramento." << std::endl;
			std::cout << "O Animal ja foi cadastrado." << std::endl << std::endl;
			
		}

		else {


			std::cout << "Informe o identificador do Veterinario do animal: ";
			std::cin >> idvet;
			std::cout << "Informe o identificador do Tratador do animal: ";
			std::cin >> idtrat; 



			if (idvet >=0 && idtrat >=0)  {



					std::cout << "Informe a classe do animal(Anfibio, Mamífero, Reptil ou Aves): ";
					std::cin.ignore();
					std::getline(std::cin, classe);


					if (classe == "Anfibio" || classe == "Aves" || classe == "Mamífero" || classe == "Reptil") {


						std::cout << "Digite a classificacao do animal se e Nativo, Exotico ou Domestico: ";
						std::getline(std::cin, tipo);

						
						if (tipo == "Nativo" || tipo == "Exotico" || tipo == "Domestico")  {


							std::cout << "Informe o nome do animal: ";
							std::getline(std::cin, nome);
							std::cout << "Informe o nome cientifico do animal: ";
							std::getline(std::cin, cientifico);
							std::cout << "Informe o sexo do animal: ";
							std::cin >> sexo;
							std::cout << "O Animal é venenoso? (Informe 0 para não e 1 para sim)";
							std::cin >> venenoso;
							std::cout << "Informe o habitat do animal: ";
							std::cin.ignore();
							std::getline(std::cin, habitat);
							

								if (classe == "Anfibio") {

								int qtdmudas;								

								std::cout << "Informe a quantidade de mudas do anfíbio: ";
								std::cin >> qtdmudas;
								

									if (tipo == "Nativo") {


										std::string numibama, regiaoorigem;
										std::cout << "Digite o número do ibama: ";
										std::cin >> numibama;
										std::cout << "Digite a região de origem: ";
										std::cin >> regiaoorigem;
									

										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
												animal = std::make_shared<AnfibioNativo>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, qtdmudas, numibama, regiaoorigem);
												lista_animais[id] = animal;

												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
											}

											else { 

											std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

											}

									}

									else if (tipo == "Exotico") {

										std::string numibama, paisorigem;
										std::cout << "Digite o número do ibama: ";
										std::cin >> numibama;
										std::cout << "Digite o pais de origem: ";
										std::cin >> paisorigem;

										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
												animal = std::make_shared<AnfibioExotico>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, qtdmudas, numibama, paisorigem);
												lista_animais[id] = animal;

												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
												}

											else { 

												std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

												}

									}			

									else {


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
												animal = std::make_shared<Anfibio>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, qtdmudas);
												lista_animais[id] = animal;

												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
											}

											else { 

											std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

											}

									}		
		


								}


								else if (classe == "Aves")  {


									int tambico;

									std::cout << "Digite o tamanho do bico: ";
									std::cin >> tambico;
									

									if (tipo == "Nativo") {


										std::string numibama, regiaoorigem;
										std::cout << "Digite o número do ibama: ";
										std::cin >> numibama;
										std::cout << "Digite a região de origem: ";
										std::cin >> regiaoorigem;


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
												animal = std::make_shared<AveNativa>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tambico, numibama, regiaoorigem);

												lista_animais[id] = animal;

												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
											}

											else { 

											std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

											}

									}

									else if (tipo == "Exotico") {

										std::string numibama, paisorigem;
										std::cout << "Digite o número do ibama: ";
										std::cin >> numibama;
										std::cout << "Digite o pais de origem: ";
										std::cin >> paisorigem;

										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
												animal = std::make_shared<AveExotica>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tambico, numibama, paisorigem);

												lista_animais[id] = animal;

												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
												}

											else { 

												std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

												}

									}			

									else {


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
												animal = std::make_shared<Ave>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tambico);
												lista_animais[id] = animal;

												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
											}

											else { 

											std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

											}



									}


								}

								else if (classe == "Mamífero") {


									int tampelo;
									std::cout << "Digite o tamanho do pelo: ";
									std::cin >> tampelo;

									it2 = lista_funcionarios.find(idvet);
									it3 = lista_funcionarios.find(idtrat);

									if (tipo == "Nativo") {


										std::string numibama, regiaoorigem;
										std::cout << "Digite o número do ibama: ";
										std::cin >> numibama;
										std::cout << "Digite a região de origem: ";
										std::cin >> regiaoorigem;


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
												animal = std::make_shared<MamiferoNativo>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tampelo, numibama, regiaoorigem);
												lista_animais[id] = animal;
												
												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
											}

											else { 

											std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

											}

									}

									else if (tipo == "Exotico") {

										std::string numibama, paisorigem;
										std::cout << "Digite o número do ibama: ";
										std::cin >> numibama;
										std::cout << "Digite o pais de origem: ";
										std::cin >> paisorigem;

										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
												animal = std::make_shared<MamiferoExotico>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tampelo, numibama, paisorigem);
												lista_animais[id] = animal;

												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
												}

											else { 

												std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

												}

									}			

									else {


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
												animal = std::make_shared<Mamifero>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tampelo);
												lista_animais[id] = animal;

												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
											}

											else { 

											std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

											}



									}


								}


								else if (classe == "Reptil")   {

									std::string tipopele;
									std::cout << "Informe o tipo de pele: ";
									std::cin >> tipopele;
									

									if (tipo == "Nativo") {


										std::string numibama, regiaoorigem;
										std::cout << "Digite o número do ibama: ";
										std::cin >> numibama;
										std::cout << "Digite a região de origem: ";
										std::cin >> regiaoorigem;


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

												animal = std::make_shared<ReptilNativo>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tipopele, numibama, regiaoorigem);											
												lista_animais[id] = animal;

												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
											}

											else { 

											std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

											}

									}

									else if (tipo == "Exotico") {

										std::string numibama, paisorigem;
										std::cout << "Digite o número do ibama: ";
										std::cin >> numibama;
										std::cout << "Digite o pais de origem: ";
										std::cin >> paisorigem;

										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
												animal = std::make_shared<ReptilExotico>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tipopele, numibama, paisorigem);
												lista_animais[id] = animal;

												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
												}

											else { 

												std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

												}

									}			

									else  {


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
												animal = std::make_shared<Reptil>(id, classe, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tipopele);												
												lista_animais[id] = animal;

												std::cout << std::endl << "-----Animal cadastrado-----" << std::endl << std::endl;
						
											}

											else { 

											std::cout << std::endl << "Erro, veterinario ou/e tratador nao encontrado." << std::endl << std::endl;

											}

									}

								}



						}
						

						else {


							std::cout << "Classificação errônea. Cadastro não realizado.";
						
						}	


					}
					

					else {


							std::cout << "Classe de Animais inválida. Cadastro não realizado.";

					}


			}
			

			else {


				std::cout << "Identificadores para funcionários inválidos. Cadastro não realizado.";

			}	



			
		}

	} 





		
	
	void
	Menu::removerAnimal() {	

		int id;
		std::map<int, std::shared_ptr<Animal>>::iterator it; 

		std::cout << "Informe o número de identificação do animal(ID):";
		std::cin >> id;
		
		it = lista_animais.find(id);

		
			if(it != lista_animais.end()) {

			lista_animais.erase(it);

			std::cout <<"Animal removido com sucesso." << std::endl;
			
			}


		else { 

			std::cout << "Animal inexistente. Remoção não realizada." << std::endl;

		}

} 

	

	void 
	Menu::consultarAnimal() {

	int id;
	std::map<int, std::shared_ptr<Animal>>::iterator it; 
	
	std::cout << "Informe o número de identificação do animal(ID):";
	std::cin >> id;

	it = lista_animais.find(id);


		if (it != lista_animais.end()) {

			std::cout << *(it->second) << std::endl;
			
			}


		else {

			std::cout << "Animal inexistente na base de dados." << std::endl;
		
		}

	}

	void 
	Menu::consultarporClasse() {

		std::string classe;
		int cont = 0;

		std::map<int, std::shared_ptr<Animal>>::iterator it; 

		std::cout << "Digite a classe de animais (Anfibio, Mamifero, Reptil ou Aves): ";
		std::cin >> classe;

		for(it = lista_animais.begin(); it != lista_animais.end(); ++it) {

			if((it->second)->getClasse() == classe) {

				std::cout << "--------------------------------------" << std::endl;
				std::cout << std::endl << *(it->second) << std::endl << std::endl;
				std::cout << "--------------------------------------" << std::endl;;
				cont++;

			}
		}

		if(cont == 0) {

			std::cout << std::endl << "Nao existem animais associados a classe informada." << std::endl << std::endl;

		}
	}

	void Menu::consultarporFuncionario() {

		int id;
		int cont = 0;
		std::map<int, std::shared_ptr<Animal>>::iterator it;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it2; 
		std::cout << "Digite o identificador do funcionário(ID): ";
		std::cin >> id;

		it2 = lista_funcionarios.find(id);

		if(it2 != lista_funcionarios.end()) {

			std::cout << std::endl << "Funcionário removido com sucesso." << std::endl << std::endl;

			for(it = lista_animais.begin(); it != lista_animais.end(); ++it) {

				if((it->second)->getVeterinario().getId() == id || (it->second)->getTratador().getId() == id) {
					std::cout << "--------------------------------------" << std::endl;
					std::cout << std::endl << *(it->second) << std::endl << std::endl;
					std::cout << "--------------------------------------" << std::endl;;
					cont++;
				}
			}

			if(cont == 0) {

				std::cout << std::endl << "Nao existem animais associados ao funcionario informado." << std::endl << std::endl;

			}
		}
		
	}

	void 
	Menu::consultarFuncionario() {

		int id;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it; 
	
		std::cout << "Informe o número de identificação do funcionário(ID): ";
		std::cin >> id;

		it = lista_funcionarios.find(id);

			if(it != lista_funcionarios.end()) {

				std::cout << *(it->second) << std::endl;

			}

			else {

				std::cout << "Funcionário inexistente na base de dados." << std::endl;
		
			}

	}
}
