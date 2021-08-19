#include "./lib/app.h"
#include "./userimpl.h"
#include "./itemimpl.h"
#include "./purchaseimpl.h"

App::App()
{
  this->createUser("admin", "admin");
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

void App::addToReceipt(Purchase *p)
{
  receipt->add(p);
};

Item* App::createItem(std::string id, std::string name, float price)
{
  Item *item = new ItemImpl(id, name, price);
  return item;
}

Purchase* App::createPurchase(int quantity, std::string time, Item *i)
{
  Purchase *pur = new PurchaseImpl(i, quantity, time);
  return pur;
}