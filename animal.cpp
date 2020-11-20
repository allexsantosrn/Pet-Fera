#include "animal.hpp"


Animal::Animal() {}

Animal::Animal(int _id, std::string _classe, std::string _nome, std::string _nomecientifico, char _sexo, Veterinario _veterinario, Tratador _tratador) {

	setId(_id);
	setClasse(_classe);
	setNome(_nome);
	setnomeCientifico(_nomecientifico);
	setSexo(_sexo);
	setVeterinario(_veterinario);
	setTratador(_tratador);
	
	}

Animal::~Animal() {}

int 
Animal::getId() {
		return id;
	}

std::string 
Animal::getClasse() {
		return classe;
	}

	
std::string 
Animal::getNome() {
		return nome;
	}

std::string 
Animal::getnomeCientifico() {
		return nomecientifico;
	}

char 
Animal::getSexo() {
		return sexo;
	}

Veterinario 
Animal::getVeterinario() {
		return veterinario;
	}

Tratador 
Animal::getTratador() {
		return tratador;
	}
 
void 
Animal::setId(int _id) {
		id = _id;
	}

	 
void 
Animal::setClasse(std::string _classe) {
		classe = _classe;
	}

	
void 
Animal::setNome(std::string _nome) {
		nome = _nome;
	}

	
void 
Animal::setnomeCientifico(std::string _nomecientifico) {
		nomecientifico = _nomecientifico;
	}

	
void 
Animal::setSexo(char _sexo) {
		sexo = _sexo;
	}

	
void 
Animal::setVeterinario(Veterinario _veterinario) {
		veterinario = _veterinario;
	}
	
	 
void 
Animal::setTratador(Tratador _tratador) {
		tratador = _tratador;
	}

std::ostream& 
operator<< (std::ostream &o, Animal a){
	o << "Id: " << a.getId() << std::endl;
	o << "Classe: " << a.getClasse() << std::endl;
	o << "Nome: " << a.getNome() << std::endl;
	o << "Nome Científico: " << a.getnomeCientifico() << std::endl;
	o << "Sexo: " << a.getSexo() << std::endl;
	o << "Veterinario Associado: \n" << a.getVeterinario() << std::endl;	
	o << "Tratador Associado:\n " << a.getTratador();
	return o;
}

std::istream&
operator>> (std::istream &i, Animal &a){
	i >> a.id >> a.classe >> a.nome >> a.nomecientifico >> a.sexo >> a.veterinario >> a.tratador;
	return i;
} 
	

	

