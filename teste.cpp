#include<iostream>

#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"

int main( )

{

	Funcionario funcionario1(1, "Joao", "Tratador", "056414794-03");
	Funcionario funcionario2(2, "Max", "Veterinário", "066135987-20");

	Tratador tratador(3, "Pedro", "Tratador", "066135123-25", "Verde");

	Veterinario veterinario(4, "Lucas", "Veterinario", tratador.getCpf(), "123456");

	std::cout << funcionario1 << std::endl;
	std::cout << funcionario2 << std::endl;
	std::cout << tratador << std::endl;
	std::cout << veterinario << std::endl;
	
	return 0;
}

