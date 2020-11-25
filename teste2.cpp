void 
Menu::alterarFuncionario() {


		std::map<int, std::shared_ptr<Animal>>::iterator it;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it2;
		std::map<int, std::shared_ptr<Funcionario>>::iterator it3; 


		std::cout << "Informe a classe do animal(Anfibio, Mamífero, Reptil ou Aves): ";
		std::cin >> classe;


			if (classe == "Anfibio" || classe == "Aves" || classe == "Mamífero" || classe == "Reptil") {


				std::cout << "Informe o novo nome do animal: ";
				std::getline(std::cin, nome);
				std::cout << "Informe o novo nome cientifico do animal: ";
				std::getline(std::cin, cientifico);
				std::cout << "Informe o novo sexo do animal: ";
				std::cin >> sexo;
				std::cout << "O Animal é venenoso? (Informe 0 para não e 1 para sim)";
				std::cin >> venenoso;
				std::cout << "Informe o novo habitat do animal: ";
				std::cin.ignore();
				std::getline(std::cin, habitat);


				std::cout << "Informe o identificador do novo Veterinario do animal: ";
				std::cin >> idvet;
				std::cout << "Informe o identificador do novo Tratador do animal: ";
				std::cin >> idtrat; 

				if (idvet >=0 && idtrat >=0)  {


					std::cout << "Informe a classificacao do animal (Nativo, Exotico ou Domestico): ";
					std::getline(std::cin, tipo);

						if (tipo == "Nativo" || tipo = "Exotico" || tipo = "Domestico")  {


							if (class = "Anfibio")  {


								if (tipo == "Nativo") {

									std::string numibama, regiaoorigem;
									std::cout << "Digite o número do ibama: ";
									std::cin >> numibama;
									std::cout << "Digite a região de origem: ";
									std::cin >> regiaoorigem;


									std::cout << "Informe o número de identificação do animal para atualização(ID): ";
									std::cin >> id;


										it = lista_animais.find(id);	
										it2 = lista_funcionarios.find(idvet);
										it3 = lista_funcionarios.find(idtrat);


										if (it != lista_animais.end() && (it->second)->getClasse() == "Anfibio") {


											std::shared_ptr<Animal> animal = it->second;

											std::shared_ptr<AnfibioNativo> an = std::dynamic_pointer_cast<AnfibioNativo>(animal);

											an->setNome(nome);
											an->setCientifico(cientifico);
											an->setSexo(sexo);
											an->setVenenoso(venenoso);
											an->setClasse(classe);
											an->setHabitat(habitat);
											an->setVeterinario(*vet);
											an->setTratador(*trat)



											std::cout << "As informações do veterinário selecionado foram atualizadas com sucesso!" << std::endl << std::endl;



										}


										else {

											std::cout << "Identificado de anfíbio nativo não localizado no banco de dados." << std::endl << std::endl;													

										}	



										}


								}



							else if (class = "Aves") {




							}

							else if (class = "Mamífero") {





							}

							else if (class = "Reptil")  {




							}




						


						else {

							std::cout << "Classificação errônea. Alteração não realizada";
						}






				


				else { 

					std::cout << "Identificadores para funcionários inválidos. Alteração não realizada.";


				}


				
			else {


				std::cout << "Classe de Animais inválida. Alteração não realizada.";

			}			