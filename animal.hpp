#ifndef _ANIMAL_
#define _ANIMAL_

#include "veterinario.hpp"
#include "tratador.hpp"

#include <string>
#include <ostream>
#include <istream>
#include <iostream>

enum classe
{	
	anfibios,
	repteis,
	aves,
	mamiferos
};
				

	class Animal {

			protected:

					int id;
					std::string nome;
					classe classe_animal;


			public:

				Animal();
				Animal(int id,std::string _nome,classe classe,
				double peso, )



			
	}