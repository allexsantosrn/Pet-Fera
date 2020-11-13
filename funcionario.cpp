#include "funcionario.h"


Funcionario::Funcionario() {

	
}

Funcionario::Funcionario(int id_, string nome_, string tipo_) {

	this->id = id_;
	this->nome = nome_;
	this->tipo = tipo_;

}

Funcionario::~Funcionario() {

}

void Funcionario::setId(int id_) {
	this->id = id_;
	
}


void Funcionario::setNome(string nome_) {
	this->nome = nome_;
}

void Funcionario::setTipo(string tipo_) {
	this->tipo = tipo_;
}


int Funcionario::getId() {
	return this->id;
}

string Funcionario::getNome() {
	return this->nome;

}

string Funcionario::getTipo() {
	return this->tipo;

}
