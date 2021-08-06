#ifndef ITEM_H
#define ITEM_H

#include <QWidget>
#include <string>

using namespace std;

class Item
{
    Q_OBJECT
public:
    virtual ~Item(){};

    virtual string getId() = 0;

    virtual void setId(string value) = 0;

    virtual string getName() = 0;

    virtual void setName(string value) = 0;

    virtual float getPrice() = 0;

    virtual void setPrice(float value) = 0;
};

#endif
