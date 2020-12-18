# Projeto Final de Linguagem de Programação I

### Projeto Pet Fera

**Componentes:**

- Alexandre Dantas dos Santos
- Esdras Israel Ferino dos Santos
- Irineu Anacleto de Lira Neto

**Professor:**
	
- Silvio Costa Sampaio

## Objetivo

O objetivo deste trabalho é implementar um programa de cadastro de animais para a loja de animais silvestres Pet Fera. 

## Tarefa

A tarefa central da Parte I do Projeto de Programação foi desenvolver um programa em C++ para controlar o cadastro de animais silvestres da Pet Fera, segundo as características descritas no projeto. Para resolver o problema, foi implementado um modelo de classes que refletia a situação descrita. Este modelo consistia em cadastros de funcionários e animais, com opções também de consulta, alteração e remoção.

Na segunda fase do projeto, foi implementado o modelo de gravação dos arquivos em formato: .csv. Para isso, as rotinas de importação e exportação das planilhas com a listagem de funcionários e animais foram criadas. As planilhas estão salvas no diretório "data", presente na pasta raiz do projeto. Além disso, foi utilizado também o modelo com possibilidade de instalação e desinstalação das bibliotecas do projeto, de nome: petfera.so. 
Ainda nesta fase 2, foram corrigidos também alguns problemas sugeridos pelo professor Silvio, entre esses problemas, a unificação das listas de veterinários e tratadores em uma só, de nome lista_funcionários; A correção na declaração de métodos destrutores como virtuais, entre outros pequenos problemas.

Dentro do documento: RelatorioPetFera.pdf, temos alguns detalhes mais específicos do desenvolvimento do sistema.

O link final de apresentação do projeto é este: https://www.youtube.com/watch?v=XW8xj_zA6bU

## Dificuldades

A primeira fase do projeto levou uma maior dificuldade em virtude da sua dimensão e construção das classes. A principal dificuldade foi na utilização dos ponteiros inteligentes e da entidade map. A distância em virtude do isolamento social, também trouxe um pouco de dificuldade na comunicação entre os membros do projeto.

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

Digite 'sudo make' na pasta principal do projeto;

Digite 'sudo make install' para instalar as bibliotecas no sistema.

Digite 'sudo make uninstall' para desinstalar as bibliotecas do sistema.

## Execução

Digitar: ./bin/petfera_boys

## Documentação

A documentação do projeto está localizada na pasta: Doxygen, presente na pasta raiz do projeto. O arquivo principal é o index.html.
