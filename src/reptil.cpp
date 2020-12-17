/** 
 * @file	reptil.cpp
 * @brief	Definicao das classe Reptil.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto.
 * @since	12/11/2020
 * @date 	24/11/2020
 */	


#include "reptil.hpp"


namespace PetFera {

	// Construtor padrao
	Reptil::Reptil() {}

	/**
	 * @param _id Identificador do animal
	 * @param _classe Classe do animal
	 * @param _tipo Tipo do animal
	 * @param _nome Nome do animal
	 * @param _cientifico Nome cientifico do animal
	 * @param _sexo Sexo do animal
	 * @param _veterinario Veterinario do animal
	 * @param _tratador Tratador do animal
	 * @param _venenoso Indica se o animal é venenoso
	 * @param _habitar Indica o habitat do animal
	 * @param _tipopele Tipo da pele do Reptil.
	 */		
			
	Reptil::Reptil(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico,
						char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, std::string _tipopele): 
						Animal(_id,_classe,_tipo,_nome,_cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat) {
						settipoPele(_tipopele);
	}

	// Destrutor padrao
	Reptil::~Reptil() {}

	/** @return Retorna o tipo da pele do Reptil */
	std::string Reptil::gettipoPele() {
		return this->tipopele;
	}
	/** @return Atualiza o o tipo da pele do Reptil */
	void Reptil::settipoPele(std::string _tipopele) {
		this->tipopele = _tipopele;
	}

	/** @return Método para stream de saída */
	std::ostream& 
	Reptil::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		o << "Classe: " << classe << std::endl; 
		o << "Tipo: " << tipo << std::endl; 
		o << "Nome: " << nome << std::endl;
		o << "Nome cientifico: " << cientifico << std::endl;
		o << "Sexo: " << sexo << std::endl;
		o << "Venenoso: " << venenoso << std::endl;
		o << "Habitat: " << habitat << std::endl;
		o << "Identificador do veterinario: " << veterinario.getId() << std::endl;
		o << "Identificador do tratador: " << tratador.getId() << std::endl;
		o << "Tipo de Pele: " << tipopele; 
		return o;
	}	
	
	
}