/** 
 * @file	anfibionativo.hpp
 * @brief	Definicao da classe Anfibio Nativo.
 * @author	Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#include "anfibionativo.hpp"


namespace PetFera {


	/** @brief Construtor padrão */ 
	AnfibioNativo::AnfibioNativo() {}

	/**
	 * @param _id Identificador do animal
	 * @param _classe Classe do animal
	 * @param _nome Nome do animal
	 * @param _cientifico Nome cientifico do animal
	 * @param _sexo Sexo do animal
	 * @param _veterinario Veterinario do animal
	 * @param _tratador Tratador do animal
	 * @param _venenoso Indica se o animal é venenoso
	 * @param _habitar Indica o habitat do animal
	 * @param _qtdmudas Quantitativo total de mudas do anfibio
	 * @param _numibama Numero referente ao Ibama
	 * @param _regiaoorigem Regiao de origem do animal
	 */	
	
	AnfibioNativo::AnfibioNativo(int _id, std::string _classe, std::string _nome, std::string _cientifico, 
									char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas, 
									std::string _numibama, std::string _regiaoorigem): 
									Anfibio(_id, _classe, _nome, _cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat,_qtdmudas), 
									Nativo(_numibama, _regiaoorigem) {}

	/** @brief Destrutor padrão */ 
	AnfibioNativo::~AnfibioNativo() {}

	/** @return Método para stream de saída; */
	std::ostream& 
	AnfibioNativo::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		o << "Classe: " << classe << std::endl; 
		o << "Nome: " << nome << std::endl;
		o << "Nome cientifico: " << cientifico << std::endl;
		o << "Sexo: " << sexo << std::endl;
		o << "Venenoso: " << venenoso << std::endl;
		o << "Habitat: " << habitat << std::endl;
		o << "Identificador do veterinario: " << veterinario.getId() << std::endl;
		o << "Identificador do tratador: " << tratador.getId() << std::endl;
		o << "Quantidade de Mudas: " << qtdmudas; 
		o << "Número do ibama: " << numibama << std::endl;
		o << "Regiao de Origem: " << regiaoorigem << std::endl;		
		return o;
	}


}	