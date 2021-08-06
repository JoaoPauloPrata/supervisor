#ifndef SOLD_ITEM_H
#define SOLD_ITEM_H

#include <string>

#include "./item.h"

using namespace std;

class SoldItem
{
public:
    virtual ~SoldItem(){};

    virtual string getId() = 0;

    virtual void setId(string value) = 0;

    virtual Item *getItem() = 0;

    virtual void setItem(Item *value) = 0;
};

#endif
