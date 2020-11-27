/** 
 * @file	veterinario.cpp
 * @brief	Definicao da classe veterinario.
 * @author	Alexandre Dantas dos Santos e Irineu Anacleto de Lira Neto
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#include "veterinario.hpp"

namespace PetFera {

	/** @brief Construtor padrão */ 
	Veterinario::Veterinario() {}

	/**
	 * @param _id Identificador do funcionario
	 * @param _string_nome Nome do funcionario
	 * @param _string_funçao Funçao do funcionario
	 * @param _string_cpf CPF do funcionario
	 * @param _crmv crmv do veterinario
	 */	

	Veterinario::Veterinario(int _id, std::string _nome, std::string _funcao, std::string _cpf, std::string _crmv):
	Funcionario(_id, _nome, _funcao, _cpf),
	crmv(_crmv) {}


	/** @brief Destrutor padrão */ 
	Veterinario::~Veterinario() {}

	/** @return Retorna o CRMV do veterinario */
	std::string
	Veterinario::getCrmv () {

		return this->crmv;
	}
	/** @return Atualiza o CRMV  do funcionario */
	void
	Veterinario::setCrmv(std::string _crmv) {

		this->crmv = _crmv;
	}	

	/** @return Método para stream de saida */
	std::ostream&
	Veterinario::print(std::ostream &o) const {
		o << "Identificador: " << id << std::endl;
		o << "Nome: " << nome << std::endl;
		o << "CPF: " << cpf << std::endl;
		o << "Funcao: " << funcao << std::endl; 
		o << "CRMV: " << crmv; 
		return o;
	}
}