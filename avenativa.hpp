#ifndef _AVE_NATIVA_
#define _AVE_NATIVA_

#include "ave.hpp"
#include "nativo.hpp"


	class AveNativa : public Ave , public Nativo {

		public:

			AveNativa();


			AveNativa(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					  Tratador _tratador, std::string _formatobico, int _numibama, std::string _regiaoorigem);
				
			~AveNativa();

			friend std::ostream& operator << (std::ostream &o,AveNativa a);

			friend std::istream& operator >> (std::istream &i,AveNativa &a);

	};


#endif
