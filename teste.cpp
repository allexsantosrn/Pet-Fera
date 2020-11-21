#include<iostream>

#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "animal.hpp"
#include "ave.hpp"
#include "anfibio.hpp"
#include "mamifero.hpp"
#include "anfibioexotico.hpp"

int main( )

{

	
	Tratador tratador(3, "Pedro", "Tratador", "066135123-25", "Verde");

	Veterinario veterinario(4, "Lucas", "Veterinario", tratador.getCpf(), "123456");

	Tratador *trat = new Tratador (10, "João", "Tratador", "066135123-25", "Verde");

	Ave animal (4, "Mamifero", "Gato", "Felix Catus", 'M', veterinario, *trat, "Torto");

	Mamifero animal2 (5, "Peixe", "Tubarão", "Peixes vistus", 'F', veterinario, *trat, 5);

	AnfibioExotico anfibium (10, "sapo", "Pedro", "Joao", 'F', veterinario, *trat, 5, 151515, "Panamá");


	//std::cout << funcionario1 << std::endl;
	//std::cout << funcionario2 << std::endl;
	//std::cout << *trat << std::endl;
	//std::cout << animal << std::endl;
	std::cout << anfibium << std::endl;
	
	return 0;
}

