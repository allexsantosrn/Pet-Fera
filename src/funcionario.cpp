/** 
 * @file	funcionario.cpp
 * @brief	Definicao da classe Funcionario.
 * @author	Alexandre Dantas dos Santos e Esdras Israel Ferino dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */
#include "funcionario.hpp"


namespace PetFera {

	/** @brief Construtor padrão */ 
	Funcionario::Funcionario() {}

	/**
	 * @param _id Identificador do funcionario
	 * @param _string_nome Nome do funcionario
	 * @param _string_funçao Funçao do funcionario
	 * @param _string_cpf CPF do funcionario
	 */	

	Funcionario::Funcionario(int _id, std::string _nome, std::string _funcao, std::string _cpf) {

		setId(_id);
		setNome(_nome);
		setFuncao(_funcao);
		setCpf(_cpf);
		
	}

	/** @brief Destrutor padrão */ 
	Funcionario::~Funcionario() {}

	/** @return Retorna o id do funcionario*/
	int Funcionario::getId() {
		return this->id;
	}

	/** @return Retorna o nome do funcionario*/
	std::string Funcionario::getNome() {
		return this->nome;
	}

	/** @return Retorna a fuçao do funcionario*/
	std::string Funcionario::getFuncao() {
		return this->funcao;
	}

	/** @return Retorna o cpf do funcionario*/
	std::string Funcionario::getCpf() {
		return this->cpf;
	}

	/** @return Atualiza o id do funcionario*/
	void Funcionario::setId(int _id) {
		this->id = _id;
	}

	/** @return Atualiza o nome do funcionario*/
	void Funcionario::setNome(std::string _nome) {
		this->nome = _nome;
	}

	/** @return Atualiza a funçao do funcionario*/
	void Funcionario::setFuncao(std::string _funcao) {
		this->funcao = _funcao;
	}

	/** @return Atualiza o cpf do funcionario*/
	void Funcionario::setCpf(std::string _cpf) {
		this->cpf = _cpf;
	}

	/** @return Método para stream de saida */
	std::ostream& operator<< (std::ostream &o, Funcionario const &f) {
		return f.print(o);
	}

	/** 
 	 * @param f Referencia para um objeto Funcionario
  	 * @return true ou false 
 	 */	 
	bool Funcionario::operator==(const Funcionario &f) {

		if(id == f.id) {
			return true;
		}
		else {
			return false;
		}
	}
}