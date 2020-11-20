#ifndef _ANFIBIO_
#define _ANFIBIO_

#include "animal.hpp"

#include <string>
#include <ostream>
#include <istream>

	class Anfibio : public Animal {

		protected:

			int qtdmudas;


		public:
			
			Anfibio();

			Anfibio(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, Tratador _tratador, int _qtdmudas);

			~Anfibio();

			void setqtdMudas(int _qtdmudas);

			int getqtdMudas();
			
			friend std::ostream& operator<< (std::ostream &o, Anfibio a);

			friend std::istream& operator>> (std::istream &i, Anfibio &a);
			

	};


#endif