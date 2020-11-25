#ifndef _SILVESTRE_
#define _SILVESTRE_

#include <string>


namespace PetFera {
	
	
	class Silvestre {

		protected:

			std::string numibama;			 

		public:
			 
			Silvestre();

			 
			Silvestre(std::string _numibama);

			 
			~Silvestre();

 		
			std::string getnumIbama();
			
			 
			void setnumIbama(std::string _numibama);

	};
}

#endif