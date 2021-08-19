#include "./itemimpl.h"

using namespace std;

ItemImpl::ItemImpl() : id(""), name(""), price(0.0){};

ItemImpl::ItemImpl(string id, string name, float price) : id(id), name(name), price(price){};

ItemImpl::~ItemImpl(){};

string ItemImpl::getId() const
{
  return id;
};

void ItemImpl::setId(string value)
{
  id = value;
};

string ItemImpl::getName() const
{
  return name;
};

void ItemImpl::setName(string value)
{
  name = value;
};

float ItemImpl::getPrice() const
{
  return price;
};

void ItemImpl::setPrice(float value)
{
  price = value;
};
