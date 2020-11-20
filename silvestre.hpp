#ifndef _SILVESTRE_
#define _SILVESTRE_

#include <string>
#include <ostream>
#include <istream>
#include <iostream>

	class Silvestre {
		
		protected:		

			int numibama;
						
			 
		public:

			Silvestre();
				
			Silvestre(int _numibama);

			~Silvestre();

			int getnumIbama();

			void setnumIbama(int _id);			
						
	};

#endif
