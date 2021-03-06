/** 
 * @file	avenativa.cpp
 * @brief	Definicao da classe Ave Nativa.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#include "avenativa.hpp"


namespace PetFera {

	/** @brief Construtor padrão */ 
	AveNativa::AveNativa() {}

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
	 * @param _habitat Indica o habitat do animal
	 * @param _tambico Tamanho do bico
	 * @param _numibama Numero do animal referente ao Ibama
	 * @param _regiaoorigem Regiao de origem do animal
	 */	
	
	AveNativa::AveNativa(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, 
									char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat, int _tambico, 
									std::string _numibama, std::string _regiaoorigem): 
									Ave(_id, _classe, _tipo, _nome, _cientifico,_sexo,_veterinario,_tratador,_venenoso,_habitat,_tambico), 
									Nativo(_numibama, _regiaoorigem) {}

	/** @brief Destrutor padrão */ 
	AveNativa::~AveNativa() {}

	/** @return Método para stream de saida */
	std::ostream& 
	AveNativa::print(std::ostream &o) {
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
		o << "Tamanho do Bico: " << tambico << std::endl;
		o << "Número do ibama: " << numibama << std::endl;
		o << "Regiao de Origem: " << regiaoorigem << std::endl;		
		return o;
	}


}	