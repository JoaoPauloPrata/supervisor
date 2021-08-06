#ifndef SOLD_ITEM_IMPL_H
#define SOLD_ITEM_IMPL_H

#include "./sold_item.h"

using namespace std;

class SoldItemImpl : public SoldItem
{
protected:
    string id;
    Item *item;

public:
    SoldItemImpl();

    SoldItemImpl(string id, Item *item);

    virtual ~SoldItemImpl(){};

    virtual string getId();

    virtual void setId(string value);

    virtual Item *getItem();

    virtual void setItem(Item *value);
};

#endif
