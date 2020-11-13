#ifndef _PAINEL_
#define _PAINEL_


#include <iostream>

#include "funcionario.h"

using namespace std;

class Painel {


public:

	void CadastrarFuncionario() {

		Funcionario funcionario;


		int id;
		string nome;
		string tipo;

		cout << "Digite o id do funcionario:" << endl;
		cin >> id;

		cout << "Digite o nome do funcionario:" << endl;
		cin >> nome;

		cout << "Digite o tipo do funcionário:" << endl;
		cin >> tipo;
		

		funcionario.setId(id);
		funcionario.setNome(nome);
		funcionario.setTipo(tipo);

		cout << "Funcionario " << funcionario.getNome()<<" cadastrado com sucesso!!!!"<< endl;

		
	}

	
};

#endif


