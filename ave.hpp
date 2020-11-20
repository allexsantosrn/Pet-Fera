#ifndef _AVE_
#define _AVE_

#include "animal.hpp"

#include <string>
#include <ostream>
#include <istream>

	class Ave : public Animal {

		protected:

			std::string formatobico;


		public:
			
			Ave();

			Ave(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, Tratador _tratador, std::string _formatobico);

			~Ave();

			void setformatoBico(std::string _formatobico);

			std::string getformatoBico();
			
			friend std::ostream& operator<< (std::ostream &o, Ave a);

			friend std::istream& operator>> (std::istream &i, Ave &a);			

	};


#endif