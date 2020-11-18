#ifndef _ANIMAL_
#define _ANIMAL_

#include "veterinario.hpp"
#include "tratador.hpp"

#include <string>
#include <ostream>
#include <istream>
#include <iostream>

<<<<<<< HEAD

	class Animal {
		
		protected:		
			int id;								
			std::string classe;						
			std::string nome;						
			std::string cientifico;					
			char sexo;							
			Veterinario veterinario;			
			Tratador tratador;					
		

		public:

			Animal();

			Animal(int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, Veterinario _veterinario, Tratador _tratador);

			~Animal();

			int getId();

			std::string getClasse();

			std::string getNome();

			std::string getCientifico();

			char getSexo();

			Veterinario getVeterinario();

			Tratador getTratador();

			void setId(int _id);

			void setClasse(std::string _classe);

			void setNome(std::string _nome);

			void setCientifico(std::string _cientifico);

			void setSexo(char _sexo);

			void setVeterinario(Veterinario _veterinario);

			void setTratador(Tratador _tratador);

			friend std::ostream& operator<< (std::ostream &o, Animal a);

			friend std::istream& operator>> (std::istream &i, Animal &a);

		
	};

#endif
