#include "reptilexotico.hpp"

ReptilExotico::ReptilExotico() {}

ReptilExotico::ReptilExotico(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					   		Tratador _tratador, std::string _habitat, int _numibama, std::string _paisorigem):
              		   		Reptil(_id,_classe,_nome,_nomecientifico,_sexo,_veterinario,_tratador, _habitat),
              		   	    Exotico(_numibama,_paisorigem) {}

ReptilExotico::~ReptilExotico() {}





