/** 
 * @file	menu.cpp
 * @brief	Implementacção da classe que identifica os métodos utilizados pelas funcionalidades do sistema.
 * @author	Alexandre Dantas dos Santos
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


	// Método para cadastrar um novo funcionário (Tratador ou Veterinário).	
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

				std::cout << std::endl << "Erro de cadastro. Já existe um funcionário registrado com o número de identificação(ID) informado." << std::endl << std::endl;
				
			}

			else {		

				std::cout << "Informe o nome do funcionário: ";
				std::cin.ignore();
				std::getline(std::cin, nome);
	
				std::cout << "Informe o cpf do funcionário: ";
				std::getline(std::cin, cpf);
		
				std::cout << "Informe a função do funcionário (Veterinario ou Tratador): ";
				std::cin >> funcao;


					if (funcao == "veterinario" || funcao == "Veterinario") {

						std::cout << "Informe o CRMV do Veterinario: ";
						std::cin >> crmv; 	


						funcs = std::make_shared<Veterinario>(id, nome, funcao, cpf, crmv);

						lista_funcionarios[id] = funcs;

					
						std::cout << std::endl << "Veterinário cadastrado com sucesso!" << std::endl << std::endl;

					}

					else if  (funcao == "tratador" || funcao == "Tratador") {

						std::cout << "Informe o nível de segurança do tratador (Verde, Azul ou Vermelho) : ";
						std::cin >> nivelseguranca;


							if (nivelseguranca == "Verde" ||  nivelseguranca == "Vermelho" || nivelseguranca == "Azul") {


								funcs = std::make_shared<Tratador>(id, nome, funcao, cpf, nivelseguranca);

							 	lista_funcionarios[id] = funcs;

							 	 std::cout << std::endl << "Tratador cadastrado com sucesso!" << std::endl << std::endl; 

							}


							else {

								std::cout << std::endl <<  "Nível de segurança inválido. Funcionário não cadastrado." << std::endl << std::endl;

							}

					}


					else {

						std::cout << std::endl <<  "Função inválida. Funcionário não cadastrado." << std::endl << std::endl;


					}				

		
				}					
	}
	
	
	// Método para remoção de um funcionário.
	void
	Menu::removerFuncionario() {	

		int id;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it;
		
		std::cout << "Informe o número de identificação do funcionário(ID):  ";
		std::cin >> id;
		
		it = lista_funcionarios.find(id);
			
	
			if (it != lista_funcionarios.end()) {

				lista_funcionarios.erase(it);
				
				std::cout << std::endl <<"Funcionário removido com sucesso." << std::endl << std::endl;
			
			}

			
			else { 

					std::cout << std::endl << "Funcionário inexistente. Remoção não realizada." << std::endl << std::endl;

			}

	}


	
	//Método para alteração de um funcionário.
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

						std::cout << std::endl << "As informações do veterinário selecionado foram atualizadas com sucesso!" << std::endl << std::endl;

					}


					else {


						std::cout << std::endl <<  "Veterinário não foi localizado na base de dados." << std::endl << std::endl;


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

							std::cout << std::endl << "As informações do tratador selecionado foram atualizadas com sucesso!" << std::endl << std::endl;

						}

						else {

							std::cout << std::endl << "Nível de segurança inválido. Tratador não foi atualizado." << std::endl << std::endl;

						}

				}


				else {

					std::cout << std::endl << "Tratador não foi localizado na base de dados." << std::endl << std::endl;
			
				}	


			}

			else {

				std::cout << std::endl << "Opção inválida. Alteração não realizada." << std::endl << std::endl;					
	
			}

	}

	
	//Método para consulta de funcionário.
	void 
	Menu::consultarFuncionario() {

		int id;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it;
			
		std::cout << "Informe o número de identificação do funcionário(ID): ";
		std::cin >> id;

		it = lista_funcionarios.find(id);
		

			if(it != lista_funcionarios.end()) {

				std::cout << "\n";
				std::cout << *(it->second) << std::endl;				

			}

			else {

				std::cout << std::endl << "Funcionário inexistente na base de dados." << std::endl << std::endl;		
			}

	}

	

	
	//Método para cadastrar um novo animal.
	void Menu::cadastrarAnimal() {

		int id, idvet, idtrat;
		std::string classe, nome, cientifico, tipo, habitat;		
		char sexo;
		bool venenoso;


		std::shared_ptr<Animal> animal;
		std::shared_ptr<Funcionario> funcionario;

		std::shared_ptr<Tratador> trat = std::make_shared<Tratador>();
		std::shared_ptr<Veterinario> vet = std::make_shared<Veterinario>();

		std::map<int, std::shared_ptr<Animal>>::iterator it1;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it2;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it3; 

		

		std::cout << "Informe o número de identificação do animal(ID): ";
		std::cin >> id;


		it1 = lista_animais.find(id);


		if(it1 != lista_animais.end()) {

			std::cout << std::endl << "O Animal já cadastrado. Cadastro não realizado." << std::endl << std::endl;
			
		}

		else {


			std::cout << "Informe o número de identificação do Veterinario do animal: ";
			std::cin >> idvet;
			std::cout << "Informe o número de identificação do Tratador do animal: ";
			std::cin >> idtrat; 



			if (idvet > 0 && idtrat > 0)  {



					std::cout << "Informe a classe do animal(Anfibio, Mamifero, Reptil ou Ave): ";
					std::cin.ignore();
					std::getline(std::cin, classe);


					if (classe == "Anfibio" || classe == "Ave" || classe == "Mamifero" || classe == "Reptil") {


						std::cout << "Informe a classificacao do animal (Nativo, Exotico ou Domestico): ";
						std::getline(std::cin, tipo);

						
						if (tipo == "Nativo" || tipo == "Exotico" || tipo == "Domestico")  {


							std::cout << "Informe o nome do animal: ";
							std::getline(std::cin, nome);
							std::cout << "Informe o nome cientifico do animal: ";
							std::getline(std::cin, cientifico);
							std::cout << "Informe o sexo do animal: ";
							std::cin >> sexo;
							std::cout << "O Animal é venenoso? (Informe 0 para não e 1 para sim): ";
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
										std::cout << "informe o número do ibama: ";
										std::cin.ignore();
										std::getline(std::cin, numibama);
										std::cout << "Informe a região de origem: ";
										std::getline(std::cin, regiaoorigem);
										
										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

										

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {

													vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
													trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
											
													if(trat->getnivelSeguranca() != "Azul") {

													if ((trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))){ 

														
														animal = std::make_shared<AnfibioNativo>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, qtdmudas, numibama, regiaoorigem);
														lista_animais[id] = animal;

														std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
													}	

												}

												else  {

													std::cout << std::endl << "Tratadores com nível de segurança: Azul não podem tratar de animais da classe anfíbio. " << std::endl << std::endl;

												}
						
											}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}

									} 

									else if (tipo == "Exotico") {

										std::string numibama, paisorigem;
										std::cin.ignore();
										std::cout << "informe o número do ibama: ";
										std::getline(std::cin, numibama);
										std::cout << "Informe o país de origem: ";
										std::getline(std::cin, paisorigem);

										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);	

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);


												if(trat->getnivelSeguranca() != "Azul") {


													if ((trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))){ 


														
														animal = std::make_shared<AnfibioExotico>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, qtdmudas, numibama, paisorigem);
														lista_animais[id] = animal;

														std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
													}	

												}

												else  {

													std::cout << std::endl << "Tratadores com nível de segurança: Azul não podem tratar de animais da classe anfíbio. " << std::endl << std::endl;

												}
						
											}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}


									}			

									else {


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

												if(trat->getnivelSeguranca() != "Azul") {

													if ((trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))){ 

													
														animal = std::make_shared<Anfibio>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, qtdmudas);
														lista_animais[id] = animal;

														std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
													}	

												}

												else  {

													std::cout << std::endl << "Tratadores com nível de segurança: Azul não podem tratar de animais da classe anfíbio. " << std::endl << std::endl;

												}
						
											}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}

									}				


								}
								
								
								else if (classe == "Ave")  {


									int tambico;

									std::cout << "Informe o tamanho do bico: ";
									std::cin >> tambico;
									

									if (tipo == "Nativo") {


										std::string numibama, regiaoorigem;
										std::cout << "informe o número do ibama: ";
										std::cin.ignore();
										std::getline(std::cin, numibama);
										std::cout << "Informe a região de origem: ";
										std::getline(std::cin, regiaoorigem);


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {
											
												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);	

												if ((trat->getnivelSeguranca() == "Azul") || (trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))){ 


													animal = std::make_shared<AveNativa>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tambico, numibama, regiaoorigem);
													lista_animais[id] = animal;

													std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
												}
												

												else {

													std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
												}	

						
											}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}

									}

									else if (tipo == "Exotico") {

										std::string numibama, paisorigem;
										std::cout << "informe o número do ibama: ";
										std::cin.ignore();
										std::getline(std::cin, numibama);
										std::cout << "Informe o país de origem: ";
										std::getline(std::cin, paisorigem);
										
										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {
												
												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

												if ((trat->getnivelSeguranca() == "Azul") || (trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))){ 


													
													animal = std::make_shared<AveExotica>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tambico, numibama, paisorigem);
													lista_animais[id] = animal;

													std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
												}
												

												    else {

													std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
												   
												   }	

						
											}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}
									}			

									else {


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {
												
												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

												if ((trat->getnivelSeguranca() == "Azul") || (trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))){ 

													
													animal = std::make_shared<Ave>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tambico);
													lista_animais[id] = animal;

													std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
												}
												

												else {

													std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
												}	

						
											}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}


									}


								}

								

								else if (classe == "Mamifero") {


									int tampelo;
									std::cout << "Informe o tamanho do pelo: ";
									std::cin >> tampelo;

									it2 = lista_funcionarios.find(idvet);
									it3 = lista_funcionarios.find(idtrat);

									if (tipo == "Nativo") {


										std::string numibama, regiaoorigem;
										std::cout << "informe o número do ibama: ";
										std::cin.ignore();
										std::getline(std::cin, numibama);
										std::cout << "Informe a região de origem: ";
										std::getline(std::cin, regiaoorigem);


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

												if(trat->getnivelSeguranca() != "Verde") {

													if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))){ 


														
														animal = std::make_shared<MamiferoNativo>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tampelo, numibama, regiaoorigem);
														lista_animais[id] = animal;

														std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
													}	

												}

												else  {

													std::cout << std::endl << "Tratadores com nível de segurança: Verde não podem tratar de animais da classe ave. " << std::endl << std::endl;

												}
						
											}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}

									}

									else if (tipo == "Exotico") {

										std::string numibama, paisorigem;
										std::cout << "informe o número do ibama: ";
										std::cin.ignore();
										std::getline(std::cin, numibama);
										std::cout << "Informe o país de origem: ";
										std::getline(std::cin, paisorigem);

										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

												if(trat->getnivelSeguranca() != "Verde") {

													if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) {
														
                                                        animal = std::make_shared<MamiferoExotico>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tampelo, numibama, paisorigem);
														lista_animais[id] = animal;

														std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
													}	

												}

												else  {

													std::cout << std::endl << "Tratadores com nível de segurança: Verde não podem tratar de animais da classe ave. " << std::endl << std::endl;

												}
						
											}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}
									}			

									else {


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

												if(trat->getnivelSeguranca() != "Verde") {

													if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 
														
                                                        animal = std::make_shared<Mamifero>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tampelo);
														lista_animais[id] = animal;

														std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
												
												    }

												}

												else  {

													std::cout << std::endl << "Tratadores com nível de segurança: Verde não podem tratar de animais da classe ave. " << std::endl << std::endl;

												}
						
											}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}


									}


								}

								

								else if (classe == "Reptil")   {

									std::string tipopele;
									std::cout << "Informe o tipo de pele: ";
									std::getline(std::cin, tipopele);
									
									

									if (tipo == "Nativo") {


										std::string numibama, regiaoorigem;
										std::cout << "informe o número do ibama: ";
										std::cin.ignore();
										std::getline(std::cin, numibama);
										std::cout << "Informe a região de origem: ";
										std::getline(std::cin, regiaoorigem);


										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
													
												if(trat->getnivelSeguranca() != "Verde") {

													if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

													
												        animal = std::make_shared<ReptilNativo>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tipopele, numibama, regiaoorigem);											

														lista_animais[id] = animal;

														std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
													}	

												}

												else  {

													std::cout << std::endl << "Tratadores com nível de segurança: Verde não podem tratar de animais da classe réptil. " << std::endl << std::endl;

												}
						
												}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}

									}

									else if (tipo == "Exotico") {

										std::string numibama, paisorigem;
										std::cout << "informe o número do ibama: ";
										std::cin.ignore();
										std::getline(std::cin, numibama);
										std::cout << "Informe o país de origem: ";
										std::getline(std::cin, paisorigem);

										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

												 if(trat->getnivelSeguranca() != "Verde") {

													if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

													
                                                        animal = std::make_shared<ReptilExotico>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tipopele, numibama, paisorigem);											

														lista_animais[id] = animal;

														std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
													}	

												}

												else  {

													std::cout << std::endl << "Tratadores com nível de segurança: Verde não podem tratar de animais da classe réptil. " << std::endl << std::endl;

												}
						
										 	}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}

									}			

									else  {


									    it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);

											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

												 vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												 trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

												 if(trat->getnivelSeguranca() != "Verde") {

													if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))){ 


													
                                                        animal = std::make_shared<Reptil>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tipopele);

														lista_animais[id] = animal;

														std::cout << std::endl << "Animal cadastrado com sucesso!" << std::endl << std::endl;
													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
													}	

												}

												else  {

													std::cout << std::endl << "Tratadores com nível de segurança: Verde não podem tratar de animais da classe réptil. " << std::endl << std::endl;

												}
						
											}

											else { 

											std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

											}

									}

								} 

						

						}


						

						else {


							std::cout << std::endl << "Classificação errônea. Cadastro não realizado." << std::endl << std::endl;
						
						}	
					

					}
					


					else {


							std::cout << std::endl << "Classe de Animais inválida. Cadastro não realizado." << std::endl << std::endl;
					}


			}



			else {


				std::cout << std::endl << "Identificadores para funcionários inválidos. Cadastro não realizado." << std::endl << std::endl;
			}	

			
		}

	} 

	

	//Método para alteração de um animal.
	void Menu::alterarAnimal() {


		int id;
		std::map<int, std::shared_ptr<Animal>>::iterator it;

		std::cout << "Informe o identificador do animal (ID): ";
		std::cin >> id;

		it = lista_animais.find(id);

		if (it != lista_animais.end()) {
			
			std::shared_ptr<Animal> animal = it->second;

			int idvet, idtrat;
			string classe, nome, cientifico, habitat, tipo;
			bool venenoso;
			char sexo;

			shared_ptr<Tratador> trat = make_shared<Tratador>();
			shared_ptr<Veterinario> vet = make_shared<Veterinario>();

			std::map<int, std::shared_ptr<Animal>>::iterator it1;
			std::map<int, std::shared_ptr<Funcionario>>::iterator it2;	
			std::map<int, std::shared_ptr<Funcionario>>::iterator it3;		



			std::cout << "Informe a classe do animal(Anfibio, Mamifero, Reptil ou Ave): ";
			std::cin.ignore();
			std::getline(std::cin, classe);
		

			if (classe == "Anfibio" || classe == "Ave" || classe == "Mamifero" || classe == "Reptil") {


				std::cout << "Informe o novo nome do animal: ";
				std::getline(std::cin, nome);
				std::cout << "Informe o novo nome cientifico do animal: ";
				std::getline(std::cin, cientifico);
				std::cout << "Informe o novo sexo do animal: ";
				std::cin >> sexo;
				std::cout << "O Animal é venenoso? (Informe 0 para não e 1 para sim): ";
				std::cin >> venenoso;
				std::cout << "Informe o novo habitat do animal: ";
				std::cin.ignore();
				std::getline(std::cin, habitat);

				std::cout << "Informe o identificador do novo Veterinario do animal: ";
				std::cin >> idvet;
				std::cout << "Informe o identificador do novo Tratador do animal: ";
				std::cin >> idtrat; 

				if (idvet > 0 && idtrat > 0)  {


					std::cout << "Informe a classificação do animal (Nativo, Exotico ou Domestico): ";
					std::cin.ignore();
					std::getline(std::cin, tipo);

						if (tipo == "Nativo" || tipo == "Exotico" || tipo == "Domestico")  {


							if (classe == "Anfibio")  {


								if (tipo == "Nativo") {
										
										it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Anfibio" && (it1->second)->getTipo() == "Nativo") {

											int qtdmudas;
											std::string numibama, regiaoorigem;
											std::cout << "Informe a quantidade de mudas: ";
											std::cin >> qtdmudas;
											std::cout << "informe o número do ibama: ";
											std::cin.ignore();
											std::getline(std::cin, numibama);
											std::cout << "Informe a região de origem: ";
											std::getline(std::cin, regiaoorigem);
									

									      	it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);
											
											if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {

													vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
													trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

													if(trat->getnivelSeguranca() != "Azul") {

														if ((trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

																shared_ptr<AnfibioNativo> a = std::dynamic_pointer_cast<AnfibioNativo>(animal);

													            a->setClasse(classe);
													            a->setNome(nome);
													            a->setCientifico(cientifico);
													            a->setSexo(sexo);
													            a->setVeterinario((*vet));
													            a->setTratador((*trat));
													            a->setqtdMudas(qtdmudas);
													            a->setVenenoso(venenoso);
													            a->setHabitat(habitat);
													            a->setnumIbama(numibama);
													            a->setregiaoOrigem(regiaoorigem);

																std::cout << std::endl << "Animal alterado com sucesso!" << std::endl << std::endl;
														}
														

														else {

															std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
														}	

													}

													else  {

														std::cout << std::endl << "Tratadores com nível de segurança: Azul não podem tratar de animais da classe anfíbio. " << std::endl << std::endl;

													}
							
												}

												else { 

												std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}
										}

										else {


											std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe anfíbio nativo." << std::endl << std::endl;

										}

										

								}

							

								

								else if (tipo == "Exotico") {
										
										it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Anfibio" && (it1->second)->getTipo() == "Exotico") {

											int qtdmudas;
											std::string numibama, paisorigem;
											std::cout << "Informe a quantidade de mudas: ";
											std::cin >> qtdmudas;
											std::cout << "informe o número do ibama: ";
											std::cin.ignore();											
											std::getline(std::cin, numibama);
											std::cout << "Informe o país de origem: ";
											std::getline(std::cin, paisorigem);
									
											it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);
								
											    if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {

											    	vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
													trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

													if(trat->getnivelSeguranca() != "Azul") {

														if ((trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

															
												                shared_ptr<AnfibioExotico> a = std::dynamic_pointer_cast<AnfibioExotico>(animal);


													            a->setClasse(classe);
													            a->setNome(nome);
													            a->setCientifico(cientifico);
													            a->setSexo(sexo);
													            a->setVeterinario((*vet));
													            a->setTratador((*trat));
													            a->setqtdMudas(qtdmudas);
													            a->setVenenoso(venenoso);
													            a->setHabitat(habitat);
													            a->setnumIbama(numibama);
													            a->setpaisOrigem(paisorigem);

																std::cout << std::endl << "Animal alterado com sucesso!" << std::endl << std::endl;
														}
														

														else {

															std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
														}	

													}

													else  {

														std::cout << std::endl << "Tratadores com nível de segurança: Azul não podem tratar de animais da classe anfíbio. " << std::endl << std::endl;

													}
							
												}

												else { 

												std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}
										}

										else {


											std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe anfíbio exótico." << std::endl << std::endl;

										}

									}	


								else if (tipo == "Domestico") {
										
										it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Anfibio" && (it1->second)->getTipo() == "Domestico") {

											int qtdmudas;											
											std::cout << "Informe a quantidade de mudas: ";
											std::cin >> qtdmudas;																

											it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);

											     if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {

											     	vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												    trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

													if(trat->getnivelSeguranca() != "Azul") {

														if ((trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

														
											                shared_ptr<Anfibio> a = std::dynamic_pointer_cast<Anfibio>(animal);


												            a->setClasse(classe);
												            a->setNome(nome);
												            a->setCientifico(cientifico);
												            a->setSexo(sexo);
												            a->setVeterinario((*vet));
												            a->setTratador((*trat));
												            a->setqtdMudas(qtdmudas);
												            a->setVenenoso(venenoso);
												            a->setHabitat(habitat);													            

															std::cout << std::endl << "Animal alterado com sucesso!" << std::endl << std::endl;

														}
														

														else {

															std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
														}	

													}

													else  {

														std::cout << std::endl << "Tratadores com nível de segurança: Azul não podem tratar de animais da classe anfíbio. " << std::endl << std::endl;

													}
							
												}

												else { 

												std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}
										}

										else {


											std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe anfíbio doméstico" << std::endl << std::endl;

										}
									}

								
													

								

							}

							
							

							else if (classe == "Ave") {
 
									if (tipo == "Nativo") {
										
										it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Ave" && (it1->second)->getTipo() == "Nativo") {

											int tambico;
											std::string numibama, regiaoorigem;
											std::cout << "Informe o tamanho do bico: ";
											std::cin >> tambico;
											std::cout << "informe o número do ibama: ";
											std::cin.ignore();
											std::getline(std::cin, numibama);
											std::cout << "Informe a região de origem: ";
											std::getline(std::cin, regiaoorigem);								
											
											it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);

												if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {													

													vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
											        trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

													if ((trat->getnivelSeguranca() == "Azul") || (trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))){ 

													
											            shared_ptr<AveNativa> a = std::dynamic_pointer_cast<AveNativa>(animal);

											            a->setClasse(classe);
											            a->setNome(nome);
											            a->setCientifico(cientifico);
											            a->setSexo(sexo);
											            a->setVeterinario((*vet));
											            a->setTratador((*trat));
											            a->settamBico(tambico);
											            a->setVenenoso(venenoso);
											            a->setHabitat(habitat);
											            a->setnumIbama(numibama);
											            a->setregiaoOrigem(regiaoorigem);

														std::cout << std::endl << "Animal alterado com sucesso!" << std::endl << std::endl;

													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
													}	

							
												}

												else { 

												std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}
										}

										else {


											std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe ave nativa." << std::endl << std::endl;

										}

										

									}


								else if (tipo == "Exotico") {
										
										it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Ave" && (it1->second)->getTipo() == "Exotico") {

											int tambico;
											std::string numibama, paisorigem;
											std::cout << "Informe a quantidade de mudas: ";
											std::cin >> tambico;
											std::cout << "informe o número do ibama: ";
											std::cin.ignore();
											std::getline(std::cin, numibama);
											std::cout << "Informe o país de origem: ";
											std::getline(std::cin, paisorigem);
									

											it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);

												if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {		

													vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
											        trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);											

													if ((trat->getnivelSeguranca() == "Azul") || (trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))){ 

													
											            shared_ptr<AveExotica> a = std::dynamic_pointer_cast<AveExotica>(animal);

											            a->setClasse(classe);
											            a->setNome(nome);
											            a->setCientifico(cientifico);
											            a->setSexo(sexo);
											            a->setVeterinario((*vet));
											            a->setTratador((*trat));
											            a->settamBico(tambico);
											            a->setVenenoso(venenoso);
											            a->setHabitat(habitat);
											            a->setnumIbama(numibama);
											            a->setpaisOrigem(paisorigem);

														std::cout << std::endl << "Animal alterado com sucesso!" << std::endl << std::endl;

													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
													}	

							
												}

												else { 

												std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}

										}

										else {


											std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe ave exótica." << std::endl << std::endl;

										}										

							}


								else if (tipo == "Domestico") {
										
										it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Ave" && (it1->second)->getTipo() == "Domestico") {

											int tambico;											
											std::cout << "Informe a quantidade de mudas: ";
											std::cin >> tambico;																

								
											it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);

												if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {	


														vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
											            trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);												

													if ((trat->getnivelSeguranca() == "Azul") || (trat->getnivelSeguranca() == "Verde") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

											            shared_ptr<Ave> a = std::dynamic_pointer_cast<Ave>(animal);

											            a->setClasse(classe);
											            a->setNome(nome);
											            a->setCientifico(cientifico);
											            a->setSexo(sexo);
											            a->setVeterinario((*vet));
											            a->setTratador((*trat));
											            a->settamBico(tambico);
											            a->setVenenoso(venenoso);
											            a->setHabitat(habitat);
											          
														std::cout << std::endl << "Animal alterado com sucesso!" << std::endl << std::endl;

													}
													

													else {

														std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
													}	

							
												}

												else { 

												std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}

										}

										else {


											std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe ave doméstica." << std::endl << std::endl;

										}										

								}	



							}

							

							else if (classe == "Mamifero") {

									if (tipo == "Nativo") {
										
										it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Mamifero" && (it1->second)->getTipo() == "Nativo") {

											int tampelo;
											std::string numibama, regiaoorigem;
											std::cout << "Informe o tamanho do pelo do animal: ";
											std::cin >> tampelo;
											std::cout << "informe o número do ibama: ";
											std::cin.ignore();
											std::getline(std::cin, numibama);
											std::cout << "Informe a região de origem: ";
											std::getline(std::cin, regiaoorigem);
									

								
											it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);

												if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {
													
													vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												    trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

													if(trat->getnivelSeguranca() != "Verde") {

														if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

															
												            shared_ptr<MamiferoNativo> a = std::dynamic_pointer_cast<MamiferoNativo>(animal);

												            a->setClasse(classe);
												            a->setNome(nome);
												            a->setCientifico(cientifico);
												            a->setSexo(sexo);
												            a->setVeterinario((*vet));
												            a->setTratador((*trat));
												            a->settamPelo(tampelo);
												            a->setVenenoso(venenoso);
												            a->setHabitat(habitat);
												            a->setnumIbama(numibama);
												            a->setregiaoOrigem(regiaoorigem);

												            std::cout << std::endl << "Animal alterado com sucesso!" << std::endl << std::endl;

														}
														

														else {

															std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
														}	

													}

													else  {

														std::cout << std::endl << "Tratadores com nível de segurança: Verde não podem tratar de animais da classe mamífero. " << std::endl << std::endl;

													}
							
												}

												else { 

												std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}

										}

										else {


											std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe Mamifero nativo." << std::endl << std::endl;

										}

										

									}


								else if (tipo == "Exotico") {
										
										it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Mamifero" && (it1->second)->getTipo() == "Exotico") {

											int tampelo;
											std::string numibama, paisorigem;
											std::cout << "Informe o tamanho do pelo do animal: ";
											std::cin >> tampelo;
											std::cout << "informe o número do ibama: ";
											std::cin.ignore();
											std::getline(std::cin, numibama);
											std::cout << "Informe o país de origem: ";
											std::getline(std::cin, paisorigem);
									

								
											it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);

												if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

													vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
											        trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

													if(trat->getnivelSeguranca() != "Verde") {

														if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

															
												            shared_ptr<MamiferoExotico> a = std::dynamic_pointer_cast<MamiferoExotico>(animal);
												             
												            a->setClasse(classe);
												            a->setNome(nome);
												            a->setCientifico(cientifico);
												            a->setSexo(sexo);
												            a->setVeterinario((*vet));
												            a->setTratador((*trat));
												            a->settamPelo(tampelo);
												            a->setVenenoso(venenoso);
												            a->setHabitat(habitat);
												            a->setnumIbama(numibama);
												            a->setpaisOrigem(paisorigem);

														}
														

														else {

															std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
														}	

													}

													else  {

														std::cout << std::endl << "Tratadores com nível de segurança: Verde não podem tratar de animais da classe mamífero exótico. " << std::endl << std::endl;

													}
							
												}

												else { 

												std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}

										}

										else {


											std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe Mamifero" << std::endl << std::endl;

										}										

							}


								else if (tipo == "Domestico") {
										
										it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Mamifero" && (it1->second)->getTipo() == "Domestico") {

											int tampelo;								
											std::cout << "Informe o tamanho do pelo do animal: ";
											std::cin >> tampelo;																

											it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);

												if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {

                                                    vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												    trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

													if(trat->getnivelSeguranca() != "Verde") {

														if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

												            shared_ptr<Mamifero> a = std::dynamic_pointer_cast<Mamifero>(animal);
												             
												            a->setClasse(classe);
												            a->setNome(nome);
												            a->setCientifico(cientifico);
												            a->setSexo(sexo);
												            a->setVeterinario((*vet));
												            a->setTratador((*trat));
												            a->settamPelo(tampelo);
												            a->setVenenoso(venenoso);
												            a->setHabitat(habitat);

														}
														

														else {

															std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
														}	

													}

													else  {

														std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

													}
							
												}

												else { 

												std::cout << std::endl << "Cadastro não realizado. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}
									}

									else {


										std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe Mamifero doméstico." << std::endl << std::endl;

									}										

								}							



							}



							else if (classe == "Reptil")  {

									
									if (tipo == "Nativo") {
										
									it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Reptil" && (it1->second)->getTipo() == "Nativo") {

											std::string numibama, regiaoorigem, tipopele;
											std::cout << "Informe o tipo de pele do animal: ";
											std::getline(std::cin, tipopele);
											std::cout << "informe o número do ibama: ";																			
											std::getline(std::cin, numibama);
											std::cout << "Informe a região de origem: ";
											std::getline(std::cin, regiaoorigem);
									

											it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);

												if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador")  {

													  vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
										              trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

													if(trat->getnivelSeguranca() != "Verde") {

														if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

                                                          
										                    shared_ptr<ReptilNativo> a = std::dynamic_pointer_cast<ReptilNativo>(animal);

										                    a->setClasse(classe);
										                    a->setNome(nome);
										                    a->setCientifico(cientifico);
										                    a->setSexo(sexo);
										                    a->setVeterinario((*vet));
										                    a->setTratador((*trat));
										                    a->settipoPele(tipopele);
										                    a->setVenenoso(venenoso);
										                    a->setHabitat(habitat);
										                    a->setnumIbama(numibama);
										                    a->setregiaoOrigem(regiaoorigem);

															std::cout << std::endl << "Animal alterado com sucesso!" << std::endl << std::endl;


														}
														

														else {

															std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
														}	

													}

													else  {

														std::cout << std::endl << "Tratadores com nível de segurança: Verde não podem tratar de animais da classe réptil. " << std::endl << std::endl;

													}
							
												}

												else { 

												std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}

										}

									else {


										std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe Reptil nativo." << std::endl << std::endl;

									}

										

							}


								else if (tipo == "Exotico") {
										
										it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Reptil" && (it1->second)->getTipo() == "Exotico") {

											std::string numibama, paisorigem, tipopele;
											std::cout << "Informe o tipo de pele do animal: ";
											std::getline(std::cin, tipopele);
											std::cout << "informe o número do ibama: ";
											std::cin.ignore();
											std::getline(std::cin, numibama);
											std::cout << "Informe o país de origem: ";
											std::getline(std::cin, paisorigem);
									

								
											
									      	it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);

												if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

													 vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
											         trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

													if(trat->getnivelSeguranca() != "Verde") {

														if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

                                                           
											                shared_ptr<ReptilExotico> a = std::dynamic_pointer_cast<ReptilExotico>(animal);

											                 
											                a->setClasse(classe);
											                a->setNome(nome);
											                a->setCientifico(cientifico);
											                a->setSexo(sexo);
											                a->setVeterinario((*vet));
											                a->setTratador((*trat));
											                a->settipoPele(tipopele);
											                a->setVenenoso(venenoso);
											                a->setHabitat(habitat);
											                a->setnumIbama(numibama);
											                a->setpaisOrigem(paisorigem);

											                std::cout << std::endl << "Animal alterado com sucesso!" << std::endl << std::endl;


														}
														

														else {

															std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
														}	

													}

													else  {

														std::cout << std::endl << "Tratadores com nível de segurança: Verde não podem tratar de animais da classe réptil. " << std::endl << std::endl;

													}
							
												}

												else { 

												std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}

										}

										else {


											std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe Reptil exótico." << std::endl << std::endl;

										}										

							}


								else if (tipo == "Domestico") {
										
										it1 = lista_animais.find(id);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Reptil" && (it1->second)->getTipo() == "Exotico") {

											std::string tipopele;
											std::cout << "Informe o tipo de pele do animal: ";
											std::cin >> tipopele;																

								
											it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);

												if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {

													 vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												     trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

													if(trat->getnivelSeguranca() != "Verde") {

														if ((trat->getnivelSeguranca() == "Azul") || (venenoso == 1 && (trat->getnivelSeguranca() == "Vermelho"))) { 

                                                           
											                shared_ptr<Reptil> a = std::dynamic_pointer_cast<Reptil>(animal);
												 
												            a->setClasse(classe);
												            a->setNome(nome);
												            a->setCientifico(cientifico);
												            a->setSexo(sexo);
												            a->setVeterinario((*vet));
												            a->setTratador((*trat));
												            a->settipoPele(tipopele);
												            a->setVenenoso(venenoso);
												            a->setHabitat(habitat);
												            

											                std::cout << std::endl << "Animal alterado com sucesso!" << std::endl << std::endl;


														}
														

														else {

															std::cout << std::endl << "Apenas animais venenosos podem ser tratados por tratadores da cor: Vermelha." << std::endl << std::endl;
														}	

													}

													else  {

														std::cout << std::endl << "Tratadores com nível de segurança: Verde não podem tratar de animais da classe réptil. " << std::endl << std::endl;

													}
							
												}

												else { 

												std::cout << std::endl << "Alteração não realizada. Veterinário ou/e tratador não localizado na base de dados." << std::endl << std::endl;

												}

									}

									else {


										std::cout << std::endl << "O número de identificação informado não corresponde a uma animal da classe Reptil doméstico." << std::endl << std::endl;


									}	


							
							}							
							
							

							}
						
						

						}
						
						

						else {

							std::cout << std::endl << "Classificação errônea. Alteração não realizada" << std::endl << std::endl;

						}

				

				}

				
				


				else { 

					std::cout << std::endl << "Identificadores para funcionários inválidos. Alteração não realizada." << std::endl << std::endl;


				}



			}

			

				
			else {


				std::cout << std::endl << "Classe de Animais inválida. Alteração não realizada." << std::endl << std::endl;

			}	

		}

		else {

			std::cout << "Não foi localizado animais com o id especificado" << std::endl << std::endl;

		}
	
	}			
		
	

	//Método para remoção de um animal.
	void
	Menu::removerAnimal() {	

		int id;
		std::map<int, std::shared_ptr<Animal>>::iterator it; 

		std::cout << "Informe o número de identificação do animal(ID): ";
		std::cin >> id;
		
		it = lista_animais.find(id);

		
			if(it != lista_animais.end()) {

			lista_animais.erase(it);

			std::cout << std::endl << "Animal removido com sucesso." << std::endl << std::endl;
			
			}


		else { 

			std::cout << std::endl << "Animal inexistente. Remoção não realizada." << std::endl << std::endl;

		}

	} 

	

	//Método para consulta de um animal.
	void 
	Menu::consultarAnimal() {

	int id;
	std::map<int, std::shared_ptr<Animal>>::iterator it; 
	
	std::cout << "Informe o número de identificação do animal(ID): ";
	std::cin >> id;

	it = lista_animais.find(id);


		if (it != lista_animais.end()) {

			std::cout << "\n";
			std::cout << *(it->second) << std::endl;
			
			}


		else {

			std::cout << std::endl << "Animal inexistente na base de dados." << std::endl << std::endl;
		
		}

	}

	
	//Método para consulta de animais por classe.

	void 
	Menu::consultarporClasse() {

		std::string classe;
		int cont = 0;

		std::map<int, std::shared_ptr<Animal>>::iterator it; 

		std::cout << "Informe a classe de animais (Anfibio, Mamifero, Reptil ou Ave): ";
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

			std::cout << std::endl << "Não existem animais associados a classe informada." << std::endl << std::endl;

		}
	}

	

	
	//Método para consulta de animais por funcionário.
	void Menu::consultarporFuncionario() {

		int id;
		int cont = 0;
		std::map<int, std::shared_ptr<Animal>>::iterator it;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it1;
		

		std::cout << "Informe o número de identificação do funcionário(ID): ";
		std::cin >> id;

		it1 = lista_funcionarios.find(id);
		

		if (it1 != lista_funcionarios.end()) {

			for(it = lista_animais.begin(); it != lista_animais.end(); ++it) {

				if((((it->second)->getVeterinario().getId() == id || (it->second)->getTratador().getId() == id))) {

					std::cout << "--------------------------------------" << std::endl;
					std::cout << std::endl << *(it->second) << std::endl << std::endl;
					std::cout << "--------------------------------------" << std::endl;
					cont++;
				}
			}
		}			
			

		else {

				std::cout << std::endl << "Não existem animais associados ao funcionário informado." << std::endl << std::endl;

		}
		
		
		
	} 

	// Método para importação dos funcionários de planilha .csv.
	void Menu::importar_dados_funcionarios( std::ifstream& dados_funcionarios_importar ) {

	std::shared_ptr<Funcionario> funcs;
 		
 	std::string idx, nome, funcao, cpf, crmv, nivelseguranca;

 	int id;

  	while(dados_funcionarios_importar.peek()!=EOF) {

    getline(dados_funcionarios_importar, idx, ';');
    getline(dados_funcionarios_importar, nome, ';');
    getline(dados_funcionarios_importar, funcao, ';');
    getline(dados_funcionarios_importar, cpf, ';');
    getline(dados_funcionarios_importar, crmv, ';');
    getline(dados_funcionarios_importar, nivelseguranca, '\n');


    id = std::stoi(idx);

    if (funcao == "Veterinario") {

    funcs = std::make_shared<Veterinario>(id, nome, funcao, cpf, crmv);

    lista_funcionarios[id] = funcs;

	}

	else {

    funcs = std::make_shared<Tratador>(id, nome, funcao, cpf, nivelseguranca);

    lista_funcionarios[id] = funcs;

	}

    
  	}

  	dados_funcionarios_importar.close();

	}

	

	//Método para exportação dos veterinários para csv.
	void Menu::exportar_dados_funcionarios( std::ofstream& dados_funcionarios_exportar ) {

	
	
	
	for ( auto it = lista_funcionarios.begin(); it != lista_funcionarios.end(); ++it )

	
	{

	std::shared_ptr<Funcionario> funcionario = it->second;

	if (it->second->getFuncao() == "Veterinario") {

	shared_ptr<Veterinario> v = std::dynamic_pointer_cast<Veterinario>(funcionario);	
	
	dados_funcionarios_exportar << (to_string(it->second->getId())) << ";" << (it->second->getNome()) << ";" << (it->second->getFuncao()) << ";" << (it->second->getCpf()) <<  ";" << (v->getCrmv()) << ";" << "-" << std::endl;

	}


	else {

	shared_ptr<Tratador> t = std::dynamic_pointer_cast<Tratador>(funcionario);		
	
	dados_funcionarios_exportar << (to_string(it->second->getId())) << ";" << (it->second->getNome()) << ";" << (it->second->getFuncao()) << ";" << (it->second->getCpf()) <<  ";" << "-" <<  ";" << (t->getnivelSeguranca()) << std::endl;

	}

	}

	dados_funcionarios_exportar.close();

	}


	// Método para importação de animais de planilha .csv.
	void Menu::importar_dados_animais( std::ifstream& dados_animais_importar ) {


	std::map<int, std::shared_ptr<Animal>>::iterator it;
	std::map<int, std::shared_ptr<Funcionario>>::iterator it2;
	std::map<int, std::shared_ptr<Funcionario>>::iterator it3;
	
	std::shared_ptr<Animal> animal;

	std::shared_ptr<Tratador> trat = std::make_shared<Tratador>();
	std::shared_ptr<Veterinario> vet = std::make_shared<Veterinario>();

	std::string idx, classe, tipo, nome, cientifico, sexox, veterinariox, tratadorx, venenosox, habitat, qtdmudasx, numibama, regiaoorigem, paisorigem, tambicox, tampelox, tipopele;

 	int id, veterinario, tratador, qtdmudas, tambico, tampelo;

 	char sexo;

 	bool venenoso;

  	while(dados_animais_importar.peek()!=EOF) {

    getline(dados_animais_importar, idx, ';');
    getline(dados_animais_importar, classe, ';');
    getline(dados_animais_importar, tipo, ';');
    getline(dados_animais_importar, nome, ';');
    getline(dados_animais_importar, cientifico, ';');
    getline(dados_animais_importar, sexox, ';');
    getline(dados_animais_importar, veterinariox, ';');
    getline(dados_animais_importar, tratadorx, ';');
    getline(dados_animais_importar, venenosox, ';');
    getline(dados_animais_importar, habitat, ';');
    getline(dados_animais_importar, qtdmudasx, ';');
    getline(dados_animais_importar, tambicox, ';');
    getline(dados_animais_importar, tampelox, ';');
    getline(dados_animais_importar, tipopele, ';');
    getline(dados_animais_importar, numibama, ';');
    getline(dados_animais_importar, regiaoorigem, ';');
    getline(dados_animais_importar, paisorigem, '\n');


    id = std::stoi(idx);
    sexo = 'F';
    veterinario = std::stoi(veterinariox);
    tratador = std::stoi(tratadorx);
    std::istringstream(venenosox) >> venenoso;
    
   
    if (sexox == "F") {

    	sexo = 'F';	


	} 

   	else  {

   		sexo = 'M';
   	}	   
    


    if (classe == "Anfibio") {
    	
    	

    	it2 = lista_funcionarios.find(veterinario);
		it3 = lista_funcionarios.find(tratador);

		qtdmudas = std::stoi(qtdmudasx);


	    	if (tipo == "Nativo") {

	    		vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);

	            animal = std::make_shared<AnfibioNativo>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, qtdmudas, numibama, regiaoorigem);
				lista_animais[id] = animal;
    		}

    		else if (tipo == "Exotico") {

    			vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
	            animal = std::make_shared<AnfibioExotico>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, qtdmudas, numibama, paisorigem);
				lista_animais[id] = animal;

    		}

    		else {

    			vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
	            animal = std::make_shared<Anfibio>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, qtdmudas);
				lista_animais[id] = animal;

    		}


    		

    }	

    
    if (classe == "Ave") {
    	

    	it2 = lista_funcionarios.find(veterinario);
		it3 = lista_funcionarios.find(tratador);

		tambico = std::stoi(tambicox);


	    	if (tipo == "Nativo") {

	    		vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
	            animal = std::make_shared<AveNativa>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tambico, numibama, regiaoorigem);
				lista_animais[id] = animal;
    		}

    		else if (tipo == "Exotico") {

    			vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
	            animal = std::make_shared<AveExotica>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tambico, numibama, paisorigem);
				lista_animais[id] = animal;

    		}

    		else {

    			vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
	            animal = std::make_shared<Ave>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tambico);
				lista_animais[id] = animal;

    		}


    	}



    if (classe == "Mamifero") {
    	
    	
    	it2 = lista_funcionarios.find(veterinario);
		it3 = lista_funcionarios.find(tratador);

		tampelo = std::stoi(tampelox);


	    	if (tipo == "Nativo") {

	    		vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
	            animal = std::make_shared<MamiferoNativo>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tampelo, numibama, regiaoorigem);
				lista_animais[id] = animal;
    		}

    		else if (tipo == "Exotico") {

    			vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
	            animal = std::make_shared<MamiferoExotico>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tampelo, numibama, paisorigem);
				lista_animais[id] = animal;

    		}

    		else {

    			vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
	            animal = std::make_shared<Mamifero>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tampelo);
				lista_animais[id] = animal;

    		}


	} 
    		
    if (classe == "Reptil") {
    	

    	it2 = lista_funcionarios.find(veterinario);
		it3 = lista_funcionarios.find(tratador);

		
	    	if (tipo == "Nativo") {

	    		vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
	            animal = std::make_shared<ReptilNativo>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tipopele, numibama, regiaoorigem);
				lista_animais[id] = animal;
    		}

    		else if (tipo == "Exotico") {

    			vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
	            animal = std::make_shared<ReptilExotico>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tipopele, numibama, paisorigem);
				lista_animais[id] = animal;

    		}

    		else {

    			vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
	           	trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
	            animal = std::make_shared<Reptil>(id, classe, tipo, nome, cientifico, sexo, (*vet), (*trat), venenoso, habitat, tipopele);
				lista_animais[id] = animal;

    		}
    	}	



}

} 

// Método para realização da exportação de animais para o formato .csv.
void Menu::exportar_dados_animais( std::ofstream& dados_animais_exportar )

	{


	
	for ( auto it = lista_animais.begin(); it != lista_animais.end(); ++it) {
	
	std::shared_ptr<Animal> animal = it->second;		


 	if (it->second->getClasse() == "Anfibio") {


 		if (it->second->getTipo() == "Nativo") {


 			shared_ptr<AnfibioNativo> a = std::dynamic_pointer_cast<AnfibioNativo>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << (a->getqtdMudas()) << ";" << "-" <<  ";" 
 			<< "-" <<  ";" << "-" <<  ";" << (a->getnumIbama()) <<  ";" << (a->getregiaoOrigem()) <<  ";" << "-" << std::endl;

 		}

 		else if (it->second->getTipo() == "Exotico") {

 			shared_ptr<AnfibioExotico> a = std::dynamic_pointer_cast<AnfibioExotico>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << (a->getqtdMudas()) << ";" << "-" <<  ";" 
 			<< "-" <<  ";" << "-" <<  ";" << (a->getnumIbama()) <<  ";" << "-" <<  ";" << (a->getpaisOrigem()) << std::endl;

 		}

 		else {

 			shared_ptr<Anfibio> a = std::dynamic_pointer_cast<Anfibio>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << (a->getqtdMudas()) << ";" << "-" <<  ";" 
 			<< "-" <<  ";" << "-" <<  ";" << "-" <<  ";" << "-" <<  ";" << "-" << std::endl;

		}

	}
	
	if (it->second->getClasse() == "Ave") {


 		if (it->second->getTipo() == "Nativo") {


 			shared_ptr<AveNativa> a = std::dynamic_pointer_cast<AveNativa>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << "-" << ";" << (a->gettamBico()) <<  ";" 
 			<< "-" <<  ";" << "-" <<  ";" << (a->getnumIbama()) <<  ";" << (a->getregiaoOrigem()) <<  ";" << "-" << std::endl;

 		}

 		else if (it->second->getTipo() == "Exotico") {

 			shared_ptr<AveExotica> a = std::dynamic_pointer_cast<AveExotica>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << "-" << ";" << (a->gettamBico()) <<  ";" 
 			<< "-" <<  ";" << "-" <<  ";" << (a->getnumIbama()) <<  ";" << "-" <<  ";" << (a->getpaisOrigem()) << std::endl;

 		}

 		else {

 			shared_ptr<Ave> a = std::dynamic_pointer_cast<Ave>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << "-" << ";" << (a->gettamBico()) <<  ";" 
 			<< "-" <<  ";" << "-" <<  ";" << "-" <<  ";" << "-" <<  ";" << "-" << std::endl;

		}

	}		
 		
 	if (it->second->getClasse() == "Mamifero") {


 		if (it->second->getTipo() == "Nativo") {


 			shared_ptr<MamiferoNativo> a = std::dynamic_pointer_cast<MamiferoNativo>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << "-" << ";" << "-" <<  ";" 
 			<< (a->gettamPelo())  <<  ";" << "-" <<  ";" << (a->getnumIbama()) <<  ";" << (a->getregiaoOrigem()) <<  ";" << "-" << std::endl;

 		}

 		else if (it->second->getTipo() == "Exotico") {

 			shared_ptr<MamiferoExotico> a = std::dynamic_pointer_cast<MamiferoExotico>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << "-" << ";" << "-" <<  ";" 
 			<< (a->gettamPelo()) <<  ";" << "-" <<  ";" << (a->getnumIbama()) <<  ";" << "-" <<  ";" << (a->getpaisOrigem()) << std::endl;

 		}

 		else {

 			shared_ptr<Mamifero> a = std::dynamic_pointer_cast<Mamifero>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << "-" << ";" << "-" <<  ";" 
 			<< (a->gettamPelo()) <<  ";" << "-" <<  ";" << "-" <<  ";" << "-" <<  ";" << "-" << std::endl;

		}

	}

	if (it->second->getClasse() == "Reptil") {


 		if (it->second->getTipo() == "Nativo") {


 			shared_ptr<ReptilNativo> a = std::dynamic_pointer_cast<ReptilNativo>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << "-" << ";" << "-" <<  ";" 
 			<< "-" <<  ";" << (a->gettipoPele()) <<  ";" << (a->getnumIbama()) <<  ";" << (a->getregiaoOrigem()) <<  ";" << "-" << std::endl;

 		}

 		else if (it->second->getTipo() == "Exotico") {

 			shared_ptr<ReptilExotico> a = std::dynamic_pointer_cast<ReptilExotico>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << "-" << ";" << "-" <<  ";" 
 			<< "-" <<  ";" << (a->gettipoPele()) <<  ";" << (a->getnumIbama()) <<  ";" << "-" <<  ";" << (a->getpaisOrigem()) << std::endl;

 		}

 		else {

 			shared_ptr<Reptil> a = std::dynamic_pointer_cast<Reptil>(animal);
    	
			std::string s; 
			s = it->second->getSexo();	

			dados_animais_exportar << (to_string(it->second->getId())) << ";" << (it->second->getClasse()) << ";" << (it->second->getTipo()) << ";" << (it->second->getNome()) <<  ";" << (it->second->getCientifico()) << ";" 
 			<< s <<  ";" << (it->second->getVeterinario().getId()) << ";" <<  (it->second->getTratador().getId()) << ";" <<  (to_string(it->second->getVenenoso())) << ";" << (it->second->getHabitat()) <<  ";" << "-" << ";" << "-" <<  ";" 
 			<< "-" <<  ";" << (a->gettipoPele()) <<  ";" << "-" <<  ";" << "-" <<  ";" << "-" << std::endl;

		}

	}		 	


	}


	dados_animais_exportar.close();

} 



}







	

 


