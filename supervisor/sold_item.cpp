#ifndef SOLD_ITEM_CPP
#define SOLD_ITEM_CPP

#include "./sold_item_impl.h"

using namespace std;

SoldItemImpl::SoldItemImpl() : id(""), item(NULL){};

SoldItemImpl::SoldItemImpl(string id = "", Item *item = NULL) : id(id), item(item){};

SoldItemImpl::~SoldItemImpl(){};

string SoldItemImpl::getId()
{
  return id;
};

void SoldItemImpl::setId(string value)
{
  id = value;
};

Item *SoldItemImpl::getItem()
{
  return item;
};

void SoldItemImpl::setItem(Item *value)
{
  item = value;
};

#endif
