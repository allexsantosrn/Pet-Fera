#include<iostream>

#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "animal.hpp"

int main( )

{

	
	Tratador tratador(3, "Pedro", "Tratador", "066135123-25", "Verde");

	Veterinario veterinario(4, "Lucas", "Veterinario", tratador.getCpf(), "123456");

	Animal animal (4, "Mamifero", "Gato", "Felix Catus", 'M', veterinario, tratador);



	//std::cout << funcionario1 << std::endl;
	//std::cout << funcionario2 << std::endl;
	//std::cout << tratador << std::endl;
	//std::cout << veterinario << std::endl;
	std::cout << animal << std::endl;
	
	return 0;
}

