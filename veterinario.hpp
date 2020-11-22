#ifndef _VETERINARIO_
#define _VETERINARIO_

#include "funcionario.hpp"

#include <string>
#include <ostream>
#include <istream>

	class Veterinario : public Funcionario {

		protected:

			std::string crmv;


		public:
			
			Veterinario();

			Veterinario(int _id, std::string _nome, std::string _cargo, std::string _cpf, std::string _crmv);

			~Veterinario();

			void setCrmv(std::string _crmv);

			std::string getCrmv();
			
			friend std::ostream& operator<< (std::ostream &o, Veterinario v);

			friend std::istream& operator>> (std::istream &i, Veterinario &v);
			
		//private:

			//std::ostream& print(std::ostream &o) const;

	};


#endif