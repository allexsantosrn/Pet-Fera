/** 
 * @file	anfibio.cpp
 * @brief	Definicao das classe Anfíbio.
 * @author	Alexandre Dantas dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */	

#include "anfibio.hpp"


namespace PetFera {

	/** @brief Construtor padrão */ 
	Anfibio::Anfibio() {}

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
	 * @param _qtdmudas Quantitativo total de mudas do anfibio
	 */		
	Anfibio::Anfibio(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico,
						char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _qtdmudas): 
						Animal(_id,_classe,_tipo,_nome,_cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat) {
						setqtdMudas(_qtdmudas);
	}

	/** @brief Destrutor padrão */ 
	Anfibio::~Anfibio() {}

	/** @return Retorna o quantitativo total de mudas do anfíbio; */
	int Anfibio::getqtdMudas() {
		return this->qtdmudas;
	}

	/** @return Atualiza o quantitativo total de mudas do anfíbio; */
	void Anfibio::setqtdMudas(int _qtdmudas) {
		this->qtdmudas = _qtdmudas;
	}

	/** @return Método para stream de saida; */
	std::ostream& 
	Anfibio::print(std::ostream &o) {
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
		o << "Quantidade de Mudas: " << qtdmudas; 
		return o;
	}

	
	
}