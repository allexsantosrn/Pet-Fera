#ifndef _MAMIFERO_
#define _MAMIFERO_

#include "animal.hpp"

#include <string>
#include <ostream>
#include <istream>

	class Mamifero : public Animal {

		protected:

			int tampelo;

		public:
			
			Mamifero();

			Mamifero(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, Tratador _tratador, int _tampelo);

			~Mamifero();

			void settamPelo(int _formatobico);

			int gettamPelo();
			
			friend std::ostream& operator<< (std::ostream &o, Mamifero m);

			friend std::istream& operator>> (std::istream &i, Mamifero &m);			

	};


#endif