#ifndef _ANIMAL_
#define _ANIMAL_	

#include "tratador.hpp"
#include "veterinario.hpp"

#include <ostream>
#include <string>


namespace PetFera {
	
	
	class Animal {
		
		protected:		

			int id;								
			std::string classe;						
			std::string nome;						
			std::string cientifico;					
			char sexo;							
			Veterinario veterinario;			
			Tratador tratador;					
			bool venenoso;
			std::string habitat;						

		public:

			
			Animal();

				
			Animal(int _id, std::string _classe, std::string _nome, std::string _cientifico,
			char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat);

			
			~Animal();

			
			int getId();

			
			std::string getClasse();

			
			std::string getNome();

			
			std::string getCientifico();

			
			char getSexo();

			
			Veterinario getVeterinario();

			
			Tratador getTratador();

			
			bool getVenenoso();


			std::string getHabitat();

			
			void setId(int _id);

			
			void setClasse(std::string _classe);

			
			void setNome(std::string _nome);

			
			void setCientifico(std::string _cientifico);

			
			void setSexo(char _sexo);

			
			void setTamanho(float _tamanho);

			
			void setDieta(std::string _dieta);

			
			void setVeterinario(Veterinario _veterinairo);

			
			void setTratador(Tratador _tratador);

			
			void setVenenoso(bool _venenoso);


			void setHabitat(std::string _habitat);

			
			friend std::ostream& operator<< (std::ostream &o, Animal &a);

			
			bool operator==(const Animal &a);
 
		private:

			 
			virtual std::ostream& print(std::ostream&);

	};
}

#endif