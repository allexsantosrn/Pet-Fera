#include "mamiferoexotico.hpp"

MamiferoExotico::MamiferoExotico() {}

MamiferoExotico::MamiferoExotico(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					   Tratador _tratador, int _tampelo, int _numibama, std::string _paisorigem):
              		   Mamifero(_id,_classe,_nome,_nomecientifico,_sexo,_veterinario,_tratador, _tampelo),
              		   Exotico(_numibama,_paisorigem) {}

MamiferoExotico::~MamiferoExotico() {}





