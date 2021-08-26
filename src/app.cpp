#include "./lib/app.h"
#include "./userimpl.h"
#include "./itemimpl.h"
#include "./purchaseimpl.h"
#include "./receiptimpl.h"

App::App()
{
  this->createUser("admin", "admin");
  receipt = new ReceiptImpl();
};

App &App::getInstance()
{
  static App instance;
  return instance;
};

int App::login(std::string u, std::string p)
{
  if (user_list.size() == 0)
    return 0;
  for (auto user : user_list)
  {
    if (u == user->getUsername() && p == user->getPassword())
    {
      return 1;
    };
  }
  return 0;
};

void App::addUser(User *u)
{
  user_list.push_back(u);
};

void App::createUser(std::string u, std::string p)
{
  User *user = new UserImpl(u, p);
  addUser(user);
};

Item* App::createItem(std::string id, std::string name, float price)
{
  Item *item = new ItemImpl(id, name, price);
  return item;
}

Purchase* App::createPurchase(int quantity, std::string time, Item *i)
{
  Purchase *pur = new PurchaseImpl(i, quantity, time);
  receipt->add(pur);
  return pur;
}

void App::report() {
  receipt->report();
}

std::map<std::string, std::string> App::deleteFromReceiptList() {
  return receipt->deleteFromReceiptList();
}

void App::deletePurchase(std::string s) {
  receipt->deletePurchase(s);
}