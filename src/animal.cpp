/** 
 * @file	animal.cpp
 * @brief	Definicao da classe Animal.
 * @author	Alexandre Dantas dos Santos.
 * @since	12/11/2020
 * @date 	24/11/2020
 */

#include "animal.hpp"


namespace PetFera {

	/** @brief Construtor padrão */ 
	Animal::Animal() {}

	/**
	 * @param _id Identificador do animal
	 * @param _classe Classe do animal
	 * @param _tipo Tipo do animal.
	 * @param _nome Nome do animal
	 * @param _cientifico Nome cientifico do animal
	 * @param _sexo Sexo do animal
	 * @param _veterinario Veterinario do animal
	 * @param _tratador Tratador do animal
	 * @param _venenoso Indica se o animal é venenoso
	 * @param _habitat Indica o habitat do animal
	 */	

	Animal::Animal(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico,
	char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat) {
		setId(_id);
		setClasse(_classe);
		setTipo(_tipo);
		setNome(_nome);
		setCientifico(_cientifico);
		setSexo(_sexo);	
		setVeterinario(_veterinario);
		setTratador(_tratador);
		setVenenoso(_venenoso);
		setHabitat(_habitat);
	}

	/** @brief Destrutor padrão */ 
	Animal::~Animal() {}

	/** @return Retorna o id do animal */
	int Animal::getId() {
		return this->id;
	}

	/** @return Retorna a classe do animal */
	std::string Animal::getClasse() {
		return this->classe;
	}

	/** @return Retorna o tipo do animal */
	std::string Animal::getTipo() {
		return this->tipo;
	}

	/** @return Retorna o nome */
	std::string Animal::getNome() {
		return this->nome;
	}

	/** @return Retorna o nome cientifico do animal */
	std::string Animal::getCientifico() {
		return this->cientifico;
	}

	/** @return Retorna o sexo do animal */
	char Animal::getSexo() {
		return this->sexo;
	}

	/** @return Retorna o veterinario do animal */
	Veterinario Animal::getVeterinario() {
		return this->veterinario;
	}

	/** @return Retorna o tratador do animal */
	Tratador Animal::getTratador() {
		return this->tratador;
	}

	/** @return Retorna se o animal e venenoso */
	bool Animal::getVenenoso() {
		return this->venenoso;
	}
	/** @return Retorna o habitat do animal */
	std::string Animal::getHabitat() {
		return this->habitat;

	}

	/** @return Atualiza o id do animal */
	void Animal::setId(int _id) {
		this->id = _id;
	}

	/** @return Atualiza a classe do animal */
	void Animal::setClasse(std::string _classe) {
		this->classe = _classe;
	}

	/** @return Atualiza o tipo do animal */
	void Animal::setTipo(std::string _tipo) {
		this->tipo = _tipo;
	}

	/** @return Atualiza o nome do animal */
	void Animal::setNome(std::string _nome) {
		this->nome = _nome;
	}

	/** @return Atualiza o nome cientifico do animal */
	void Animal::setCientifico(std::string _cientifico) {
		this->cientifico = _cientifico;
	}

	/** @return Atualiza o sexo do animal */
	void Animal::setSexo(char _sexo) {
		this->sexo = _sexo;
	}
	 
	/** @return Atualiza o veterinario do animal */
	void Animal::setVeterinario(Veterinario _veterinario) {
		this->veterinario = _veterinario;
	}
	
	/** @return Atualiza o tratador do animal */ 
	void Animal::setTratador(Tratador _tratador) {
		this->tratador = _tratador;
	}

	/** @return Atualiza se o animal e venenoso */
	void Animal::setVenenoso(bool _venenoso) {
		this->venenoso = _venenoso;
	}
	/** @return Atualiza o habitat do animal */
	void Animal::setHabitat(std::string _habitat) {
		this->habitat = _habitat;
	}

	/** @return Método para stream de saida */
	std::ostream& operator<< (std::ostream &o, Animal &a) {
		return a.print(o);
	}

	/** @return Método para impressão de saída */
	std::ostream& 
	Animal::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		return o;
	}

	/** 
 	 * @param a Referencia para um objeto Animal
  	 * @return true ou false 
 	 */
	bool Animal::operator==(const Animal &a) {
		if(id == a.id) {
			return true;
		}
		else {
			return false;
		}
	}
}