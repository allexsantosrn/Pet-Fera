#include <iostream>

//#include "painel.hpp"

using namespace std;

int main () {

	//Painel painel;

	int selecao;


	while (true) {


		cout << endl << "---------Pet Fera---------" << endl;
		cout << "(1) Cadastrar Animal" << endl;
		cout << "(2) Remover Animal" << endl;
		cout << "(3) Alterar Animal" << endl;
		cout << "(4) Consultar Animal" << endl;
		cout << "(5) Consultar Classe de Animais" << endl;
		cout << "(6) Consultar Animais de Funcionario" << endl;
		cout << "(7) Cadastrar Funcionário" << endl;
		cout << "(8) Remover Funcionário" << endl;
		cout << "(9) Alterar Funcionário" << endl;
		cout << "(10) Consultar Funcionário" << endl;
		cout << "(0) Sair" << endl;
		cout << "Selecionar Opção: ";
		cin >> selecao;	


		switch(selecao) {

			case 1:
				cout << "teste1" << endl;
				break;

			case 2:
				cout << "teste2" << endl;
				break;

			case 3:
				cout << "teste3" << endl;
				break;

			case 4:
				cout << "teste4" << endl;
				break;

			case 5:
				cout << "teste5" << endl;
				break;

			case 6:
				cout << "teste6" << endl;
				break;

			case 7:
				//painel.CadastrarFuncionario();
				break;

			case 8:
				cout << "teste8" << endl;
				break;

			case 9:
				cout << "teste9" << endl;
				break;

			case 10: 
				cout << "teste10" << endl;
				break;

			case 0:
				cout << "Programa encerrado." << endl;
				return 0;

			default:
				cout << "Valor inválido." << endl;
				break;

		}


}

return 0;

}


	


	
	
