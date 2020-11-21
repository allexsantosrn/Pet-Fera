#ifndef _REPTIL_
#define _REPTIL_

#include "animal.hpp"

#include <string>
#include <ostream>
#include <istream>

	class Reptil : public Animal{

		protected:
			
			//Marinho ou terrestre
			std::string habitat;


		public: 

			Reptil();

			Reptil(int _id, std::string _classe,std::string _nome,std::string _cientifico, char _sexo, Veterinario _veterinario, Tratador _tratador, std::string _habitat);
			
			~Reptil();

			void setHabitat(std::string _habitat);

			std::string getHabitat();

			friend std::ostream& operator << (std::ostream &o,Reptil r);

			friend std::istream& operator >> (std::istream &i,Reptil &r);



	};

	
#endif		





		

			


