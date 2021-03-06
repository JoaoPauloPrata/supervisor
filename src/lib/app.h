/**
 * @file app.h
 */

#ifndef APP_H
#define APP_H
/// @cond
#include <list>
#include <map>
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
   * @brief Generate report
   * @return nothing to return
   */
  void report();

  /**
   * @brief List to delete item
   * @return list of purchased items
   */
  std::map<std::string, std::string> deleteFromReceiptList();

  void deletePurchase(std::string);

  /**
   * @brief receipt_list
   */
  Receipt *receipt;

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
};

/*! \mainpage Trabalho de Engenharia de Software
*
* \section Introdu????o
*
* Desenvolvimento de um Framework C++.
*
* ?? um software para Desktops que permita gerenciar um caixa de um com??rcio juntamente das vendas realizadas.
* ?? esperado que o software permita o cadastro e manipula????o dos itens que s??o vendidos no com??rcio,
* al??m dos funcion??rios e seus respectivos logins no sistema. Tamb??m deve ser poss??vel gerar uma nota
* fiscal a cada dia de servi??o a qual deve conter o valor do caixa ao iniciar o dia, assim como os
* itens vendidos com a hora e minuto da venda. O software tamb??m deve ser capaz de gerar um relat??rio
* do dia, contendo o lucro, a data do relat??rio, o valor que o caixa foi iniciado e os itens vendidos
* na mesma data. O sistema tamb??m deve privar algumas funcionalidades de acordo com o tipo de
* acesso permitido ao usu??rio. Onde o administrador tem total acesso ao sistema e o funcion??rio
* deve apenas adicionar ou remover um item vendido a uma nota fiscal do dia corrente, e gerar
* relat??rios da mesma.
*
* \author Grupo
* 
* \section install_sec Installation
* \subsection step Step 1: API
* 
*/

#endif // APP_H
