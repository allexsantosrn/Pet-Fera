#include<iostream>

#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "animal.hpp"

int main( )

{

	
	Tratador tratador(3, "Pedro", "Tratador", "066135123-25", "Verde");

	Veterinario veterinario(4, "Lucas", "Veterinario", tratador.getCpf(), "123456");

	Tratador *trat = new Tratador (10, "João", "Tratador", "066135123-25", "Verde");

	Animal animal (4, "Mamifero", "Gato", "Felix Catus", 'M', veterinario, *trat);

	Animal animal2 (5, "Peixe", "Tubarão", "Peixes vistus", 'F', veterinario, *trat);


	//std::cout << funcionario1 << std::endl;
	//std::cout << funcionario2 << std::endl;
	//std::cout << *trat << std::endl;
	//std::cout << veterinario << std::endl;
	std::cout << animal2 << std::endl;
	
	return 0;
}

