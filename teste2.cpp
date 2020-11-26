void 
Menu::alterarAnimal() {


		int id_atual;
		map<int, shared_ptr<Animal>>::iterator it;

		cout << "Digite o identificador ";
		cin >> id_atual;

		it = lista_animais.find(id_atual);

		if(it != lista_animais.end()) {
			
			shared_ptr<Animal> animal = it->second;

			int id, idvet, idtrat;
			string classe, nome, cientifico, habitat, tipo;
			bool venenoso;
			char sexo;

			shared_ptr<Tratador> trat = make_shared<Tratador>();
			shared_ptr<Veterinario> vet = make_shared<Veterinario>();

			map<int, shared_ptr<Animal>>::iterator it1;
			map<int, shared_ptr<Funcionario>>::iterator it2;
			map<int, shared_ptr<Funcionario>>::iterator it3; 



			std::cout << "Informe a classe do animal(Anfibio, Mamífero, Reptil ou Aves): ";
			std::cin >> classe;
		

			if (classe == "Anfibio" || classe == "Aves" || classe == "Mamifero" || classe == "Reptil") {


				std::cout << "Informe o novo nome do animal: ";
				std::cin >> nome;
				std::cout << "Informe o novo nome cientifico do animal: ";
				std::cin >> cientifico;
				std::cout << "Informe o novo sexo do animal: ";
				std::cin >> sexo;
				std::cout << "O Animal é venenoso? (Informe 0 para não e 1 para sim)";
				std::cin >> venenoso;
				std::cout << "Informe o novo habitat do animal: ";
				std::cin >> habitat;


				std::cout << "Informe o identificador do novo Veterinario do animal: ";
				std::cin >> idvet;
				std::cout << "Informe o identificador do novo Tratador do animal: ";
				std::cin >> idtrat; 

				if (idvet > 0 && idtrat > 0)  {


					std::cout << "Informe a classificacao do animal (Nativo, Exotico ou Domestico): ";
					std::cin.ignore();
					std::getline(std::cin, tipo);

						if (tipo == "Nativo" || tipo == "Exotico" || tipo == "Domestico")  {


							if (classe == "Anfibio")  {


								if (tipo == "Nativo") {

									int qtdmudas;
									std::string numibama, regiaoorigem;
									std::cout << "Digite a quantidade de mudas: ";
									std::cin >> qtdmudas;
									std::cout << "Digite o número do ibama: ";
									std::cin >> numibama;
									std::cout << "Digite a região de origem: ";
									std::cin >> regiaoorigem;


									std::cout << "Informe o número de identificação do animal para atualização(ID): ";
									std::cin >> id;


									it1 = lista_animais.find(id_atual);	

										if (it1 != lista_animais.end() && (it1->second)->getClasse() == "Anfibio"){

											it2 = lista_funcionarios.find(idvet);
											it3 = lista_funcionarios.find(idtrat);

												if(it2 != lista_funcionarios.end() && (it2->second)->getFuncao() == "Veterinario" && it3 != lista_funcionarios.end() && (it3->second)->getFuncao() == "Tratador") {
												
												vet = std::dynamic_pointer_cast<PetFera::Veterinario>(it2->second);
												trat = std::dynamic_pointer_cast<PetFera::Tratador>(it3->second);
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

												std::cout << std::endl << "-----Animal Alterado-----" << std::endl << std::endl;

												}


										else  {

											std::cout << "Número de identificação inválido para animal da classe anfíbio.";

										}

									

								}

							}	




							else if (classe == "Aves") {
 
									std::cout << "Número de identificação inválido para animal da classe anfíbio.";



							}

							else if (classe == "Mamífero") {

									std::cout << "Número de identificação inválido para animal da classe anfíbio.";



							}

							else if (classe == "Reptil")  {

									std::cout << "Número de identificação inválido para animal da classe anfíbio.";



							}



						}
						


						else {

							std::cout << "Classificação errônea. Alteração não realizada";
						}



				}


				


				else { 

					std::cout << "Identificadores para funcionários inválidos. Alteração não realizada.";


				}

			}

				
			else {


				std::cout << "Classe de Animais inválida. Alteração não realizada.";

			}	

			else {

				std::cout << "Id não localizado".";

			}
	
	}			