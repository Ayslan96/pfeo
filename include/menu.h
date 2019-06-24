/**
* @file menu.h
* @brief Classe Menu
* @brief Definindo biblioteca menu.h
*/
#ifndef _MENU_H_
#define _MENU_H_

/** @brief Inclui a biblioteca iostream  */
#include <iostream>

/** @brief Inclui a biblioteca interfaces.h  */
#include "interfaces.h"

/** @brief Define a classe Interfaces */
class Menu{

public:

	/** @brief Define o método de interação com o usuário */
	void menuM();

	/** @brief Define o método de interação com o usuário para cadastrar um animal */
	void cadastrarAnimal();

	/** @brief Define o método de interação com o usuário para cadastrar um funcionário */
	void cadastrarFuncionario();
	//void removerAnimal();
	//void alterarCadastroAnimal();
	//void consultarAnimal();
	//void cadastrarNovofuncionario();
	//void removerFuncionario();
	//void alteraçãoCadastroFuncionario();
	//void consultarFuncionario();
	//void cadastrarAnimal();



};


#endif