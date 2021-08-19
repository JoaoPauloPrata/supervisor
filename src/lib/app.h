/**
 * @file app.h
 */

#ifndef APP_H
#define APP_H
/// @cond
#include <list>
/// @endcond
#include "./user.h"
#include "./receipt.h"

/**
 * @brief The App class
 */
class App
{
public:
  /**
   * @brief getInstance
   * @return Same instance of App because of Singleton design pattern.
   */
  static App &getInstance();

  /**
   * @brief login
   * @param u username
   * @param p password
   * @return 0 for error and 1 for permission
   */
  int login(std::string u, std::string p);

  /**
   * @brief Factory method to create users
   * @param u username
   * @param p password
   * @return nothing to return
   */
  void createUser(std::string u, std::string p);

  /**
   * @brief Factory method to create items
   * @param id unique id
   * @param name item's name
   * @param price price in R$
   * @return reference to created item
   */
  Item* createItem(std::string id, std::string name, float price);

  /**
   * @brief Factory method to create purchase
   * @param quantity quantity of items bought
   * @param time time of purchase hh:mm
   * @param i item bought
   * @return reference to created purchase
   */
  Purchase* createPurchase(int quantity, std::string time, Item *i);

  /**
   * @brief addToReceipt
   * @param p
   */
  void addToReceipt(Purchase *p);

private:
  /**
   * @brief App
   */
  App();

  /**
   * @brief App
   */
  App(App const &);

  /**
   * @brief ~App
   */
  virtual ~App(){};

  /**
   * @brief operator =
   */
  void operator=(App const &);

  /**
   * @brief addUser
   * @param u User that will be added to the app.
   */
  void addUser(User *u);

  /**
   * @brief user_list
   */
  std::list<User *> user_list;

  /**
   * @brief receipt_list
   */
  Receipt *receipt;
};

/*! \mainpage Trabalho de Engenharia de Software
*
* \section Introdução
*
* Desenvolvimento de um Framework C++.
*
* É um software para Desktops que permita gerenciar um caixa de um comércio juntamente das vendas realizadas.
* É esperado que o software permita o cadastro e manipulação dos itens que são vendidos no comércio,
* além dos funcionários e seus respectivos logins no sistema. Também deve ser possível gerar uma nota
* fiscal a cada dia de serviço a qual deve conter o valor do caixa ao iniciar o dia, assim como os
* itens vendidos com a hora e minuto da venda. O software também deve ser capaz de gerar um relatório
* do dia, contendo o lucro, a data do relatório, o valor que o caixa foi iniciado e os itens vendidos
* na mesma data. O sistema também deve privar algumas funcionalidades de acordo com o tipo de
* acesso permitido ao usuário. Onde o administrador tem total acesso ao sistema e o funcionário
* deve apenas adicionar ou remover um item vendido a uma nota fiscal do dia corrente, e gerar
* relatórios da mesma.
*
* \author Grupo
* 
* \section install_sec Installation
* \subsection step Step 1: API
* 
*/

#endif // APP_H
