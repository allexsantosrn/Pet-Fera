# Projeto Final de Linguagem de Programação I

### Projeto Pet Fera

**Componentes:**

- Alexandre Dantas dos Santos
- Esdras Israel
- Irineu Anacleto

**Professor:**
	
- Silvio Costa Sampaio

## Objetivo

O objetivo deste trabalho é implementar um programa de cadastro de animais para a loja de animais silvestres Pet Fera. 

## Tarefa

A tarefa central da Parte I do Projeto de Programação é desenvolver um programa em C++ para controlar o cadastro de animais silvestres da Pet Fera, segundo as características descritas anteriormente. Para resolver o problema, você deverá implementar um modelo de classes que reflita a situação descrita. 

## Operações suportadas

	1 - Cadastrar animal;
	2 - Remover do animal;
	3 - Alterar animal;
	4 - Consultar animal;
	5 - Consultar classe de animais;
    6 - Consultar animais sob responsabilidade de funcionário;
	7 - Cadastrar Funcionário;
	8 - Remover Funcionário;
	9 - Alterar Funcionário;
	10 - Consultar Funcionário;

## Compilação

Executar o seguinte comando no terminal: g++ -std=c++11 -Wall main.cpp menu.cpp funcionario.cpp tratador.cpp veterinario.cpp animal.cpp anfibio.cpp ave.cpp reptil.cpp silvestre.cpp exotico.cpp nativo.cpp mamifero.cpp anfibioexotico.cpp aveexotica.cpp mamiferoexotico.cpp reptilexotico.cpp mamiferonativo.cpp avenativa.cpp reptilnativo.cpp anfibionativo.cpp -o prog

Caso queira testar os construtores do animal, veterinario e tratador, executar: g++ -Wall teste.cpp funcionario.cpp tratador.cpp veterinario.cpp animal.cpp anfibio.cpp ave.cpp reptil.cpp silvestre.cpp exotico.cpp nativo.cpp mamifero.cpp anfibioexotico.cpp aveexotica.cpp mamiferoexotico.cpp reptilexotico.cpp mamiferonativo.cpp avenativa.cpp reptilnativo.cpp anfibionativo.cpp -o prog

Em seguida para compilar: ./prog

