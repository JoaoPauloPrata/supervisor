#include "./purchaseimpl.h"

PurchaseImpl::PurchaseImpl(){};

PurchaseImpl::PurchaseImpl(Item *item, int quantity, std::string time)
    : quantity(quantity), time(time), item(item){};

int PurchaseImpl::getQuantity() const
{
  return quantity;
};

void PurchaseImpl::setQuantity(int q)
{
  quantity = q;
};

std::string PurchaseImpl::getTime() const
{
  return time;
};

void PurchaseImpl::setTime(std::string t)
{
  time = t;
};

Item *PurchaseImpl::getItem() const
{
  return item;
};

void PurchaseImpl::setItem(Item *i)
{
  item = i;
};
