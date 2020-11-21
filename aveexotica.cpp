#include "aveexotica.hpp"

AveExotica::AveExotica() {}

AveExotica::AveExotica(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, 
					   Tratador _tratador, std::string _formatobico, int _numibama, std::string _paisorigem):
              		   Ave(_id,_classe,_nome,_nomecientifico,_sexo,_veterinario,_tratador, _formatobico),
              		   Exotico(_numibama,_paisorigem) {}

AveExotica::~AveExotica() {}





