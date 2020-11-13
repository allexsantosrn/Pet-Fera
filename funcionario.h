#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_

#include <iostream>

using namespace std;

class Funcionario {

private:
	
int id;
string nome;
string tipo;

public:

Funcionario();
Funcionario(int id_, string nome_, string tipo_);
~Funcionario();

void setId(int id_);
void setNome(string nome_);
void setTipo (string tipo_);

int getId();
string getNome();
string getTipo();

};

#endif