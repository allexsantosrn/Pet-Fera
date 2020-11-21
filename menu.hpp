#ifndef _MENU_
#define _MENU_

#include <iostream>
#include <map>
#include <string>
#include <memory>

#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include "animal.hpp"

class Menu {


private:

	std::map<int, std::shared_ptr<Funcionario>> lista_funcionarios;		
	std::map<int, std::shared_ptr<Animal>> lista_animais;			

public:

	void removerAnimal();
	void consultarAnimal();
	void cadastrarFuncionario();
	void alterarFuncionario();
	void removerFuncionario();
	void consultarFuncionario();
	
};

#endif


