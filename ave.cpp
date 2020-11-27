/** 
 * @file	ave.cpp
 * @brief	Definicao da classe Ave.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#include "ave.hpp"


namespace PetFera {

	/** @brief Construtor padrão */ 
	Ave::Ave() {}

	/**
	 * @param _id Identificador do animal
	 * @param _classe Classe do animal
	 * @param _nome Nome do animal
	 * @param _cientifico Nome cientifico do animal
	 * @param _sexo Sexo do animal
	 * @param _veterinario Veterinario do animal
	 * @param _tratador Tratador do animal
	 * @param _venenoso Indica se o animal é venenoso
	 * @param _habitat Indica o habitat do animal
	 * @param _tambico Tamanho do bico
	 */	
			
	Ave::Ave(int _id, std::string _classe, std::string _nome, std::string _cientifico,
						char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico): 
						Animal(_id,_classe,_nome,_cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat) {
						settamBico(_tambico);
	}

	/** @brief Destrutor padrão */ 
	Ave::~Ave() {}

	/** @return Retorna o tamanho do bico da ave */
	int Ave::gettamBico() {
		return this->tambico;
	}
	/** @return Atualiza o tamanho do bico da ave */
	void Ave::settamBico(int _tambico) {
		this->tambico = _tambico;
	}

	/** @return Método para stream de saida */
	std::ostream& 
	Ave::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		o << "Classe: " << classe << std::endl; 
		o << "Nome: " << nome << std::endl;
		o << "Nome cientifico: " << cientifico << std::endl;
		o << "Sexo: " << sexo << std::endl;
		o << "Venenoso: " << venenoso << std::endl;
		o << "Habitat: " << habitat << std::endl;
		o << "Identificador do veterinario: " << veterinario.getId() << std::endl;
		o << "Identificador do tratador: " << tratador.getId() << std::endl;
		o << "Tamanho do Bico: " << tambico; 
		return o;
	}
	
	
}