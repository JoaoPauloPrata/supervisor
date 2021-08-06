#ifndef ITEM_IMPL_H
#define ITEM_IMPL_H

#include "./item.h"

using namespace std;

class ItemImpl : public Item
{
protected:
    string id;
    string name;
    float price;

public:
    ItemImpl();

    ItemImpl(string id, string name, float price);

    virtual ~ItemImpl(){};

    virtual string getId();

    virtual void setId(string value);

    virtual string getName();

    virtual void setName(string value);

    virtual float getPrice();

    virtual void setPrice(float value);
};

#endif
