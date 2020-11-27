/** 
 * @file	tratador.cpp
 * @brief	Definicao da classe tratador.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#include "tratador.hpp"


namespace PetFera {

	/** @brief Construtor padrão */ 
	Tratador::Tratador() {}

	/**
	 * @param _id Identificador do funcionario
	 * @param _string_nome Nome do funcionario
	 * @param _string_funçao Funçao do funcionario
	 * @param _string_cpf CPF do funcionario
	 * @param _nivelseguranca Nivel de segurança do tratador
	 */	


	
	Tratador::Tratador(int _id, std::string _nome, std::string _funcao, std::string _cpf, std::string _nivelseguranca):
	Funcionario(_id, _nome, _funcao, _cpf),
	nivelseguranca(_nivelseguranca)  {}

	/** @brief Destrutor padrão */ 
	Tratador::~Tratador() {}

	/** @return Retorna o nivel de segurança do tratador */
	std::string
	Tratador::getnivelSeguranca () {

		return this->nivelseguranca;
	}

	/** @return Atualiza o nivel de segurança do tratador */
	void
	Tratador::setnivelSeguranca(std::string _nivelseguranca) {

		this->nivelseguranca = _nivelseguranca;
	}	

	/** @return Método para stream de saida */
	std::ostream& 
	Tratador::print(std::ostream &o) const {
		o << "Identificador: " << id << std::endl;
		o << "Nome: " << nome << std::endl;
		o << "CPF: " << cpf << std::endl;
		o << "Funcao: " << funcao << std::endl; 
		o << "Nível de Segurança: " << nivelseguranca; 
		return o;
	}
}