#include "animal.hpp"


namespace PetFera {

	// Construtor padrao
	Animal::Animal() {}

	
	Animal::Animal(int _id, std::string _classe, std::string _nome, std::string _cientifico,
	char _sexo, Veterinario _veterinario, Tratador _tratador, bool _venenoso, std::string _habitat) {
		setId(_id);
		setClasse(_classe);
		setNome(_nome);
		setCientifico(_cientifico);
		setSexo(_sexo);	
		setVeterinario(_veterinario);
		setTratador(_tratador);
		setVenenoso(_venenoso);
		setHabitat(_habitat);
	}

	//	Destrutor padrao
	Animal::~Animal() {}


	int Animal::getId() {
		return this->id;
	}

	
	std::string Animal::getClasse() {
		return this->classe;
	}


	std::string Animal::getNome() {
		return this->nome;
	}

	
	std::string Animal::getCientifico() {
		return this->cientifico;
	}

	
	char Animal::getSexo() {
		return this->sexo;
	}

	
	Veterinario Animal::getVeterinario() {
		return this->veterinario;
	}

	
	Tratador Animal::getTratador() {
		return this->tratador;
	}

	 
	bool Animal::getVenenoso() {
		return this->venenoso;
	}

	std::string Animal::getHabitat() {
		return this->habitat;

	}

	 
	void Animal::setId(int _id) {
		this->id = _id;
	}

	 
	void Animal::setClasse(std::string _classe) {
		this->classe = _classe;
	}

	 
	void Animal::setNome(std::string _nome) {
		this->nome = _nome;
	}

	 
	void Animal::setCientifico(std::string _cientifico) {
		this->cientifico = _cientifico;
	}

	 
	void Animal::setSexo(char _sexo) {
		this->sexo = _sexo;
	}
	 
	 
	void Animal::setVeterinario(Veterinario _veterinario) {
		this->veterinario = _veterinario;
	}
	
	 
	void Animal::setTratador(Tratador _tratador) {
		this->tratador = _tratador;
	}

	 
	void Animal::setVenenoso(bool _venenoso) {
		this->venenoso = _venenoso;
	}

	void Animal::setHabitat(std::string _habitat) {
		this->habitat = _habitat;
	}

	
	std::ostream& operator<< (std::ostream &o, Animal &a) {
		return a.print(o);
	}

	std::ostream& 
	Animal::print(std::ostream &o) {
		o << "Identificador: " << id << std::endl;
		return o;
	}

	
	bool Animal::operator==(const Animal &a) {
		if(id == a.id) {
			return true;
		}
		else {
			return false;
		}
	}
}